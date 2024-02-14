/*
* Copyright 2023 EPFL
* Solderpad Hardware License, Version 2.1, see LICENSE.md for details.
* SPDX-License-Identifier: Apache-2.0 WITH SHL-2.1
*/

#include <stdio.h>
#include <stdlib.h>

#include "perf.h"
#include "delineationConditioned.h"

int main(int argc, char *argv[])
{
    // static uint32_t data_buffer[INPUT_DATA_LENGTH];

    // Start the performance counters to report timing and energy
    perf_start();

    // Init the virtual ADC
    vadc_init();

    // Run the heart beat classifier application
    printf("Start HBC\n");
    classifyBeatECG();
    printf("Finished HBC\n");

    // Stops the transaction
    vadc_deinit();

    // Stop the performance counters.
    perf_stop();

    // Send back the result.
    // write_result(data_buffer, INPUT_DATA_LENGTH);

    return EXIT_SUCCESS;

}
