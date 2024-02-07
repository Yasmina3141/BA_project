/*
* Copyright 2023 EPFL
* Solderpad Hardware License, Version 2.1, see LICENSE.md for details.
* SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
*/

#include <stdio.h>
#include <stdlib.h>

#include "perf.h"
#include "vadc.h"
#include "definitions.h"
#include "delineationConditioned.h"

int main(int argc, char *argv[])
{
    // static uint32_t data_buffer[INPUT_DATA_LENGTH];
    
    // Init the virtual ADC
    // vadc_init();

    // Start the performance counters to report timing and energy
    perf_start();

    // Obtain the data (simulating obtaining a buffer from the ADC)
    // read_vadc_dma(data_buffer, 4 * INPUT_DATA_LENGTH);

    // Stops the transaction
    // vadc_deinit();

    // Run the heart beat classifier application
    printf("Start\n");
    classifyBeatECG();
    printf("Done\n");

    // Stop the performance counters.
    perf_stop();

    // Send back the result.
    // write_result(data_buffer, INPUT_DATA_LENGTH);

    return EXIT_SUCCESS;

}
