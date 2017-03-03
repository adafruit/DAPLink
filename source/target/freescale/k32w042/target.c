/**
 * @file    target.c
 * @brief   Target information for the k32w042
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "target_config.h"

// The file flash_blob.c must only be included in target.c
#include "flash_blob.c"

// target information
target_cfg_t target_device = {
    .sector_size    = 4096,
    .sector_cnt     = (KB(1024) / 4096),
    .flash_start    = 0,
    .flash_end      = KB(1024),
    .ram_start      = 0x20000000, // M4 DTCM
    .ram_end        = 0x20030000,
    .flash_algo     = (program_target_t *) &flash,
};
