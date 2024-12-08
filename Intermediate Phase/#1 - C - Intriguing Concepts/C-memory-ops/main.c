/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file main.c
 * @brief Main entry point to the Fİnal Assessment
 *
 * This file contains the main code for the final assesment
 *
 * @author E.Eser Gul
 * @date Oct 31 2020
 *
 */
#include <stdio.h>
#include "memory.h"
#include "data.h"

#define DATA_SET_SIZE_W 100

/* An incredibly boring main file */
int main(void) {
    
    char src[10] = {'x','y',50,0x1F,'c','a','y','z',34,'v'};
    char dest[10];

    my_memmove(src, dest, 10);

    for(int i = 0; i < 10; i++){
        printf("Src %d: %c\n",i,src[i]);
        printf("Dest %d: %c\n",i,dest[i]);
    }

    char src2[5] = {'w','y','r','t','e'};
    char *dest2 = src2 - 3; //Data corruption occurs
    //dest2 = (char*)malloc(5 * sizeof(char));	

    printf("Address of src2: %p\n", src2);
    printf("Address of dest2: %p\n", dest2);

    my_memcopy(src2, dest2, 5);

    for(int i = 0; i < 5; i++){
        printf("Src2 %d: %c\n",i,src2[i]);
        printf("Dest2 %d: %c\n",i,dest2[i]);
    }

    char src3[4];
    my_memset(src3,4,0x3A);

    for(int i = 0; i < 4; i++){
        printf("src3 %d: %x\n",i,src3[i]);
    }

    char src4[4];
    my_memzero(src3,4);

    for(int i = 0; i < 4; i++){
        printf("src4 %d: %x\n",i,src4[i]);
    }

    char src5[4] = {'1','2','3','4'};
    my_reverse(src5,4);

    for(int i = 0; i < 4; i++){
        printf("src5 %d: %c\n",i,src5[i]);
    }

    uint8_t* ptr;
    ptr = (uint8_t*) reserve_words( 10 );
    int size = my_itoa(-123456,ptr,10); 
    printf("return length = %d\n",size);
    printf("Ptr: %s\n",ptr);  
    //free_words( (uint32_t*)ptr ); 

    int num = my_atoi(ptr, size, 10);
    printf("returned num: %d\n",num);
/*
    char aWord[7] = "AABBCC\0"; 
    int num = my_atoi(aWord, 6,16);
    printf("returned num: %x\n",num);*/

    return 0;
}
