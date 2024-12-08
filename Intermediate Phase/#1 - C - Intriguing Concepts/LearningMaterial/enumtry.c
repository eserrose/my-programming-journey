#include <stdio.h>
#include <stdint.h>

typedef enum  {
	Camera_Result_Error,          /*!< Everything OK */
	Camera_Result_Ok             /*!< Unknown error */
} Camera_Result;

Camera_Result reset(int,uint8_t);
Camera_Result run(uint8_t args[], uint8_t argn);

int main(){

printf("Result: %d\n",reset(4,0x0A));
printf("Result: %d\n",reset(3,0X0B));

uint8_t args[6];
args[0] = 0x5;
args[1] = 0x4;
args[2] = 0x1;
args[3] = 0x00;
args[4] = 0x19;
args[5] = 0x22;
printf("Size in main: %d\n",sizeof(args));
run(args,6);
}

Camera_Result reset(int a,uint8_t cmd){

printf("a: %d\n",a);
printf("cmd: %d\n",*(&cmd));

if(a==3)
    return Camera_Result_Ok;
else
    return Camera_Result_Error;
}

Camera_Result run(uint8_t args[], uint8_t argn){
int i = 0;
printf("Size in run: %d\n",sizeof(args)); //as you see, different size. Thus there is an argument called argn
for(i=0;i<argn;i++)
{
    printf("Args %d: %p\n",i,args[i]);
}
return Camera_Result_Ok;
}
