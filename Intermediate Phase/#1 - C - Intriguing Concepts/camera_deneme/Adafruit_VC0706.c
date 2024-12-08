#include "Adafruit_VC0706.h"

void HAL_UART_Receive(UART_HandleTypeDef* UARTx,uint8_t * pData,uint8_t size,uint8_t timeout)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("Receive: %X\n",pData[i]);
    }
}
void HAL_UART_Transmit(UART_HandleTypeDef* UARTx,uint8_t * pData,uint8_t size,uint8_t timeout)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("Transmit: %X\n",pData[i]);
    }
}



Camera_Result runCommand(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t cmd, uint8_t args[], uint8_t argn, uint8_t resplen, bool flushflag)
{   printf("run command\n");
	// flush out anything in the buffer?
  if (flushflag) {
    printf("flushflag\n");
    readResponse(UARTx, DataStruct, 100, 10);
    printf("*///* run command again\n");
  }

	//Send Command to Camera via UART
  sendCommand(UARTx, DataStruct, cmd, args, argn);
	printf("*////*run command - send command is done\n");
	//Receive ACK from Camera via UART
  readResponse(UARTx, DataStruct, resplen, 200);
  printf("*////*run command - read response is done\n");
	//Verify if the right response is given by the Camera
 printf("*////*verify response\n");
  if (! verifyResponse(UARTx, DataStruct,cmd))
    {printf("FAILED BUT LETS SAY OK FOR DEBUG\n");
    return Camera_Result_Ok;}
  printf("OK\n");
  return Camera_Result_Ok;
}

Camera_Result sendCommand(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t cmd, uint8_t args[], uint8_t argn)
{   printf("*////*SEND COMMAND\n");
	uint8_t start = 0x56;
	uint8_t serial = 0x00;
	//uint8_t serial = DataStruct->serialNum;

	UART_HandleTypeDef* Handle = UARTx;

	//Transmit bytes via UART 0x56 0x00 CMD, this is same for every command
	HAL_UART_Transmit(Handle, &start, 1, 1);
	HAL_UART_Transmit(Handle, &serial, 1, 1);
	HAL_UART_Transmit(Handle, &cmd, 1, 1);

	//Transmit rest of the arguments specific to command
	for(int i=0;i<argn;i++)
	{
		HAL_UART_Transmit(Handle, &args[i], 1, 1);
		printf("*////*HAL_UART_TRANSMIT ARGS %d: %X\n",i,args[i]);
	}

	return Camera_Result_Ok;
}

void readResponse(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t numbytes, uint8_t timeout)
{   printf("*****rEAD RESPONSE\n");
	UART_HandleTypeDef* Handle = UARTx;
	uint8_t *UART5_Data = DataStruct->camerabuff;
	//uint8_t UART5_Data[101];
    printf("*****Uart5_Data: %p\n",UART5_Data);
    int i=0;
    for(i=0;i<numbytes;i++){
        UART5_Data[i]+=i;
         printf("Uart5_Data: %d\n",UART5_Data[i]);
    }

	HAL_UART_Receive(Handle, (uint8_t*) &UART5_Data, numbytes, timeout); //receive data from UART and save it in UART5_Data array
    printf("Receive is done\n");


	for(i = 0; i<numbytes;i++)
	{
		DataStruct->camerabuff[i] = UART5_Data[i]; //Modify the object's camerabuffer property to set it to the values read from Camera
		printf("camerabuff: %d\n",DataStruct->camerabuff[i]);
	}
    printf("exiting for loop");
}

Camera_Result verifyResponse(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t command)
{   printf("*////*verify response\n");
	uint8_t serialNum = 0x00;
	//uint8_t serial = DataStruct->serialNum;
	uint8_t *CameraBuffer = DataStruct->camerabuff; //get the values read from Camera stored in object's camerabuff property

	if ((CameraBuffer[0] != 0x76) ||
      (CameraBuffer[1] != serialNum) ||
      (CameraBuffer[2] != command) ||
      (CameraBuffer[3] != 0x0))
      printf("response error");
      return Camera_Result_Error; //if the received data is different from what's expected, throw error
  return Camera_Result_Ok;
}




Camera_Result reset(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct)
{
    printf("Reset\n");
	uint8_t args[1];
	args[0] = 0x00;
	printf("Reset args %d\n",args[0]);

  return runCommand(UARTx, DataStruct, VC0706_RESET, args, 1, 5,false);
}

Camera_Result setImageSize(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t size)
{
	uint8_t args[6];

	args[0] = 0x5;
	args[1] = 0x4;
	args[2] = 0x1;
	args[3] = 0x00;
	args[4] = 0x19;
	args[5] = 0x22;

  return runCommand(UARTx,DataStruct,VC0706_WRITE_DATA, args, sizeof(args), 5,true);
}


Camera_Result takePicture(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct)
{
  return cameraFrameBuffCtrl(UARTx, DataStruct, VC0706_STOPCURRENTFRAME);
}

Camera_Result cameraFrameBuffCtrl(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct, uint8_t command)
{
  uint8_t args[2];
	args[0] = 0x1;
	args[1] = command;
  return runCommand(UARTx, DataStruct, VC0706_FBUF_CTRL, args, sizeof(args), 5,true);

}

uint32_t frameLength(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct)
{
	uint8_t args[2];
	args[0] = 0x01;
	args[1] = 0x00;

  if (!runCommand(UARTx, DataStruct, VC0706_GET_FBUF_LEN, args, sizeof(args), 9,true))
    return Camera_Result_Error;

	uint8_t *camerabuff = DataStruct->camerabuff;

  uint32_t len;
  len = camerabuff[5];
  len <<= 8;
  len |= camerabuff[6];
  len <<= 8;
  len |= camerabuff[7];
  len <<= 8;
  len |= camerabuff[8];

  return len; //len is the last 2 bytes of ACK (XX YY) which is the image length in hexa form
}

uint8_t *readPicture(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t n)
{
	uint16_t frameptr = DataStruct->frameptr;
	uint8_t args[13];
	args[0] = 0x0C;
	args[1] = 0x0;
	args[2] = 0x0A;
	args[3] = 0;
	args[4] = 0;
	args[5] = frameptr >> 8;
	args[6] = frameptr & 0xFF;
	args[7] = 0;
	args[8] = 0;
	args[9] = 0;
	args[10] = n;
	args[11] = CAMERADELAY >> 8;
	args[12] = CAMERADELAY & 0xFF;


  if (! runCommand(UARTx, DataStruct, VC0706_READ_FBUF, args, sizeof(args), 5, false))
    return 0;


  // read into the buffer PACKETLEN!
  readResponse(UARTx, DataStruct,n+5, CAMERADELAY);


  DataStruct->frameptr += n;
	uint8_t *camerabuff = DataStruct->camerabuff;
  return camerabuff;
}


uint8_t min(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	else
	{
		return a;
	}

}
