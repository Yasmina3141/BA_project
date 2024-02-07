
#ifndef RP_CLASSIFIER_H_
#define RP_CLASSIFIER_H_

#include <stdint.h>

/*
	classify
This function receives as input a buffer (of length multiple of 2 and at least INPUT_FREQUENCY)
that stores the samples of a heart beat to classify. It also receives the length of the buffer
and the index of the sample corresponding to the R peak of the heart beat. The input is not
modified and the output of the function is the number of the classification decission (from 
0 to NUM_CLASS-1) if it recognizes a class or NUM_CLASSES in case of an unknown beat.
0 is assumed to be the class Normal
*/
uint16_t classify(int16_t buffer[], uint16_t buffer_length, uint16_t peak);
void report_rpeak(int32_t *arg[]);

#endif  //RP_CLASSIFIER_H_
