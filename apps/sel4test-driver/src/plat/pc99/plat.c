/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#include "../../test.h"

#include <platsupport/io.h>
#include <sel4platsupport/plat/timer.h>
#include <sel4platsupport/bootinfo.h>

void
plat_copy_timer_caps(test_init_data_t *init, env_t env,
                          sel4utils_process_t *test_process)
{
}

void
plat_copy_serial_caps(test_init_data_t *init, env_t env,
                      sel4utils_process_t *test_process)
{
}

void
plat_init(env_t env)
{
    env->init->tsc_freq = platsupport_get_bootinfo()->archInfo;
}
