#include <stdio.h>
#include <inttypes.h>
#define TELEMETRY_ALIGN_BITS(X)		(X << 8 | X >> 8)

void get_buffer_count(uint8_t* add){
    add[0] = 0x2A;
    add[1] = 0x4C;
}

int main() {
    printf("Hello, World!\n");

    uint16_t buffer_count;
    get_buffer_count((uint8_t*)(&buffer_count));

    printf("Buffer count before: %X\n", buffer_count);

    buffer_count = TELEMETRY_ALIGN_BITS(buffer_count);

    printf("Buffer count after: %X", buffer_count);
    return 0;
}