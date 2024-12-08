
#include "Adafruit_VC0706.h"

UART_HandleTypeDef huart5;
Adafruit_VC0706 cam = {0,0,0};
int main(){
uint8_t i;
uint8_t* buffer;
for(i=10;i>0;i--)
    {
        buffer = readPicture(&huart5,&cam,i);
    }
for(i=0;i<100;i++)
    printf("\nbuffer: %d",buffer[i]);

}
