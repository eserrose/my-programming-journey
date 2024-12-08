#include <stdio.h>

#define METHOD "ABS"
#define ABS(val) ((val) < 0 ? -(val) : (val))
#define MAX_LEN 8

int main(int argc, char *argv[]){

    printf("Value of argc: %d \n", argc);
    if(argc){
        printf("First argument is: %s\n", argv[0]);
        printf("Rest are:\n");
        for(int i = 1; i<argc; i++)
            printf("%s\n", argv[i]);
    }


        char *str = METHOD;
        int array[MAX_LEN];
        printf("\nApplying the %s macro:\n", str);
        for (int i=0; i<MAX_LEN; i++){
            array[i] = (i + 1) * -5;
            printf("ABS(%d): %3d\n", array[i], ABS(array[i]));
        }

    return 0;
}

//Call with gcc main_arguments.c -o main_args
//main_args hello world