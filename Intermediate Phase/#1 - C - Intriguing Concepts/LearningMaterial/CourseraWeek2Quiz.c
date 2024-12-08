#include "stdio.h"
#include "inttypes.h"

void fxn(int a) 
{ 
    printf("Value of a is %d\n", a); 
} 

int main(){

    // 1
    uint32_t foo = 0x01234567;
    foo ^= ~(0x00FFFF00);
    foo = (foo & 2047) | (0x176 << 20);
    printf("foo: %x\n",foo);

    //2
    //GPIO Port 2 is set by register P2SELx

    //3
    //CMSIS Library is an HAL and ARM Core Architecture Library

    //4
    //A void pointer in a 32-bit arch cannot be deferenced (or in any arch)

    //5
    //A double pointer points to a pointer of the same type

    //6-7
    void (*fxn_ptr)(int) = &fxn; 
    printf("Fxn (%p) is a function pointer\n", fxn_ptr);
    (*fxn_ptr)(10); 

    //8
    //Interrupt vector table is an array of function pointers

    //9
    //CSS Debugger allows you to
    //*Investigate and change the values of local variables
    //*Can help step through code
    //*Set breakpoints and watch
    //*Manipulate peripheral register values

    //10
    //Memory browser allows you to
    //*Look at the data stored in peripheral registers
    //*Look at data in SRAM
    //*Look at data in BSS and DATA memory segments
    //*NOT Data stored in Core CPU registers because they are not part of memory map

}