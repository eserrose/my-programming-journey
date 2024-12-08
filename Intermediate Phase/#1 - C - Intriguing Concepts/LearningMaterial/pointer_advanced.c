#include "stdio.h"
#include "inttypes.h"


//Restrict
//It tells the compiler, that ptr is only way to access the object pointed by this.
//If this condition is violated, an un-defined behavior will occur
//This enables better optimization by eliminating "pointer aliasing" 
void a_fxn(int* x, int* y, int* restrict z){
    *x += *z;
    *y += *z;

    printf("Restricted address: %p\n",z);
}

int main(){
    int x = 10, y = 20, z = 30;
    a_fxn(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);

    //Double pointer 
    (*((volatile int*) (0x000000000061FE0C))) = 0x61FE2C; //Write this to memory address 0x61FE0C
    (*((volatile int*) (0x000000000061FE0F))) = 0xff; 
    (*((volatile int*) (0x000000000061FE1C))) = 0x03; 
    (*((volatile int*) (0x000000000061FE2C))) = 0x77; 

    uint32_t *ptr1 = (uint32_t*)0x61FE0C; //the address 61fe0c, it holds 61fe2c
    printf("PTR1: %p\n",ptr1);
    uint32_t **dptr = &ptr1;
    printf("DOUBLE PTR: %p\n",dptr);
    printf("INSIDE OF DOUBLE PTR (ptr1): %p\n",*dptr);
    printf("INSIDE OF INSIDE OF DOUBLE PTR (inside of ptr1): %x\n",**dptr);
    uint32_t *ptr2 = (uint32_t*) **dptr;
    printf("PTR2: %p\n",ptr2);
    uint32_t foo = *ptr2;
    printf("foo (inside of ptr2): %x\n",foo);
}