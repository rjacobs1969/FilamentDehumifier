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
 * Slovak
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Michal Holeš, Farma MaM
 * http://www.facebook.com/farmamam
 *
 */
#ifndef LANGUAGE_SK_UTF_H
#define LANGUAGE_SK_UTF_H

#define MAPPER_C3C4C5_SK
#define DISPLAY_CHARSET_ISO10646_SK
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" pripravená.")
#define MSG_BACK                            _UxGT("Naspať")
#define MSG_SD_INSERTED                     _UxGT("Karta vložená")
#define MSG_SD_REMOVED                      _UxGT("Karta vybratá")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstopy") // max 8 znakov
#define MSG_MAIN                            _UxGT("Hlavná ponuka")
#define MSG_AUTOSTART                       _UxGT("Autoštart")
#define MSG_DISABLE_STEPPERS                _UxGT("Uvolniť motory")
#define MSG_DEBUG_MENU                      _UxGT("Ponuka ladenia")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test uk. priebehu")
#define MSG_AUTO_HOME                       _UxGT("Domovská pozícia")
#define MSG_AUTO_HOME_X                     _UxGT("Domov os X")
#define MSG_AUTO_HOME_Y                     _UxGT("Domov os Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Domov os Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Meranie podložky")
#define MSG_LEVEL_BED_WAITING               _UxGT("Kliknutím spusťte")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Ďalší bod")
#define MSG_LEVEL_BED_DONE                  _UxGT("Meranie hotové!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Výška merania")
#define MSG_SET_HOME_OFFSETS                _UxGT("Nastaviť offsety")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offsety nastavené")
#define MSG_SET_ORIGIN                      _UxGT("Nastaviť začiatok")
#define MSG_PREHEAT_1                       _UxGT("Zahriať PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" všetko")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" hotend")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" podlož")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" nast")
#define MSG_PREHEAT_2                       _UxGT("Zahriať ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" všetko")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" hotend")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" podlož")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" nast")
#define MSG_COOLDOWN                        _UxGT("Schladiť")
#define MSG_SWITCH_PS_ON                    _UxGT("Zapnúť napájanie")
#define MSG_SWITCH_PS_OFF                   _UxGT("Vypnúť napájanie")
#define MSG_EXTRUDE                         _UxGT("Vytlačiť (extr.)")
#define MSG_RETRACT                         _UxGT("Vytiahnuť (retr.)")
#define MSG_MOVE_AXIS                       _UxGT("Posunúť osy")
#define MSG_BED_LEVELING                    _UxGT("Vyrovnať podložku")
#define MSG_LEVEL_BED                       _UxGT("Vyrovnať podložku")
#define MSG_LEVEL_CORNERS                   _UxGT("Vyrovnať rohy")
#define MSG_NEXT_CORNER                     _UxGT("Ďalší roh")
#define MSG_EDITING_STOPPED                 _UxGT("Koniec úprav siete")

#define MSG_UBL_DOING_G29                   _UxGT("Vykonávam G29")
#define MSG_UBL_UNHOMED                     _UxGT("Prejdite domov")
#define MSG_UBL_TOOLS                       _UxGT("UBL nástroje")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Manuálna sieť bodov")
#define MSG_UBL_BC_INSERT                   _UxGT("Vložte kartu, zmerajte")
#define MSG_UBL_BC_INSERT2                  _UxGT("Zmerajte")
#define MSG_UBL_BC_REMOVE                   _UxGT("Odstráňte a zmerajte")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Presun na ďalší")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Aktivovať UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Deaktivovať UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Teplota podložky")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Teplota hotendu")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   _UxGT("Úprava sieťe bodov")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Upraviť vlastnú sieť")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Doladiť sieť bodov")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Koniec úprav siete")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Vlastná sieť")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Vytvoriť sieť")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("Sieť bodov PLA")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("Sieť bodov ABS")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Studená sieť bodov")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Upraviť výšku siete")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Výška")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Skontrolovať sieť")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("Kontrola siete PLA")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("Kontrola siete ABS")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Kontrola vlast. siete")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Pokračovať v sieti")
#define MSG_UBL_MESH_LEVELING               _UxGT("Sieťové rovnanie")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("3-bodove rovnanie")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Mriežkové rovnanie")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Vyrovnať podložku")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Postranné body")
#define MSG_UBL_MAP_TYPE                    _UxGT("Typ siete bodov")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Exportovať sieť")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Exportovať do PC")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Exportovať do CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Záloha do PC")
#define MSG_UBL_INFO_UBL                    _UxGT("Info o UBL do PC")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Upraviť sieť bodov")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Hustota mriežky")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Ručná hustota")
#define MSG_UBL_SMART_FILLIN                _UxGT("Smart hustota")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Zaplniť mriežku")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Zrušiť všetko")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Zrušiť posledný")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Upraviť všetky")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Upraviť posledný")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Uložisko sietí")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Pamaťový slot")
#define MSG_UBL_LOAD_MESH                   _UxGT("Načítať sieť bodov")
#define MSG_UBL_SAVE_MESH                   _UxGT("Uložiť sieť bodov")
#define MSG_MESH_LOADED                     _UxGT("Sieť %i načítaná")
#define MSG_MESH_SAVED                      _UxGT("Sieť %i uložená")
#define MSG_NO_STORAGE                      _UxGT("Nedostatok miesta")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Err: Uložiť UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Err: Obnoviť UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Koniec Z-Offsetu")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL Postupne")

