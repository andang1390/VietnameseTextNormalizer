/* ----------------------------------------------------------------- */
/*              The Vietnamese Speech Synthesis Engine               */
/*      Developed by Bui Tan Quang - langmaninternet@gmail.com       */
/* ----------------------------------------------------------------- */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* ----------------------------------------------------------------- */
#include "PhonemeSystem.h"
#include <stdlib.h>
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) 
#pragma managed(push, off)
#pragma optimize("", off)
#else
#pragma GCC push_options
#pragma GCC optimize ("O0")
#endif
/************************************************************************/
/* The system of phonemes                                               */
/************************************************************************/
const struct PHONEME phonemes[] =
{
	{{'x','x',0,0x18,0x1D,0x25},{'e','b',0,0x45,0x56,0x12}},
	{{'p','a','u',0,0x34,0x4E},{'c','z',0,0x2E,0x47,0x4C}},
	{{'a',0,0x40,0x38,0x13,0x37},{'a','a',0,0x3E,0x22,0x4E}},
	{{'a','a',0,0x4F,0x3A,0x12},{'a','b',0,0x24,0x51,0x5E}},
	{{'a','l',0,0x2C,0x38,0x21},{'a','c',0,0x5C,0x25,0x2A}},
	{{'a','w',0,0x5E,0x28,0x18},{'a','d',0,0x1C,0x57,0x35}},
	{{'b',0,0x39,0x41,0x5E,0x1D},{'a','e',0,0x29,0x36,0x2C}},
	{{'b','l',0,0x56,0x1A,0x46},{'a','f',0,0x15,0x21,0x34}},
	{{'b','r',0,0x39,0x5E,0x34},{'a','g',0,0x37,0x1D,0x4C}},
	{{'c','h',0,0x5A,0x31,0x48},{'a','h',0,0x1E,0x29,0x22}},
	{{'c','l',0,0x4C,0x1E,0x15},{'a','i',0,0x3E,0x1C,0x34}},
	{{'c','r',0,0x33,0x12,0x3E},{'a','j',0,0x4C,0x50,0x4B}},
	{{'d',0,0x12,0x39,0x13,0x24},{'a','k',0,0x52,0x29,0x31}},
	{{'d','d',0,0x2F,0x49,0x2B},{'a','l',0,0x50,0x16,0x59}},
	{{'d','r',0,0x1F,0x3D,0x21},{'a','m',0,0x18,0x4D,0x52}},
	{{'e',0,0x4A,0x2B,0x28,0x52},{'a','n',0,0x30,0x16,0x14}},
	{{'e','a',0,0x17,0x59,0x42},{'a','o',0,0x26,0x1E,0x3C}},
	{{'e','e',0,0x30,0x4B,0x21},{'a','p',0,0x4E,0x3E,0x1C}},
	{{'e','n','a','a',0,0x56},{'a','q',0,0x4A,0x47,0x50}},
	{{'e','n','a','e',0,0x56},{'a','r',0,0x16,0x2F,0x22}},
	{{'e','n','a','h',0,0x20},{'a','s',0,0x54,0x10,0x55}},
	{{'e','n','a','o',0,0x1E},{'a','t',0,0x57,0x4E,0x55}},
	{{'e','n','a','w',0,0x19},{'a','u',0,0x17,0x42,0x20}},
	{{'e','n','a','y',0,0x29},{'a','v',0,0x26,0x25,0x34}},
	{{'e','n','b',0,0x5F,0x23},{'a','w',0,0x1B,0x2B,0x17}},
	{{'e','n','c','h',0,0x3F},{'a','x',0,0x22,0x45,0x48}},
	{{'e','n','d',0,0x5F,0x5B},{'a','y',0,0x34,0x4E,0x51}},
	{{'e','n','d','h',0,0x28},{'a','z',0,0x3E,0x19,0x32}},
	{{'e','n','e','h',0,0x57},{'b','a',0,0x1E,0x27,0x2F}},
	{{'e','n','e','r',0,0x2E},{'b','b',0,0x3C,0x10,0x5A}},
	{{'e','n','e','y',0,0x27},{'b','c',0,0x3E,0x41,0x40}},
	{{'e','n','f',0,0x1E,0x4F},{'b','d',0,0x5B,0x39,0x29}},
	{{'e','n','g',0,0x50,0x2C},{'b','e',0,0x50,0x27,0x2C}},
	{{'e','n','h','h',0,0x2F},{'b','f',0,0x24,0x5C,0x20}},
	{{'e','n','i','h',0,0x40},{'b','g',0,0x5D,0x2C,0x3A}},
	{{'e','n','j','h',0,0x12},{'b','h',0,0x53,0x55,0x21}},
	{{'e','n','k',0,0x24,0x3B},{'b','i',0,0x13,0x35,0x31}},
	{{'e','n','l',0,0x13,0x4E},{'b','j',0,0x59,0x37,0x51}},
	{{'e','n','m',0,0x36,0x1E},{'b','k',0,0x4B,0x16,0x22}},
	{{'e','n','n',0,0x12,0x3A},{'b','l',0,0x19,0x55,0x29}},
	{{'e','n','n','g',0,0x43},{'b','m',0,0x12,0x22,0x1A}},
	{{'e','n','o','w',0,0x24},{'b','n',0,0x23,0x42,0x2E}},
	{{'e','n','o','y',0,0x32},{'b','o',0,0x4E,0x34,0x14}},
	{{'e','n','p',0,0x2D,0x53},{'b','p',0,0x14,0x29,0x22}},
	{{'e','n','r',0,0x18,0x1E},{'b','q',0,0x46,0x23,0x2F}},
	{{'e','n','s',0,0x14,0x2A},{'b','r',0,0x55,0x42,0x5F}},
	{{'e','n','s','h',0,0x19},{'b','s',0,0x38,0x22,0x43}},
	{{'e','n','t',0,0x25,0x1C},{'b','t',0,0x50,0x56,0x2D}},
	{{'e','n','t','h',0,0x32},{'b','u',0,0x2B,0x13,0x23}},
	{{'e','n','u','h',0,0x21},{'b','v',0,0x3C,0x49,0x22}},
	{{'e','n','v',0,0x5A,0x5E},{'b','w',0,0x39,0x3F,0x2D}},
	{{'e','n','w',0,0x43,0x30},{'b','x',0,0x1F,0x3D,0x22}},
	{{'e','n','y',0,0x31,0x1A},{'b','y',0,0x22,0x45,0x38}},
	{{'f','l',0,0x4E,0x1E,0x12},{'b','z',0,0x5A,0x37,0x53}},
	{{'f','r',0,0x18,0x20,0x4E},{'c','a',0,0x42,0x3D,0x26}},
	{{'g',0,0x40,0x36,0x55,0x2F},{'c','b',0,0x40,0x13,0x46}},
	{{'g','l',0,0x2B,0x4F,0x29},{'c','c',0,0x5A,0x4C,0x2B}},
	{{'g','r',0,0x4E,0x34,0x25},{'c','d',0,0x26,0x4A,0x56}},
	{{'h',0,0x24,0x28,0x34,0x33},{'c','e',0,0x51,0x37,0x1E}},
	{{'i',0,0x50,0x47,0x27,0x5C},{'c','f',0,0x11,0x44,0x4D}},
	{{'i','e',0,0x3B,0x11,0x1C},{'c','g',0,0x18,0x10,0x31}},
	{{'i','z',0,0x42,0x42,0x4E},{'c','h',0,0x55,0x59,0x12}},
	{{'j',0,0x2C,0x2C,0x37,0x26},{'c','i',0,0x26,0x1F,0x5B}},
	{{'k',0,0x50,0x52,0x5B,0x51},{'c','j',0,0x4E,0x36,0x12}},
	{{'k','c',0,0x24,0x2F,0x59},{'c','k',0,0x4E,0x44,0x12}},
	{{'k','h',0,0x17,0x38,0x48},{'c','l',0,0x11,0x49,0x58}},
	{{'l',0,0x55,0x1E,0x34,0x1E},{'c','m',0,0x2F,0x2D,0x10}},
	{{'m',0,0x51,0x5F,0x33,0x5C},{'c','n',0,0x56,0x27,0x3D}},
	{{'m','z',0,0x41,0x13,0x42},{'c','o',0,0x13,0x34,0x44}},
	{{'n',0,0x3F,0x3E,0x4F,0x1D},{'c','p',0,0x3F,0x58,0x52}},
	{{'n','g',0,0x51,0x3C,0x13},{'c','q',0,0x56,0x43,0x4D}},
	{{'n','g','z',0,0x2E,0x43},{'c','r',0,0x4C,0x47,0x13}},
	{{'n','h',0,0x13,0x4C,0x27},{'c','s',0,0x44,0x36,0x54}},
	{{'n','z',0,0x2D,0x57,0x47},{'c','t',0,0x33,0x2B,0x3F}},
	{{'o',0,0x2E,0x5F,0x3F,0x2D},{'c','u',0,0x28,0x46,0x3C}},
	{{'o','a',0,0x26,0x54,0x56},{'c','v',0,0x50,0x37,0x3F}},
	{{'o','o',0,0x4A,0x11,0x17},{'c','w',0,0x53,0x56,0x49}},
	{{'o','w',0,0x4C,0x2B,0x35},{'c','x',0,0x24,0x51,0x2A}},
	{{'p',0,0x30,0x18,0x36,0x4D},{'c','y',0,0x42,0x45,0x48}},
	{{'p','c',0,0x2E,0x1A,0x3C},{'d','a',0,0x53,0x2A,0x31}},
	{{'p','h',0,0x14,0x35,0x55},{'d','b',0,0x5D,0x5B,0x14}},
	{{'p','l',0,0x2D,0x44,0x4A},{'d','c',0,0x13,0x2C,0x35}},
	{{'p','r',0,0x5C,0x11,0x22},{'d','d',0,0x34,0x41,0x43}},
	{{'r',0,0x42,0x44,0x5E,0x23},{'d','f',0,0x1B,0x1A,0x57}},
	{{'s',0,0x38,0x2B,0x4F,0x3F},{'d','g',0,0x48,0x2F,0x46}},
	{{'t',0,0x1F,0x1B,0x3E,0x1F},{'d','h',0,0x55,0x43,0x56}},
	{{'t','c',0,0x3B,0x2F,0x19},{'d','i',0,0x36,0x11,0x39}},
	{{'t','h',0,0x29,0x3F,0x10},{'d','j',0,0x24,0x20,0x25}},
	{{'t','r',0,0x36,0x47,0x15},{'d','k',0,0x1A,0x11,0x29}},
	{{'u',0,0x56,0x5C,0x14,0x30},{'d','l',0,0x25,0x5E,0x4C}},
	{{'u','o',0,0x14,0x53,0x35},{'d','m',0,0x23,0x28,0x4A}},
	{{'u','w',0,0x24,0x25,0x1A},{'d','n',0,0x31,0x4A,0x31}},
	{{'u','z',0,0x18,0x4C,0x49},{'d','o',0,0x33,0x15,0x53}},
	{{'v',0,0x3B,0x1F,0x2C,0x14},{'d','p',0,0x30,0x20,0x25}},
	{{'w','a',0,0x4B,0x2B,0x42},{'d','q',0,0x26,0x31,0x4E}},
	{{'w','a','a',0,0x5C,0x2C},{'d','r',0,0x22,0x53,0x43}},
	{{'w','a','w',0,0x5A,0x43},{'d','s',0,0x1D,0x3B,0x10}},
	{{'w','e','a',0,0x44,0x2E},{'d','t',0,0x2F,0x20,0x13}},
	{{'w','e','e',0,0x3A,0x13},{'d','u',0,0x3D,0x11,0x4B}},
	{{'w','i','e',0,0x27,0x45},{'d','v',0,0x39,0x27,0x2F}},
	{{'w','o','w',0,0x11,0x4E},{'d','w',0,0x3F,0x11,0x1A}},
	{{'w','w','a',0,0x44,0x39},{'d','x',0,0x1E,0x1E,0x22}},
	{{'w','w','e',0,0x30,0x15},{'d','y',0,0x43,0x36,0x1B}},
	{{'w','w','i',0,0x45,0x4B},{'d','z',0,0x29,0x4B,0x21}},
	{{'x',0,0x29,0x35,0x49,0x39},{'e','a',0,0x23,0x24,0x5F}},
	{{'q','u','a','n','g',0},{'q','u','a','n','g',0}}
};
void ValidatePhonemeData(void)
{
	const int endPhonemeIndex = int(sizeof(phonemes) / sizeof(PHONEME)) - 1;
	if (phonemes[endPhonemeIndex].name[0] != 113
		|| phonemes[endPhonemeIndex].name[1] != 117
		|| phonemes[endPhonemeIndex].name[2] != 97
		|| phonemes[endPhonemeIndex].name[3] != 110
		|| phonemes[endPhonemeIndex].name[4] != 103
		|| phonemes[endPhonemeIndex].code[0] != 113
		|| phonemes[endPhonemeIndex].code[1] != 117
		|| phonemes[endPhonemeIndex].code[2] != 97
		|| phonemes[endPhonemeIndex].code[3] != 110
		|| phonemes[endPhonemeIndex].code[4] != 103
		)
	{
		exit(0);
	}
}
#ifdef _DEBUG
const int phonemeSize = sizeof(phonemes) / sizeof(PHONEME);
const int phonemeSystemSizeInBytes=sizeof(phonemes);
#endif
#if defined(WIN32) || defined(_WIN32) || defined(WIN64) || defined(_WIN64) 
#pragma optimize("", on)
#pragma managed(pop)
#else
#pragma GCC pop_options
#endif
