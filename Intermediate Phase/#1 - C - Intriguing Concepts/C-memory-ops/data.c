/**
 * @file data.c
 * @brief Contains function implementations
 *
 * Using the functions defined here, one can achieve very basic data manipulation
 * 
 * @author Emirhan Eser Gul
 * @date 10/31/2020
 *
 */
#include <stdio.h>
#include <math.h>
#include "memory.h"
#include "data.h"


uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
	int length = 0, digit, is_neg = 0;

	if(data == 0){
		*ptr = 48; printf("Ptr: %c\n",*ptr);
        length++;
	}
	else if(data < 0){
		is_neg = 1;
		data *= -1;
	}

	while(data != 0){   
		digit = data % base;
		data /= base;

		if(digit > 9){
			*(ptr + length++) = 55 + digit;
		}
		else{ 
			*(ptr + length++) = 48 + digit;

		}
	}

    my_reverse(ptr,length);
	/* Add Null terminator */
	*(ptr + length) = '\0';


	if(is_neg){  printf("is neg\n");
		my_memmove(ptr, ptr + 1, length);
		*ptr = 45;
		length;
	}


	return length;
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){

    char ch;
    int num = 0, is_neg = 1;

    if(*ptr == '-'){
        is_neg = -1;
        my_memmove(ptr+1, ptr, digits);
    }

    for(int i = 0; i < digits; i++){
        ch = *(ptr + i);
        if(ch < 58){ //between 1-9
            num += ((int)(ch - 48))*pow(base,digits-i-1);
        } else {
             num += ((int)(ch - 55))*pow(base,digits-i-1);
        }
    }

    return num*is_neg;
}
