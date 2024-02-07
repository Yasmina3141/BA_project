#ifndef CONFIG_H
#define CONFIG_H

#include <stdint.h>

/* This file is used for a global configuration of the program. */

/* The primary type of any data. */
#define INT

#ifdef FLOAT
    typedef float dType;
#endif

#ifdef DOUBLE 
    typedef double dType;
#endif 

#ifdef INT
    typedef int32_t dType;
#endif

/* The primary type for any counter. */
typedef int32_t cntType;
// Attention, changing to unsigned will result in errors in find_outliers_Thompson

#endif // CONFIG_H
