#include <stdio.h>
#include <inttypes.h>

#define TELEMETRY_ALIGN_BITS(X)		(X << 8 | X >> 8)

typedef struct cput_telemetry_package_t_struct
{
	int16_t rssi;
	int16_t SMPStemp;
	int8_t PAtemp;
	int16_t i3v3;
}cput_telemetry_package_t;

int8_t cput_get_telemetry_package(cput_telemetry_package_t* tm);
void CPUT_Modem_Get_RSSI_Raw(uint8_t* tel_buf);
void CPUT_Modem_Get_SMPS_Temperature_Raw(uint8_t* tel_buf);
void CPUT_Modem_Get_PA_Temperature_Raw(uint8_t* tel_buf);

int main(){
    cput_telemetry_package_t tm;
    cput_get_telemetry_package(&tm);
    printf("RSSI: %x, SMPS: %x, PA: %x", tm.rssi, tm.SMPStemp, tm.PAtemp);
    printf("\nsuccess");

    uint8_t unum = 0xE7;
    int8_t num = 0xE7;
    printf("\nUnsigned E7 :%d vs signed E7: %d",unum,num);
}

int8_t cput_get_telemetry_package(cput_telemetry_package_t* tm)
{
	int8_t status = 0;
	int32_t tel_buf = 0;

	CPUT_Modem_Get_RSSI_Raw((uint8_t*)&tel_buf);
    printf("Tel buf1: %x\n",tel_buf);
	tm->rssi = TELEMETRY_ALIGN_BITS(tel_buf);

	CPUT_Modem_Get_SMPS_Temperature_Raw((uint8_t*)&tel_buf);
    printf("Tel buf2: %x\n",tel_buf);
	tm->SMPStemp = TELEMETRY_ALIGN_BITS(tel_buf);

    CPUT_Modem_Get_PA_Temperature_Raw((uint8_t*)&tel_buf);
    printf("Tel buf3: %x\n",tel_buf);
	tm->PAtemp = (uint8_t) tel_buf;

	return status;
}

void CPUT_Modem_Get_RSSI_Raw(uint8_t* tel_buf){

    tel_buf[0] = 0xAB;
    tel_buf[1] = 0xCD;
}

void CPUT_Modem_Get_SMPS_Temperature_Raw(uint8_t* tel_buf){
    tel_buf[0] = 0xEF;
    tel_buf[1] = 0x32;
}

void CPUT_Modem_Get_PA_Temperature_Raw(uint8_t* tel_buf){
    *tel_buf = 0xCC;
}