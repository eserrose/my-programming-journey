/**
 * @file data.h
 * @brief Simple data manipulation function declerations
 * 
 * @author E.Eser GUl
 * @date Oct 31, 2020
 */    

#ifndef __DATA_H__
#define __DATA_H__

#define MAX_STR_SIZE 2147483647 // 2^31

/**
 * @brief Performs Integer-to-ASCII conversion.
 *
 * Resulting string is NULL terminated.
 *
 * @param data Data to be converted
 * @param ptr Pointer to converted string
 * @param base Base (2-16)
 *
 * @return Length of converted data including NULL terminator
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief Performs ASCII-to-Integer conversion.
 *
 * @param data String to be converted
 * @param digits Number of digits in the character set
 * @param base Base (2-16)
 *
 * @return Converted 32-bit signed integer
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);


#endif