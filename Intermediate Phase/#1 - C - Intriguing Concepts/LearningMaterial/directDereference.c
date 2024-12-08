#include "stdio.h"
#include "inttypes.h"

#define HWREG8(X)        (*((volatile uint8_t*) (x)))
#define HWREG16(X)       (*((volatile uint16_t*)(x)))
#define HWREG32(X)       (*((volatile uint32_t*)(x)))

#define TA0CTL           (HWREG16(0x0061FE1E))

//Defining type specifiers
#define __IO    volatile
#define __I     volatile const

//Struct of registers
typedef struct{
    __IO uint16_t CTL;
    __IO uint16_t CCTL[7];
    __I uint16_t IV;
} Timer_A_Type;

#define PERIPH_BASE     ((uint32_t)    0x0033ff12)  //base address
#define TIMER_A0_BASE   (PERIPH_BASE + 0x00000000)  //base + offset
#define TIMER_A0        ((Timer_A_Type*) TIMER_A0_BASE) //Timer A0 struct without allocating data memory

int main(){


    (*((volatile uint16_t*) 0x61FE1E)) = 0x0202; //Set the data inside memory address 0x61FE1E to 0x0202. Saves up space from creating a variable
    //Equivalent to
    volatile uint16_t* ta0_ctrl = (uint16_t*) 0x61FE1E;
    *ta0_ctrl = 0x0202;
    //Since this is too hard to read, use the define statements above

   printf("Address of Timer A0: %p\n",TIMER_A0);
   TIMER_A0->CTL = 0x0202;
   printf("CTL register address of Timer A0: %x",TIMER_A0->CTL);



}