#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint8_t seconds; /**< Seconds */
    uint8_t minutes; /**< Minutes */
    uint8_t hours;   /**< Hours */
    uint8_t date;    /**< date of the month */
    uint8_t month;   /**< Month */
    uint8_t year;    /**< Year */
    uint8_t dow;     /**< Day of the week. CS default is 1=Sunday, 2=Monday, etc. Increments at midnight ( 1 – 7 )*/
} cs_time;

#define ISLEAP(y) ((((y) % 4) == 0 && ((y) % 100) != 0) || ((y) % 400) == 0)
/* Seconds since Unix epoch to 2000/01/01 00:00:00 */
#define EPOCH_2000 946684800

static int	mon_lengths[2][12] = {
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

uint32_t convert_cs_time_to_epoch(cs_time *time)
{
	uint32_t pdays = 0;
	uint32_t ydays = 0;
	uint32_t epoch = 0;

	for(uint8_t i = 0; i < time->year; i++) {
		if( ISLEAP(2000 + i) )
			pdays += 366;
		else
			pdays += 365;
	}

	for(uint8_t i = 1; i < time->month; i++) {
		ydays += mon_lengths[ISLEAP(2000 + time->year)][i];
	}

	epoch = time->seconds + time->minutes*60 + time->hours*3600 +
			(time->date + pdays + ydays)*86400 + EPOCH_2000;

	return epoch;
}

cs_time convert_epoch_to_cs_time(uint32_t epoch){
	cs_time time;
    uint32_t pdays = 0;
	uint32_t ydays = 0;
	uint32_t edays;

	epoch -= EPOCH_2000;
	
	time.seconds = epoch % 60;
	time.minutes = (epoch/60) % 60;
	time.hours   = (epoch/60/60) % 24;
    
    edays = (epoch/60/60/24);
    time.year = (uint8_t) ((float)(edays+0.5)/365.24);
    time.month = (epoch/2629743) % 12 + 1;

    for(uint8_t i = 0; i < time.year; i++) {
        if( ISLEAP(2000 + i) )
            pdays += 366;
        else
            pdays += 365;
	}

	for(uint8_t i = 1; i < time.month; i++) {
		ydays += mon_lengths[ISLEAP(2000 + time.year)][i];
	}

    time.date = epoch/86400 - pdays - ydays;

	return time;
}

int main(){
    cs_time today = {.seconds = 31, .minutes = 27, .hours = 22, .month = 6, .date = 22, .year = 20};
    uint32_t epoch = convert_cs_time_to_epoch(&today);
    printf("Time: %.2d:%.2d:%.2d %.2d/%.2d/20%.2d\n", today.hours, today.minutes, today.seconds, today.date, today.month, today.year);
    printf("Epoch: %d\n", epoch);
    cs_time back = convert_epoch_to_cs_time(epoch);
    printf("Back converted: %.2d:%.2d:%.2d %.2d/%.2d/20%.2d\n", back.hours, back.minutes, back.seconds,
                                                                back.date, back.month, back.year);
}