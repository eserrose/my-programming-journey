#include "stdio.h"
#include "inttypes.h"

typedef void(*fptr_TYPE)(int c);
typedef void(* FuncPtr_t[2])(); //Array of fxn pointers

void fxn(int a) 
{ 
    printf("Value of a is %d\n", a); 
} 

void b_fxn(int b) 
{ 
    printf("Value of b is %d\n", b); 
} 

FuncPtr_t example = {
    fxn,
    b_fxn
};

int main(){

    void (*fxn_ptr)(int) = &fxn; 
    printf("Fxn (%p) is a function pointer\n", fxn_ptr);
    (*fxn_ptr)(10);

    fptr_TYPE fptr1 = &fxn; 
    fptr_TYPE fptr2 = &b_fxn;
    (*fptr1)(20);
    (*fptr2)(30);
    example[1](12);
}