#define MSG_LED_CONTROL                     _UxGT("Nastavenie LED")
#define MSG_LEDS                            _UxGT("Svetlo")
#define MSG_LED_PRESETS                     _UxGT("Prednastavené farby")
#define MSG_SET_LEDS_RED                    _UxGT("Červená")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Oranžová")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Žltá")
#define MSG_SET_LEDS_GREEN                  _UxGT("Zelená")
#define MSG_SET_LEDS_BLUE                   _UxGT("Modrá")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Fialová")
#define MSG_SET_LEDS_WHITE                  _UxGT("Biela")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Obnoviť nastavenie")
#define MSG_CUSTOM_LEDS                     _UxGT("Vlastná farba")
#define MSG_INTENSITY_R                     _UxGT("Inten. červenej")
#define MSG_INTENSITY_G                     _UxGT("Inten. zelenej")
#define MSG_INTENSITY_B                     _UxGT("Inten. modrej")
#define MSG_INTENSITY_W                     _UxGT("Inten. bielej")
#define MSG_LED_BRIGHTNESS                  _UxGT("Jas")

#define MSG_USER_MENU                       _UxGT("Vlastné príkazy")
#define MSG_MOVING                          _UxGT("Posun...")
#define MSG_FREE_XY                         _UxGT("Uvolniť XY")
#define MSG_MOVE_X                          _UxGT("Posunúť X")
#define MSG_MOVE_Y                          _UxGT("Posunúť Y")
#define MSG_MOVE_Z                          _UxGT("Posunúť Z")
#define MSG_MOVE_E                          _UxGT("Extrúder")
#define MSG_MOVE_01MM                       _UxGT("Posunúť o 0,1mm")
#define MSG_MOVE_1MM                        _UxGT("Posunúť o 1mm")
#define MSG_MOVE_10MM                       _UxGT("Posunúť o 10mm")
#define MSG_SPEED                           _UxGT("Rýchlosť")
#define MSG_BED_Z                           _UxGT("Výška podl.")
#define MSG_NOZZLE                          _UxGT("Tryska")
#define MSG_BED                             _UxGT("Podložka")
#define MSG_FAN_SPEED                       _UxGT("Rýchlosť vent.")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Rýchlosť ex. vent.")
#define MSG_FLOW                            _UxGT("Prietok")
#define MSG_CONTROL                         _UxGT("Ovládanie")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fakt")
#define MSG_AUTOTEMP                        _UxGT("Autoteplota")
#define MSG_ON                              _UxGT("Zap")
#define MSG_OFF                             _UxGT("Vyp")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Vybrať")
#define MSG_ACC                             _UxGT("Zrýchl")
#define MSG_JERK                            _UxGT("Skok")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-skok")
  #define MSG_VB_JERK                       _UxGT("Vb-skok")
  #define MSG_VC_JERK                       _UxGT("Vc-skok")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-skok")
  #define MSG_VB_JERK                       _UxGT("Vy-skok")
  #define MSG_VC_JERK                       _UxGT("Vz-skok")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-skok")
#define MSG_VELOCITY                        _UxGT("Rýchlosť")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")
#define MSG_ACCELERATION                    _UxGT("Akcelerácia")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("A-retrakt")
#define MSG_A_TRAVEL                        _UxGT("A-prejazd")
#define MSG_STEPS_PER_MM                    _UxGT("Krokov/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Akrokov/mm")
  #define MSG_BSTEPS                        _UxGT("Bkrokov/mm")
  #define MSG_CSTEPS                        _UxGT("Ckrokov/mm")
#else
  #define MSG_ASTEPS                        _UxGT("Xkrokov/mm")
  #define MSG_BSTEPS                        _UxGT("Ykrokov/mm")
  #define MSG_CSTEPS                        _UxGT("Zkrokov/mm")
#endif
#define MSG_ESTEPS                          _UxGT("Ekrokov/mm")
#define MSG_E1STEPS                         _UxGT("E1krokov/mm")
#define MSG_E2STEPS                         _UxGT("E2krokov/mm")
#define MSG_E3STEPS                         _UxGT("E3krokov/mm")
#define MSG_E4STEPS                         _UxGT("E4krokov/mm")
#define MSG_E5STEPS                         _UxGT("E5kroků/mm")
#define MSG_TEMPERATURE                     _UxGT("Teplota")
#define MSG_MOTION                          _UxGT("Pohyb")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E na mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. Priem.")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Vysunúť mm")
#define MSG_FILAMENT_LOAD                   _UxGT("Zaviesť mm")
#define MSG_ADVANCE_K                       _UxGT("K pro posun")
#define MSG_CONTRAST                        _UxGT("Kontrast LCD")
#define MSG_STORE_EEPROM                    _UxGT("Uložiť nastavenie")
#define MSG_LOAD_EEPROM                     _UxGT("Načítať nastaveníe")
#define MSG_RESTORE_FAILSAFE                _UxGT("Obnoviť nastavenie")
#define MSG_INIT_EEPROM                     _UxGT("Inic. EEPROM")
#define MSG_REFRESH                         _UxGT("Obnoviť")
#define MSG_WATCH                           _UxGT("Info obrazovka")
#define MSG_PREPARE                         _UxGT("Príprava tlače")
#define MSG_TUNE                            _UxGT("Doladenie tlače")
#define MSG_PAUSE_PRINT                     _UxGT("Pozastaviť tlač")
#define MSG_RESUME_PRINT                    _UxGT("Obnoviť tlač")
#define MSG_STOP_PRINT                      _UxGT("Zastaviť tlač")
#define MSG_CARD_MENU                       _UxGT("Tlačiť z SD")
#define MSG_NO_CARD                         _UxGT("Žiadna SD karta")
#define MSG_DWELL                           _UxGT("Spím...")
#define MSG_USERWAIT                        _UxGT("Čakám...")
#define MSG_PRINT_PAUSED                    _UxGT("Tlač pozastavená")
#define MSG_PRINT_ABORTED                   _UxGT("Tlač zrušená")
#define MSG_NO_MOVE                         _UxGT("Žiadny pohyb.")
#define MSG_KILLED                          _UxGT("PRERUŠENÉ. ")
#define MSG_STOPPED                         _UxGT("ZASTAVENÉ. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Retrakt mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Výmena Re.mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retraktovať  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Zdvih Z mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#define MSG_AUTORETRACT                     _UxGT("AutoRetr.")
#define MSG_FILAMENTCHANGE                  _UxGT("Vymeniť filament")
#define MSG_FILAMENTLOAD                    _UxGT("Zaviesť filament")
#define MSG_FILAMENTUNLOAD                  _UxGT("Vysunúť filament")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Vysunúť všetko")

#define MSG_INIT_SDCARD                     _UxGT("Načítať SD kartu")
#define MSG_CNG_SDCARD                      _UxGT("Vymeniť SD kartu")
#define MSG_ZPROBE_OUT                      _UxGT("Sonda Z mimo podl")
#define MSG_SKEW_FACTOR                     _UxGT("Faktor skosenia")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch Reset")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("BLTouch Vysunúť")
#define MSG_BLTOUCH_STOW                    _UxGT("BLTouch Zasunúť")
#define MSG_HOME                            _UxGT("Najprv")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("domov")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z offset")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop zastavil")
#define MSG_HEATING_FAILED_LCD              _UxGT("Chyba ohrevu")
#define MSG_HEATING_FAILED_LCD_BED          _UxGT("Chyba ohrevu podl.")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("REDUND. TEPLOTA")
#define MSG_THERMAL_RUNAWAY                 _UxGT("TEPLOTNÝ SKOK")
#define MSG_THERMAL_RUNAWAY_BED             _UxGT("TEPLOTNÝ SKOK PODL.")
#define MSG_ERR_MAXTEMP                     _UxGT("VYSOKÁ TEPLOTA")
#define MSG_ERR_MINTEMP                     _UxGT("NÍZKA TEPLOTA")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("VYS. TEPL. PODL.")
#define MSG_ERR_MINTEMP_BED                 _UxGT("NÍZ. TEPL. PODL.")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("TLAČ. ZASTAVENÁ")
#define MSG_PLEASE_RESET                    _UxGT("Spravte reset")
#define MSG_SHORT_DAY                       _UxGT("d")
#define MSG_SHORT_HOUR                      _UxGT("h")
#define MSG_SHORT_MINUTE                    _UxGT("m")
#define MSG_HEATING                         _UxGT("Ohrev...")
#define MSG_COOLING                         _UxGT("Ochladzovanie...")
#define MSG_BED_HEATING                     _UxGT("Ohrev podl...")
#define MSG_BED_COOLING                     _UxGT("Ochladzovanie podl...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta Kalibrácia")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Kalibrovať X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Kalibrovať Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Kalibrovať Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Kalibrovať Stred")
#define MSG_DELTA_SETTINGS                  _UxGT("Delta nastavenia")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Autokalibrácia")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Nast.výšku delty")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Diag rameno")
#define MSG_DELTA_HEIGHT                    _UxGT("Výška")
#define MSG_DELTA_RADIUS                    _UxGT("Polomer")
#define MSG_INFO_MENU                       _UxGT("O tlačiarni")
#define MSG_INFO_PRINTER_MENU               _UxGT("Info o tlačiarni")
#define MSG_3POINT_LEVELING                 _UxGT("3-bodové rovnanie")
#define MSG_LINEAR_LEVELING                 _UxGT("Lineárne rovnanie")
#define MSG_BILINEAR_LEVELING               _UxGT("Bilineárne rovnanie")
#define MSG_UBL_LEVELING                    _UxGT("Unified Bed Leveling")
#define MSG_MESH_LEVELING                   _UxGT("Mriežkové rovnanie")
#define MSG_INFO_STATS_MENU                 _UxGT("Štatistika")
#define MSG_INFO_BOARD_MENU                 _UxGT("Info o doske")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistory")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extrudéry")
#define MSG_INFO_BAUDRATE                   _UxGT("Rýchlosť")
#define MSG_INFO_PROTOCOL                   _UxGT("Protokol")
#define MSG_CASE_LIGHT                      _UxGT("Osvetlenie")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Jas svetla")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Počet tlačí")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Dokončené")
  #define MSG_INFO_PRINT_TIME               _UxGT("Celkový čas")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Najdlhšia tlač")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Celkom vytlačené")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Tlače")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Hotovo")
  #define MSG_INFO_PRINT_TIME               _UxGT("Čas")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Najdlhšia")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Vytlačené")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Teplota min")
#define MSG_INFO_MAX_TEMP                   _UxGT("Teplota max")
#define MSG_INFO_PSU                        _UxGT("Nap. zdroj")
#define MSG_DRIVE_STRENGTH                  _UxGT("Budenie motorov")
#define MSG_DAC_PERCENT                     _UxGT("Motor %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Uložiť do EEPROM")

#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("PAUZA TLAČE")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("ZAVEDENIE FILAMENTU")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("VYSUNUTIE FILAMENTU")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("MOŽN. POKRAČ.:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("Vytlačiť viacej")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Obnoviť tlač")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Tryska: ")
#define MSG_ERR_HOMING_FAILED               _UxGT("Parkovanie zlyhalo")
#define MSG_ERR_PROBING_FAILED              _UxGT("Kalibrácia zlyhala")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Príliž studený")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Čakajte prosím")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("na spustenie")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("výmeny filamentu")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Čakejte prosím")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("na vysunutie")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("filamentu")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Vložte filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("a stlačte")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("tlačidlo...")
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Kliknite pre")
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("ohrev trysky")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Čakajte prosím")
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("na teplotu tr.")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Čakajte prosím")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("na zavedenie")
  #define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("filamentu")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("Čakajte na")
  #define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("vytlačenie")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Čakajte prosím")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("na pokračovanie")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("tlače")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Čakajte...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Vysúvanie...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Vložte, kliknite")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Ohrev...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Zavádzanie...")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("Vytlačovanie...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Pokračovanie...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_SK_UTF_H
