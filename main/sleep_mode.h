/*
 * This file is part of the WiCAN project.
 *
 * Copyright (C) 2022  Meatpi Electronics.
 * Written by Ali Slim <ali@meatpi.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef SLEEP_MODE_h
#define SLEEP_MODE_h

#if HARDWARE_VER == WICAN_V300 || HARDWARE_VER == WICAN_USB_V100
int8_t sleep_mode_init(uint8_t enable, float sleep_volt);
int8_t sleep_mode_get_voltage(float *val);
#elif HARDWARE_VER == WICAN_PRO
#define SLEEP_INPUT     GPIO_NUM_7

void sleep_mode_init(void);
int8_t sleep_mode_get_voltage(float *val);
#endif


#endif
