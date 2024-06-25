/*
 * @file VNC_ST7789.h
 * @date 17.01.2021
 * @author Markus Sattler
 *
 * based on the work of modi12jin
 * 
 * Copyright (c) 2021 Markus Sattler. All rights reserved.
 * This file is part of the VNC client for Arduino.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, a copy can be downloaded from
 * http://www.gnu.org/licenses/gpl.html, or obtained by writing to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 *
 */

#ifndef VNC_ST7789_H_
#define VNC_ST7789_H_

#ifdef VNC_ST7789

#include "VNC_config.h"
#include "VNC_BB_SPI.h"
#include "pins_arduino.h"

class ST7789VNC : public BB_SPI_VNC {
    public:
        ST7789VNC(int8_t cs, int8_t dc, int8_t rst = -1, int8_t led = -1, int8_t miso = MISO, int8_t mosi = MOSI, int8_t sck = SCK);
};

#endif

#endif