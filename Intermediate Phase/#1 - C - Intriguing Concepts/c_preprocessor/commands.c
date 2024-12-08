#include "stdio.h"
#include <string.h>

#include "commands.h"

#define STRN "changed"
#define SIZE 7

#define A

#pragma GCC poison sprintf

//Add the flag -DB to the console to see the result.
//-D = define
// $ gcc -DB commands.c -o commands

int main(){

    command_t comm = {
        0x01,   0x02,   0xAABBCCDD, 0xFF11, 0x01,   "Deneme",   {0x00, 0x00}
    };

    command_t_no_pack comm2 = {
        0x01,   0x02,   0xAABBCCDD, 0xFF11, 0x01,   "Deneme",   {0x00, 0x00}
    };

    int i = 0;
    uint16_t x __attribute__((aligned(4)));

    printf("Source %d\n", comm.source);
    printf("Len %d\n", comm.data_len);
    printf("MW %x\n", comm.magic_word);
    printf("ID %x\n", comm.id);
    printf("Data1 %c\n", *comm.data);
    printf("Data2 %c\n", comm.data[++i]);
    printf("Data3 %c\n", comm.data[++i]);
    printf("Padding %x\n", comm._PADDING[0]);

    memcpy(comm.data,STRN,SIZE+1);

    printf("DataNew %c\n", *comm.data);
    printf("DataNew %c\n", comm.data[1]);

    printf("Size: %d\n", sizeof(comm));
    printf("Size: %d\n", sizeof(comm2));

    struct command_struct_pack_2 comm3;
    printf("Size: %d\n", sizeof(comm3));

    #if defined A && !defined B
        printf("nice\n");
    #else
        printf("boo\n");
    #endif

    //Uncommenting below yields error
    //sprintf(comm.data, comm2.data);

    return 1;
}
