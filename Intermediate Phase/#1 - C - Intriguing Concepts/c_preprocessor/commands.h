#pragma once //ifndef alternative. not supported by all compilers tho

#include <stdint.h>

#pragma pack(push, 1) // disable padding
typedef struct command_struct // 264 bytes total (66 32-bit words)
{
	uint8_t source; 		// 1 byte
	uint8_t data_len;		// 1 byte
	uint32_t magic_word;	// 4 bytes									|
	uint16_t id;			// 2 bytes									|direct copy
	uint8_t priority;		// 1 byte									|payload
	uint8_t data[249];		// 249 bytes max							|256 byte
	uint8_t _PADDING[2];	// 2 bytes (to make struct 32-bit aligned)
} command_t;
#pragma pack(pop) // reenable padding

typedef struct command_struct_no_pack // 264 bytes total (66 32-bit words)
{
	uint8_t source; 		// 1 byte
	uint8_t data_len;		// 1 byte
	uint32_t magic_word;	// 4 bytes									|
	uint16_t id;			// 2 bytes									|direct copy
	uint8_t priority;		// 1 byte									|payload
	uint8_t data[249];		// 249 bytes max							|256 byte
	uint8_t _PADDING[2];	// 2 bytes (to make struct 32-bit aligned)
} command_t_no_pack;

struct command_struct_pack_2 // 264 bytes total (66 32-bit words)
{
	uint8_t source; 		// 1 byte
	uint8_t data_len;		// 1 byte
	uint32_t magic_word;	// 4 bytes									|
	uint16_t id;			// 2 bytes									|direct copy
	uint8_t priority;		// 1 byte									|payload
	uint8_t data[249];		// 249 bytes max							|256 byte
	uint8_t _PADDING[2];	// 2 bytes (to make struct 32-bit aligned)
} __attribute__((packed));

inline int32_t add(int32_t x, int32_t y) { return (x+y);}									//Compiler may ignore this
__attribute__((always_inline)) inline int32_t sub(int32_t x, int32_t y) { return (x-y);}	//Compiler will NOT ignore this

//Below tells the compiler to use optimization level 0
#pragma GCC push
#pragma GCC optimize ("O0")
int32_t mult(int32_t x, int32_t y){
	return x*y;
}
#pragma GCC pop