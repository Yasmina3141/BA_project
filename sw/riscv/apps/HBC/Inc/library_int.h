/*
 * library_int.h
 *
 *  Created on: Dec 7, 2011
 *      Author: esl-adming-elg023
 */

#ifndef LIBRARY_INT_H_
#define LIBRARY_INT_H_
#include "defines_globals.h"

data_t highpass(data_t d1, data_t d2);
data_t lowpass(data_t d1, data_t d2, data_t d3, data_t d4);
uint16_t isqrt32(int32_t* in_ptr);
int16_t myDiv(int16_t a, int16_t b);
void myDiv32_sat16(int32_t* a, int32_t* b, int32_t* dest);

#endif /* LIBRARY_INT_H_ */
