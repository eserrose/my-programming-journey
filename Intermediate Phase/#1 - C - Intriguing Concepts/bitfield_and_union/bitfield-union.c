#include "stdio.h"
#include "inttypes.h"

struct ex{
    uint8_t w:1;
    uint8_t x:3;
    uint8_t y:2;
    uint8_t z:1; //Bit num
    uint32_t a;
    uint16_t :0; //For alignment
}__attribute__((packed)); //If packed, uses 5 bytes. If aligned, uses 10 bytes

typedef union {
    struct 
    {
        uint32_t _reserved0:16;
        uint32_t GE:4;
        uint32_t _reserved1:7;
        uint32_t Q:1;
        uint32_t V:1;
        uint32_t C:1;
        uint32_t Z:1;
        uint32_t N:1;
    }bitfield;
    uint32_t w;
}APSR_t;

int main(){

    struct ex e;
    e.x = 4;
    printf("%x\n",e.x);
    
    printf("size: %d\n",sizeof(e));

    //Write to whole register
    APSR_t apsr;
    apsr.w = 0xF0000000; //set the first 4 bits to 1
    if(apsr.bitfield.N){
        /*Negative flag is set*/
        printf("N Z C V: %x%x%x%x\n",apsr.bitfield.N,apsr.bitfield.Z,apsr.bitfield.C,apsr.bitfield.V);
        printf("Q: %x\n",apsr.bitfield.Q);
        //They are all set because it starts from the LSB and goes to MSB as it goes down on struct
    }


    e.w = 4; //This will produce a warning
    printf("%x\n",e.w);

}