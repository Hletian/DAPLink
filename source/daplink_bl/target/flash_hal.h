/* CMSIS-DAP Interface Firmware
 * Copyright (c) 2009-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef FLASH_HAL_H
#define FLASH_HAL_H

#include "FlashPrg.h"

uint32_t  __swi(3) flash_program_page_svc (uint32_t adr, uint32_t sz, uint8_t *buf);
uint32_t  __swi(2) flash_erase_sector_svc (uint32_t addr);

#endif