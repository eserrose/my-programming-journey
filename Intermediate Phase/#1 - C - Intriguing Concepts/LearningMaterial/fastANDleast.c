#include "stdio.h"
#include "inttypes.h"

int main(){

    uint_fast8_t fast8;
    uint_fast16_t fast16;
    uint_fast32_t fast32;
    uint_fast64_t fast64;
    printf("FAST creates an int with a size of at least N bits, however it might increase it if it will benefit the CPU (To Word size)\n");
    printf("Size of fast8 %d\n",sizeof(fast8));
    printf("Size of fast16 %d\n",sizeof(fast16));
    printf("Size of fast32 %d\n",sizeof(fast32));
    printf("Size of fast64 %d\n",sizeof(fast64));

    uint_least8_t least8;
    uint_least16_t least16;
    uint_least32_t least32;
    uint_least64_t least64;
    printf("LEAST creates an int with a size of at least N bits\n");
    printf("Size of least8 %d\n",sizeof(least8));
    printf("Size of least16 %d\n",sizeof(least16));
    printf("Size of least32 %d\n",sizeof(least32));
    printf("Size of least64 %d\n",sizeof(least64));
}