#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct sensor_data_struct {
	uint16_t BMP;		//Barometric pressure
	uint16_t MPU[3];	//Gyroscope angles in 3-axes
	uint16_t DIST;		//Distance from the ground
}sensor_data_t;

void store_data(sensor_data_t* org_data, int16_t* filter_data)
{
	uint8_t data[20] = {0};
	memcpy(data,(uint8_t*) org_data, sizeof(sensor_data_t));
	memcpy(data+sizeof(sensor_data_t),(uint8_t*) filter_data, 3*2);

    printf("Data ready %d\n",sizeof(sensor_data_t));
    for(int i = 0 ; i < 20; i++)
        printf("Data %d: %d\n",i,data[i]);
}

int main(){
    double x = 45.2, y = 22, z= -22.3;
    int16_t arr[3] = {(int16_t) x, (int16_t) y, (int16_t) z};
    sensor_data_t sd = {.BMP = 0x1112, .MPU[0] = 0x3332, .MPU[1] = 0x6565, .MPU[2] = 0x6060, .DIST=0x0112};
    store_data(&sd, arr);

    double baro_alt = 44330*(1 - pow(sd.BMP/902, 1/5.255));
	double gnd_angle = sqrt(pow(sd.MPU[0],2) + pow(sd.MPU[1],2) + pow(sd.MPU[2],2) );
	double z1[3] = {gnd_angle, baro_alt, (double) sd.DIST};
    
    printf("%lf,%lf,%lf",z1[0],z1[1],z1[2]);
}