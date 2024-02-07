#ifndef DELINEATION_CONDITIONED_H
#define DELINEATION_CONDITIONED_H

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "config.h" //for cntType and dType, cntType cannot be unsigned
#include "delineation.h"
#include "peakDetection.h"
#include "relativeEnergy.h"

#define FPSIZE 9 // It's included the R peak but it is always detected and the index from the beginning of the signal will be computed. Change this depending on your needs

extern uint16_t fiducial_point_code[FPSIZE];
extern uint16_t type_wave[FPSIZE];
extern uint16_t type_point[FPSIZE];

void classifyBeatECG();

#endif
