#ifndef __ADAFRUIT_VC0706_H
#define __ADAFRUIT_VC0706_H
#endif
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#define VC0706_RESET  0x26
#define VC0706_GEN_VERSION 0x11
#define VC0706_SET_PORT 0x24
#define VC0706_READ_FBUF 0x32
#define VC0706_GET_FBUF_LEN 0x34
#define VC0706_FBUF_CTRL 0x36
#define VC0706_DOWNSIZE_CTRL 0x54
#define VC0706_DOWNSIZE_STATUS 0x55
#define VC0706_READ_DATA 0x30
#define VC0706_WRITE_DATA 0x31
#define VC0706_COMM_MOTION_CTRL 0x37
#define VC0706_COMM_MOTION_STATUS 0x38
#define VC0706_COMM_MOTION_DETECTED 0x39
#define VC0706_MOTION_CTRL 0x42
#define VC0706_MOTION_STATUS 0x43
#define VC0706_TVOUT_CTRL 0x44
#define VC0706_OSD_ADD_CHAR 0x45

#define VC0706_STOPCURRENTFRAME 0x0
#define VC0706_STOPNEXTFRAME 0x1
#define VC0706_RESUMEFRAME 0x3
#define VC0706_STEPFRAME 0x2

#define VC0706_640x480 0x00
#define VC0706_320x240 0x11
#define VC0706_160x120 0x22

#define VC0706_MOTIONCONTROL 0x0
#define VC0706_UARTMOTION 0x01
#define VC0706_ACTIVATEMOTION 0x01

#define VC0706_SET_ZOOM 0x52
#define VC0706_GET_ZOOM 0x53

#define CAMERABUFFSIZ 100
#define CAMERADELAY 10

typedef struct  {
/*Public*/
uint8_t  serialNum;
uint8_t  bufferLen;
uint16_t frameptr;
/*Private*/
uint8_t  camerabuff[CAMERABUFFSIZ+1];
} Adafruit_VC0706;

typedef enum  {
	Camera_Result_Error,          /*!< Everything OK */
	Camera_Result_Ok             /*!< Unknown error */ //sayilari cogaltilabilir
} Camera_Result;

typedef unsigned char UART_HandleTypeDef;


Camera_Result reset(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct);
Camera_Result takePicture(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct);
Camera_Result resumeVideo(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct);
Camera_Result setImageSize(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t size);
Camera_Result cameraFrameBuffCtrl(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t command);
Camera_Result runCommand(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t cmd, uint8_t args[], uint8_t argn, uint8_t resplen, bool flushflag); //flag = true
Camera_Result sendCommand(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t cmd, uint8_t args[], uint8_t argn);
void readResponse(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t numbytes, uint8_t timeout);
Camera_Result verifyResponse(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t command);
uint32_t frameLength(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct);

uint8_t *readPicture(UART_HandleTypeDef* UARTx,Adafruit_VC0706* DataStruct,uint8_t n);
uint8_t min(int,int);
void HAL_UART_Receive(UART_HandleTypeDef*,uint8_t *,uint8_t,uint8_t);
void HAL_UART_Transmit(UART_HandleTypeDef*,uint8_t *,uint8_t,uint8_t);

//bool begin(uint16_t baud); //38400
//uint8_t available();
//bool getMotionDetect();
//uint8_t getMotionStatus(uint8_t);
//bool motionDetected();
//bool setMotionDetect(bool f);
//bool setMotionStatus(uint8_t x, uint8_t d1, uint8_t d2);
//bool cameraFrameBuffCtrl(uint8_t command);
//bool getPTZ(uint16_t &w, uint16_t &h, uint16_t &wz, uint16_t &hz, uint16_t &pan, uint16_t &tilt);
//bool setPTZ(uint16_t wz, uint16_t hz, uint16_t pan, uint16_t tilt);
//char* setBaud(uint16_t baud);
