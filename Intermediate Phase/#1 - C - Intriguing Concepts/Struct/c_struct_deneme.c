#include <stdio.h>
#include <stdint.h>

typedef struct Arducam_Handle_Struct {
    void   *i2c_handle;
    uint8_t i2c_address;
} Arducam_Handle;

typedef struct{		
	Arducam_Handle handle;
}Arducam_T;

Arducam_T Cam2MP;
Arducam_T Cam5MP;

Arducam_Handle Arducam_Construct(void *i2c_handle, uint8_t address){

    Arducam_Handle handle;

    handle.i2c_handle = i2c_handle;
    handle.i2c_address = address;

	Cam2MP.handle = handle;
	Cam5MP.handle = handle;
    return handle;
}


int main(void) {
    void *placeholder;
    uint8_t address = 0x04;
    Arducam_Handle han = Arducam_Construct(placeholder, address);
    printf("%d\n",han.i2c_address);
    printf("%d\n",Cam2MP.handle.i2c_address);
}