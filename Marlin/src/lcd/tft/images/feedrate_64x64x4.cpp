/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t feedrate_64x64x4[2048] = {
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x37, 0x9a, 0xaa, 0xaa, 0x99, 0x73, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x39, 0xaa, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xaa, 0x94, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x81, 0x8a, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xa7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x81, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xa7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xff, 0xff, 0xea, 0xa9, 0x77, 0xef, 0xfe, 0x77, 0x8a, 0xae, 0xff, 0xff, 0xfe, 0xa7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x3a, 0xef, 0xff, 0xfe, 0xa9, 0x38, 0x88, 0x88, 0xaf, 0xfa, 0x88, 0x88, 0x84, 0x9a, 0xef, 0xff, 0xfe, 0xa2, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xef, 0xff, 0xfe, 0xa6, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x5a, 0xef, 0xff, 0xfe, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xfe, 0xa5, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4a, 0xef, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xef, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x88, 0x17, 0x9a, 0xef, 0xfe, 0xa8, 0x71, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xfe, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x8e, 0xff, 0xfe, 0x58, 0x88, 0x88, 0x82, 0x9a, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xa6, 0x88, 0x88, 0x88, 0x84, 0xef, 0xff, 0xe8, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xf9, 0x88, 0x88, 0x82, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xaa, 0x48, 0x88, 0x88, 0x2a, 0xef, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xff, 0xfe, 0x78, 0x88, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xea, 0xae, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xe6, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x83, 0xef, 0xff, 0xff, 0xff, 0xe9, 0x5a, 0xef, 0xff, 0xfe, 0xaa, 0x75, 0x18, 0x81, 0x67, 0x9a, 0xef, 0xff, 0xfe, 0xa3, 0x88, 0x88, 0x8a, 0xff, 0xfe, 0x38, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x8a, 0xff, 0xfe, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x93, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4a, 0xef, 0xff, 0xfe, 0x28, 0x88, 0x82, 0xef, 0xff, 0xa8, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x7e, 0xff, 0xe4, 0x82, 0xef, 0xff, 0xff, 0xfe, 0xa2, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4a, 0xef, 0xfe, 0x58, 0x88, 0x88, 0x4e, 0xff, 0xe7, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x82, 0xef, 0xfe, 0x78, 0x88, 0x5f, 0xff, 0xff, 0xe6, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7a, 0xea, 0x88, 0x88, 0x88, 0x87, 0xef, 0xfe, 0x28, 0x88, 0x88, 
    0x88, 0x88, 0x89, 0xff, 0xfa, 0x88, 0x88, 0x5f, 0xff, 0xfe, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x51, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xff, 0x98, 0x88, 0x88, 
    0x88, 0x88, 0x8a, 0xff, 0xe4, 0x88, 0x88, 0xaf, 0xff, 0xe3, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0x68, 0x88, 0x88, 0x5e, 0xff, 0xe2, 0x88, 0x88, 
    0x88, 0x88, 0x7e, 0xff, 0xa8, 0x88, 0x87, 0xef, 0xfe, 0x58, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x85, 0xae, 0xe6, 0x88, 0x88, 0x8a, 0xff, 0xfa, 0x88, 0x88, 
    0x88, 0x88, 0xaf, 0xfe, 0x48, 0x88, 0x2e, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8e, 0xff, 0xe7, 0x88, 0x88, 0x86, 0xef, 0xfa, 0x88, 0x88, 
    0x88, 0x84, 0xef, 0xfa, 0x88, 0x88, 0x9f, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x5a, 0xef, 0xff, 0xa8, 0x88, 0x88, 0x88, 0xaf, 0xfe, 0x38, 0x88, 
    0x88, 0x89, 0xff, 0xf9, 0x88, 0x88, 0xaf, 0xfe, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xef, 0xff, 0xfe, 0x48, 0x88, 0x88, 0x88, 0x9f, 0xff, 0x98, 0x88, 
    0x88, 0x8a, 0xff, 0xe4, 0x88, 0x86, 0xef, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x85, 0xae, 0xff, 0xff, 0xe7, 0x85, 0xaa, 0x38, 0x88, 0x3e, 0xff, 0xa8, 0x88, 
    0x88, 0x1e, 0xff, 0xa8, 0x88, 0x8a, 0xff, 0xe4, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xff, 0xff, 0x98, 0x8a, 0xff, 0xa8, 0x88, 0x8a, 0xff, 0xe1, 0x88, 
    0x88, 0x6f, 0xff, 0xa8, 0x88, 0x8a, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x3a, 0xef, 0xff, 0xff, 0xfe, 0x18, 0x8a, 0xff, 0xe1, 0x88, 0x8a, 0xff, 0xf6, 0x88, 
    0x88, 0x7f, 0xff, 0x98, 0x88, 0x4e, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xff, 0xff, 0xe3, 0x88, 0x8a, 0xff, 0xf6, 0x88, 0x89, 0xff, 0xf8, 0x88, 
    0x88, 0x9f, 0xff, 0x78, 0x88, 0x7f, 0xff, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0xae, 0xff, 0xff, 0xff, 0xfe, 0x78, 0x88, 0x89, 0xff, 0xf8, 0x88, 0x87, 0xff, 0xf9, 0x88, 
    0x88, 0xaf, 0xff, 0xd7, 0x77, 0xef, 0xff, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x88, 0x88, 0x87, 0xff, 0xf9, 0x88, 0x86, 0xff, 0xf9, 0x88, 
    0x88, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x1a, 0xef, 0xfd, 0x9c, 0xff, 0xff, 0xa8, 0x88, 0x88, 0x86, 0xff, 0xfa, 0x88, 0x86, 0xff, 0xfa, 0x88, 
    0x88, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x58, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x85, 0xef, 0xff, 0xd5, 0x84, 0xff, 0xfe, 0x28, 0x88, 0x88, 0x86, 0xff, 0xfa, 0x88, 0x86, 0xff, 0xfa, 0x88, 
    0x88, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xd9, 0x38, 0x89, 0xff, 0xe5, 0x88, 0x88, 0x88, 0x86, 0xff, 0xfa, 0x88, 0x86, 0xff, 0xfa, 0x88, 
    0x88, 0xaf, 0xff, 0xd7, 0x77, 0xef, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xfd, 0x68, 0x88, 0x7d, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x87, 0xff, 0xf9, 0x88, 0x86, 0xff, 0xfa, 0x88, 
    0x88, 0x9f, 0xff, 0x78, 0x88, 0x8f, 0xff, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xd5, 0x88, 0x85, 0xdf, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0xff, 0xf8, 0x88, 0x87, 0xff, 0xf9, 0x88, 
    0x88, 0x8f, 0xff, 0x98, 0x88, 0x6f, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xfd, 0x58, 0x88, 0x3e, 0xff, 0xe1, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xf7, 0x88, 0x88, 0xff, 0xf7, 0x88, 
    0x88, 0x6f, 0xff, 0xa8, 0x88, 0x1e, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xf9, 0x88, 0x88, 0x9f, 0xfe, 0x38, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xe1, 0x88, 0x8a, 0xff, 0xf7, 0x88, 
    0x88, 0x1e, 0xff, 0xa8, 0x88, 0x8a, 0xff, 0xe5, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xfd, 0x68, 0x19, 0xdf, 0xe6, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4e, 0xff, 0xa8, 0x88, 0x8a, 0xff, 0xe1, 0x88, 
    0x88, 0x8a, 0xff, 0xe3, 0x88, 0x89, 0xff, 0xf9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xd9, 0xdf, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xfe, 0x78, 0x88, 0x3e, 0xff, 0xa8, 0x88, 
    0x88, 0x89, 0xff, 0xf9, 0x88, 0x82, 0xef, 0xfe, 0x28, 0x88, 0x88, 0x88, 0x88, 0x81, 0xef, 0xff, 0xff, 0xe8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0xef, 0xfa, 0x88, 0x88, 0x9f, 0xff, 0x98, 0x88, 
    0x88, 0x84, 0xef, 0xfa, 0x88, 0x88, 0x9f, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x2a, 0xef, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfa, 0x88, 0x88, 0xaf, 0xfe, 0x48, 0x88, 
    0x88, 0x88, 0xaf, 0xfe, 0x58, 0x88, 0x2e, 0xff, 0xe6, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x16, 0x61, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xe4, 0x88, 0x84, 0xef, 0xfa, 0x88, 0x88, 
    0x88, 0x88, 0x9f, 0xff, 0xa8, 0x88, 0x89, 0xff, 0xfe, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x82, 0xef, 0xfe, 0x78, 0x88, 0x8a, 0xff, 0xe7, 0x88, 0x88, 
    0x88, 0x88, 0x2e, 0xff, 0xe4, 0x88, 0x84, 0xff, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfa, 0x88, 0x88, 0x4e, 0xff, 0xa8, 0x88, 0x88, 
    0x88, 0x88, 0x89, 0xff, 0xfa, 0x88, 0x85, 0xff, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfe, 0x28, 0x88, 0xaf, 0xff, 0x98, 0x88, 0x88, 
    0x88, 0x88, 0x82, 0xef, 0xfe, 0x78, 0x4e, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xef, 0xff, 0xe5, 0x87, 0xef, 0xfe, 0x28, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x7e, 0xff, 0xea, 0xef, 0xff, 0xe8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xfe, 0x9e, 0xff, 0xe7, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x8a, 0xff, 0xff, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xff, 0xff, 0xa8, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x85, 0xef, 0xff, 0xff, 0xe6, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x6e, 0xff, 0xff, 0xfe, 0x48, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xfe, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x82, 0xef, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x87, 0xee, 0xa1, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x1a, 0xee, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x55, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x45, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x82, 0x77, 0x77, 0x89, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x97, 0x77, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x1e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x25, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x52, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT
