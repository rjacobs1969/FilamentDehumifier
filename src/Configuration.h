/**
 * Filament dehumifier controler 
 * Copyright (C) 2019 Robin Jacobs
 * 
 * Based on Marlin 1.4
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
 */

#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#define CONFIGURATION_H_VERSION 010109

#define STRING_CONFIG_H_AUTHOR "Robin Jacobs"           // Who made the changes.
#ifndef MOTHERBOARD
  #define MOTHERBOARD BOARD_RAMPS_13_EFB   
#endif
#define CUSTOM_MACHINE_NAME "FILAMENT DEHUMIFIER"

// DHT temp & humidity sensor, Note: IMO DHT11 doesn't have the necesary range and should be avoided
#define DHT_TYPE DHT::DHT22     //DHT type DHT::DHT11  / DHT::DHT22
#define DHT_PIN A3              //Set pin for the DHT sensor. Default = A3 (AUX1 - pin3)

// These are the only thermistors used by the dehumifier, see table further below for possible values
#define TEMP_SENSOR_0 11      // 100k beta 3950 1% thermistor (4.7k pullup)
#define TEMP_SENSOR_BED 11    // 100k beta 3950 1% thermistor (4.7k pullup)

// HEATER_0 is the PELTIER element, and the temperature measured is the COLD side
#define HEATER_0_MINTEMP -50   // Min temp PELTIER coldplate temperature, should be set below any posible real value
#define HEATER_0_MAXTEMP 90   // Max temp PELTIER coldplate temperature, Above this there is probabably something wrong with the hotside cooling fan

// BED is the filament chamber heater, I used a old MK3 hotbed for this purpose
#define DRYING_MINTEMP 20                   // minimum drying temperature selectable
#define DRYING_MAXTEMP 80                   // maximum drying temperature selectable
#define MAX_BED_POWER 255                   // limits duty cycle to bed; 255=full current
#define BED_CHECK_INTERVAL 5000             // ms between checks in bang-bang control
#define THERMAL_PROTECTION_BED              // Enable thermal protection for the heated bed
#define THERMAL_PROTECTION_BED_PERIOD 60    // Seconds
#define THERMAL_PROTECTION_BED_HYSTERESIS 5 // Degrees Celsius
#define WATCH_BED_TEMP_PERIOD 120           // Seconds
#define WATCH_BED_TEMP_INCREASE 2           // Degrees Celsius
#define BED_MINTEMP 0                       // Minimum valid temp, below this temp the heater won't turn on as it's likely themistor is disconnected
#define BED_MAXTEMP DRYING_MAXTEMP+10       // Max temp for before protection kicks in (to avoid themal errors on heating overshoot)

// PLA
#define PREHEAT_1_TEMP_HOTEND HEATER_0_MAXTEMP  // It will never reach this temperature as cold plate will get colder when PELTIER is active 
#define PREHEAT_1_TEMP_BED     55               // Filament chamber temperature
#define PREHEAT_1_FAN_SPEED     0               // Fan speed is controlled automaticly, leave at 0

// PETG/ABS
#define PREHEAT_2_TEMP_HOTEND HEATER_0_MAXTEMP  // It will never reach this temperature as cold plate will get colder when PELTIER is active 
#define PREHEAT_2_TEMP_BED    75                // Filament chamber temperature
#define PREHEAT_2_FAN_SPEED   0                 // Fan speed is controlled automaticly, leave at 0

// FANS
#define FAN_MIN_PWM 50      // 0-255
#define FAN_MAX_PWM 255     // 0-255 but >= FAN_MIN_PWM 

/**
 * LCD LANGUAGE
 *    en, an, bg, ca, cn, cz, cz_utf8, de, el, el-gr, es, es_utf8, eu, fi, fr, fr_utf8,
 *    gl, hr, it, kana, kana_utf8, nl, pl, pt, pt_utf8, pt-br, pt-br_utf8, ru, sk_utf8,
 *    tr, uk, zh_CN, zh_TW, test
 *
 */
#define REPRAP_DISCOUNT_SMART_CONTROLLER  // 
// #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define LCD_LANGUAGE en                   // LCD LANGUAGE
#define DISPLAY_CHARSET_HD44780 JAPANESE  //'JAPANESE', 'WESTERN', 'CYRILLIC'
#define LCD_INFO_MENU                     // Include a page of printer information in the LCD Main Menu
#define LCD_TIMEOUT_TO_STATUS 30000       // The timeout (in ms) to return to the status screen from sub-menus


// ENCODER SETTING
#define ENCODER_PULSES_PER_STEP 4 //  This option overrides the default number of encoder pulses needed to produce one step. Should be increased for high-resolution encoders.
#define REVERSE_ENCODER_DIRECTION
//#define REVERSE_MENU_DIRECTION

// BUZZER
#define LCD_FEEDBACK_FREQUENCY_DURATION_MS 6
#define LCD_FEEDBACK_FREQUENCY_HZ 5000

// SAFETY
#define USE_WATCHDOG //The hardware watchdog should reset the microcontroller disabling all outputs, in case the firmware gets stuck and doesn't do temperature regulation.


/** Thermister Options:
 * 
 * --NORMAL IS 4.7kohm PULLUP!-- 1kohm pullup can be used on hotend sensor, using correct resistor and table
 *
 * Temperature sensors available:
 *
 *    -4 : thermocouple with AD8495
 *    -3 : thermocouple with MAX31855 (only for sensor 0)
 *    -2 : thermocouple with MAX6675 (only for sensor 0)
 *    -1 : thermocouple with AD595
 *     0 : not used
 *     1 : 100k thermistor - best choice for EPCOS 100k (4.7k pullup)
 *     2 : 200k thermistor - ATC Semitec 204GT-2 (4.7k pullup)
 *     3 : Mendel-parts thermistor (4.7k pullup)
 *     4 : 10k thermistor !! do not use it for a hotend. It gives bad resolution at high temp. !!
 *     5 : 100K thermistor - ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan & J-Head) (4.7k pullup)
 *     6 : 100k EPCOS - Not as accurate as table 1 (created using a fluke thermocouple) (4.7k pullup)
 *     7 : 100k Honeywell thermistor 135-104LAG-J01 (4.7k pullup)
 *    71 : 100k Honeywell thermistor 135-104LAF-J01 (4.7k pullup)
 *     8 : 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
 *     9 : 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
 *    10 : 100k RS thermistor 198-961 (4.7k pullup)
 *    11 : 100k beta 3950 1% thermistor (4.7k pullup)
 *    12 : 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup) (calibrated for Makibox hot bed)
 *    13 : 100k Hisens 3950  1% up to 300°C for hotend "Simple ONE " & "Hotend "All In ONE"
 *    15 : 100k thermistor calibration for JGAurora A5 hotend
 *    20 : the PT100 circuit found in the Ultimainboard V2.x
 *    60 : 100k Maker's Tool Works Kapton Bed Thermistor beta=3950
 *    66 : 4.7M High Temperature thermistor from Dyze Design
 *    70 : the 100K thermistor found in the bq Hephestos 2
 *    75 : 100k Generic Silicon Heat Pad with NTC 100K MGB18-104F39050L32 thermistor
 *
 *       1k ohm pullup tables - This is atypical, and requires changing out the 4.7k pullup for 1k.
 *                              (but gives greater accuracy and more stable PID)
 *    51 : 100k thermistor - EPCOS (1k pullup)
 *    52 : 200k thermistor - ATC Semitec 204GT-2 (1k pullup)
 *    55 : 100k thermistor - ATC Semitec 104GT-2 (Used in ParCan & J-Head) (1k pullup)
 *
 *  1047 : Pt1000 with 4k7 pullup
 *  1010 : Pt1000 with 1k pullup (non standard)
 *   147 : Pt100 with 4k7 pullup
 *   110 : Pt100 with 1k pullup (non standard)
 *
 * :{ '0': "Not used", '1':"100k / 4.7k - EPCOS", '2':"200k / 4.7k - ATC Semitec 204GT-2", '3':"Mendel-parts / 4.7k", '4':"10k !! do not use for a hotend. Bad resolution at high temp. !!", '5':"100K / 4.7k - ATC Semitec 104GT-2 (Used in ParCan & J-Head)", '6':"100k / 4.7k EPCOS - Not as accurate as Table 1", '7':"100k / 4.7k Honeywell 135-104LAG-J01", '8':"100k / 4.7k 0603 SMD Vishay NTCS0603E3104FXT", '9':"100k / 4.7k GE Sensing AL03006-58.2K-97-G1", '10':"100k / 4.7k RS 198-961", '11':"100k / 4.7k beta 3950 1%", '12':"100k / 4.7k 0603 SMD Vishay NTCS0603E3104FXT (calibrated for Makibox hot bed)", '13':"100k Hisens 3950  1% up to 300°C for hotend 'Simple ONE ' & hotend 'All In ONE'", '20':"PT100 (Ultimainboard V2.x)", '51':"100k / 1k - EPCOS", '52':"200k / 1k - ATC Semitec 204GT-2", '55':"100k / 1k - ATC Semitec 104GT-2 (Used in ParCan & J-Head)", '60':"100k Maker's Tool Works Kapton Bed Thermistor beta=3950", '66':"Dyze Design 4.7M High Temperature thermistor", '70':"the 100K thermistor found in the bq Hephestos 2", '71':"100k / 4.7k Honeywell 135-104LAF-J01", '147':"Pt100 / 4.7k", '1047':"Pt1000 / 4.7k", '110':"Pt100 / 1k (non-standard)", '1010':"Pt1000 / 1k (non standard)", '-4':"Thermocouple + AD8495", '-3':"Thermocouple + MAX31855 (only for sensor 0)", '-2':"Thermocouple + MAX6675 (only for sensor 0)", '-1':"Thermocouple + AD595",'998':"Dummy 1", '999':"Dummy 2" }
 */

#endif // CONFIGURATION_H
