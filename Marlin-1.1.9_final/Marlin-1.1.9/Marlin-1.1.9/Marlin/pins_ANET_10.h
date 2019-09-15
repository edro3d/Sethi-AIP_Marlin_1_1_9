/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2017 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * Anet V1.0 board pin assignments
 */

/**
 * Rev B    16 JUN 2017
 *
 * 1) no longer uses Sanguino files to define some of the pins
 * 2) added pointers to useable Arduino IDE extensions
 *
 */

/**
 * The standard Arduino IDE extension (board manager) for this board
 * is located at https://github.com/SkyNet3D/anet-board.
 *
 * Installation instructions are on that page.
 *
 * After copying the files to the appropriate location, restart Arduino and
 * you'll see "Anet V1.0" and "Anet V1.0 (Optiboot)" in the boards list.
 *
 * "Anet V1.0" uses the bootloader that was installed on the board when
 * it shipped from the factory.
 *
 * "Anet V1.0 (Optiboot)" frees up another 3K of FLASH.  You'll need to burn
 * a new bootloader to the board to be able to automatically download a
 * compiled image.
 *
 */

/**
 * Another usable Arduino IDE extension (board manager) can be found at
 * https://github.com/Lauszus/Sanguino
 *
 * This extension has been tested on Arduino 1.6.12 & 1.8.0
 *
 * Here's the JSON path:
 * https://raw.githubusercontent.com/Lauszus/Sanguino/master/package_lauszus_sanguino_index.json
 *
 * When installing select 1.0.2
 *
 * Installation instructions can be found at https://learn.sparkfun.com/pages/CustomBoardsArduino
 * Just use the above JSON URL instead of Sparkfun's JSON.
 *
 * Once installed select the Sanguino board and then select the CPU.
 *
 */

/**
 *  To burn a new bootloader:
 *
 *   1. Connect your programmer to the board.
 *   2. In the Arduino IDE select the board and then select the programmer.
 *   3. In the Arduino IDE click on "burn bootloader". Don't worry about the "verify failed at 1F000" error message.
 *   4. The programmer is no longer needed. Remove it.
 */

/**
 * Additional info:
 *
 *   Anet Schematics                    - https://github.com/ralf-e/ANET-3D-Board-V1.0
 *   Wiring RRDFG Smart Controller      - http://www.thingiverse.com/thing:2103748
 *   SkyNet3D Anet software development - https://github.com/SkyNet3D/Marlin/
 *   Anet Users / Skynet SW on Facebook - https://www.facebook.com/skynet3ddevelopment/
 *
 *   Many thanks to Hans Raaf (@oderwat) for developing the Anet-specific software and supporting the Anet community.
 */

#ifndef __AVR_ATmega1284P__
  #error "Oops!  Make sure you have 'Anet V1.0', 'Anet V1.0 (Optiboot)' or 'Sanguino' selected in the 'Tools -> Boards' menu and ATmega1284P selected in 'Tools -> Processor' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "Anet"
#endif

//
// Limit Switches
//
#define X_STOP_PIN          2
#define Y_STOP_PIN          0
#define Z_STOP_PIN          1

//
// Steppers
//
#define X_STEP_PIN          19
#define X_DIR_PIN           18
#define X_ENABLE_PIN        24

#define Y_STEP_PIN          23
#define Y_DIR_PIN           22
#define Y_ENABLE_PIN        24

#define Z_STEP_PIN          26
#define Z_DIR_PIN           25
#define Z_ENABLE_PIN        24

#define E0_STEP_PIN         28
#define E0_DIR_PIN          27
#define E0_ENABLE_PIN       24

//
// Temperature Sensors
//
#define TEMP_0_PIN           1   // Analog Input (pin 33 extruder)
#define TEMP_BED_PIN         2   // Analog Input (pin 34 bed)

//
// Heaters / Fans
//
#define HEATER_0_PIN         4   // (extruder)
#define HEATER_BED_PIN       3   // (bed)

#ifndef FAN_PIN
  #define FAN_PIN           31
#endif

//
// Misc. Functions
//
#define SDSS                10
#define LED_PIN             -1

//
// Servo
//
#define SERVO0_PIN          21

//
// Encoder
//
#define BTN_EN1             13
#define BTN_EN2             14
#define BTN_ENC             11

#if ENABLED(LCM1602)
  #define LCD_WIDTH 16
  #define LCD_HEIGHT 4
#endif // LCM1602
