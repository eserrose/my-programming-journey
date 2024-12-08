#include "stdio.h"
#include "inttypes.h"

int main(){

    uint16_t foo = 0xAA55;
    uint16_t *ptr1 = &foo;
    uint8_t *ptr2 = (uint8_t*)ptr1;

    printf("*ptr2 = %x\n", *ptr2);
    printf("In BIG ENDIAN, data is stored from big to small\n");
    printf("In LITTLE ENDIAN, data is stored from small to big\n");
    printf("Thus, if you read 0x55, then it is little-endian, and if you read 0xAA then big-endian\n");
}