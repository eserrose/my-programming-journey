#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include "stdlib.h"
#define HEAD "ACQ"
#define IDLE 0x02
static void deneme(uint8_t *tx_data, uint16_t len)
{
    uint32_t size = 3 + 7 + len;
    uint8_t buf[size];
    uint8_t data_len[2] = {len+7,(len+7) >> 8};

    memcpy(buf,HEAD,3);
    memcpy(buf + 3, data_len,2);
    memcpy(buf + 5, "OK", 2);
    memcpy(buf + 7, tx_data, len);
    memcpy(buf + 7 + len, "END", 3);


    //fwrite(buf, 1, size, stdout);
}

void getversion(uint8_t *buf){
    uint8_t string[3] = {'e','e','g'};
    uint8_t *version;
    version = malloc(3*sizeof(uint8_t));
    version[0] = 'm';
    version[1] = 'm';
    version[2] = 'a';
    printf("\nVersion: %s",version);
    *buf = version[2];
}

void changemode(uint8_t mode){
    uint8_t buf[11];
    memcpy(buf,"ChangeMode",11-1);
    buf[11-1] = mode;
    printf("buf is %s", buf);
}

int main(){

    char *text = "eser";
    uint16_t len = 4;
    deneme(text,len);

    uint8_t buf[1];
    getversion(buf);

    printf("\nReturned: %c",*buf);

    changemode((uint8_t)IDLE);
}