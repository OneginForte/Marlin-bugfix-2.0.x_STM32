/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 *
 */

 /**
  * 2017 Victor Perez Marlin for stm32f1 test
  * 2018 Modified by Pablo Crespo for Morpheus Board (https://github.com/pscrespo/Morpheus-STM32)
  */

/**
 * MORPHEUS Board pin assignments
 */

#ifndef __STM32F1__
  #error "Oops! Select an STM32F1 board in 'Tools > Board.'"
#endif

#define BOARD_NAME "STM32-Discover+RAMPS1.5"

#define E2END 0xFFF
#define DISABLE_DEBUG

//
// Limit Switches
//
#define X_MIN_PIN          PA8//PB14
#define Y_MIN_PIN          PA9//PB13
#define Z_MIN_PIN          PA10//PB12

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  PB9
#endif

//
// Steppers
//
// X & Y enable are the same
#define X_STEP_PIN         PC6//PB7
#define X_DIR_PIN          PB4//PB6
#define X_ENABLE_PIN       PA15//PB8

#define Y_STEP_PIN         PC7//PB5
#define Y_DIR_PIN          PB3//PB4
#define Y_ENABLE_PIN       PC10//PB8

#define Z_STEP_PIN         PC8//PA15
#define Z_DIR_PIN          PB8//PA10
#define Z_ENABLE_PIN       PC11//PB3

#define E0_STEP_PIN        PC9//PA8
#define E0_DIR_PIN         PB5//PB15
#define E0_ENABLE_PIN      PC12//PA9

//
// Temperature Sensors
//
#define TEMP_0_PIN         PB1   // Analog Input (HOTEND thermistor)
#define TEMP_BED_PIN       PB0   // Analog Input (BED thermistor)

//
// Heaters / Fans
//
#define HEATER_0_PIN       PA2   // HOTEND MOSFET
#define HEATER_BED_PIN     PA0   // BED MOSFET

#define FAN_PIN            PA1   // FAN1 header on board - PRINT FAN

//
// Misc.
//
#define LCD_PINS_RS        PA4    // ST9720 CS
#define LCD_PINS_ENABLE    PA7    // ST9720 DAT
#define LCD_PINS_D4        PA5    // ST9720 CLK

#define BTN_EN1            PB11
#define BTN_EN2            PB12
#define BTN_ENC            PB10

#define SPI1_SCK           PA5
#define SPI1_MISO          PA6
#define SPI1_MOSI          PA7
#define BEEPER_PIN         PC4
#define LED_PIN            PC5
#define SDSS               PA4

#ifndef ST7920_DELAY_1
#define ST7920_DELAY_1 DELAY_NS(125)
#endif
#ifndef ST7920_DELAY_2
#define ST7920_DELAY_2 DELAY_NS(125)
#endif
#ifndef ST7920_DELAY_3
#define ST7920_DELAY_3 DELAY_NS(125)
#endif
