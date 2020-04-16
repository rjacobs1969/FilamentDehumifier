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


// The settings below are remnants of the original functions of Marlin, and some are needed to for the dehumifier to function but most
// are just kept here to avoid compiler errors
// In short: There is no need to change any of them 


#ifndef CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H_VERSION 010109
#define PROPORTIONAL_FONT_RATIO 1.0
#define E0_AUTO_FAN_PIN -1
#define E1_AUTO_FAN_PIN -1
#define E2_AUTO_FAN_PIN -1
#define E3_AUTO_FAN_PIN -1
#define E4_AUTO_FAN_PIN -1
#define CHAMBER_AUTO_FAN_PIN -1
#define EXTRUDER_AUTO_FAN_TEMPERATURE 50
#define EXTRUDER_AUTO_FAN_SPEED   255  // == full speed
#define X_HOME_BUMP_MM 5
#define Y_HOME_BUMP_MM 5
#define Z_HOME_BUMP_MM 2
#define HOMING_BUMP_DIVISOR { 2, 2, 8 }  // Re-Bump Speed Divisor (Divides the Homing Feedrate)
#define AXIS_RELATIVE_MODES {false, false, false, false}
#define INVERT_X_STEP_PIN false
#define INVERT_Y_STEP_PIN false
#define INVERT_Z_STEP_PIN false
#define INVERT_E_STEP_PIN false
#define DEFAULT_STEPPER_DEACTIVE_TIME 120
#define DISABLE_INACTIVE_X true
#define DISABLE_INACTIVE_Y true
#define DISABLE_INACTIVE_Z true  // set to false if the nozzle will fall down on your printed part when print has finished.
#define DISABLE_INACTIVE_E true
#define DEFAULT_MINIMUMFEEDRATE       0.0     // minimum feedrate
#define DEFAULT_MINTRAVELFEEDRATE     0.0
#if ENABLED(ULTIPANEL)
  #define MANUAL_FEEDRATE {5, 5, 4, 6} // Feedrates for manual moves along X, Y, Z, E from panel
  #define ULTIPANEL_FEEDMULTIPLY  // Comment to disable setting feedrate multiplier via encoder
#endif
#define DEFAULT_MINSEGMENTTIME        20000
#define SLOWDOWN
#define MINIMUM_PLANNER_SPEED 0.05 // (mm/sec)
#define MIN_STEPS_PER_SEGMENT 6
#define MINIMUM_STEPPER_PULSE 2
#define BLOCK_BUFFER_SIZE 2 // maximize block buffer
#define MAX_CMD_SIZE 4
#define BUFSIZE 4
#define TX_BUFFER_SIZE 0
#define I2C_SLAVE_ADDRESS  0 // Set a value from 8 to 127 to act as a slave
#define EXTRUDERS 1  
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75
#define POWER_SUPPLY 0
#define TEMP_RESIDENCY_TIME 10  // (seconds)
#define TEMP_HYSTERESIS 3       // (degC) range of +/- temperatures considered "close" to the target one
#define TEMP_WINDOW     1       // (degC) Window around target to start the residency timer x degC early.
#define TEMP_BED_RESIDENCY_TIME 10  // (seconds)
#define TEMP_BED_HYSTERESIS 3       // (degC) range of +/- temperatures considered "close" to the target one
#define TEMP_BED_WINDOW     1       // (degC) Window around target to start the residency timer x degC early.
#define BANG_MAX 255     // Limits current to nozzle while in bang-bang mode; 255=full current
#define PID_MAX BANG_MAX // Limits current to nozzle while PID is active (see PID_FUNCTIONAL_RANGE below); 255=full current
#define PID_K1 0.95      // Smoothing factor within any PID loop
#define USE_ZMIN_PLUG
#define USE_XMAX_PLUG
#define USE_YMAX_PLUG
#define USE_ZMAX_PLUG
#define ENDSTOPPULLUP_ZMIN_PROBE
#define X_MIN_ENDSTOP_INVERTING false 
#define Y_MIN_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
#define Z_MIN_ENDSTOP_INVERTING true  // set to true to invert the logic of the endstop.
#define X_MAX_ENDSTOP_INVERTING true  // set to true to invert the logic of the endstop.
#define Y_MAX_ENDSTOP_INVERTING true  // set to true to invert the logic of the endstop.
#define Z_MAX_ENDSTOP_INVERTING true  // set to true to invert the logic of the endstop.
#define Z_MIN_PROBE_ENDSTOP_INVERTING true  // set to true to invert the logic of the probe.
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 100, 100, 4000, 415 }
#define DEFAULT_MAX_FEEDRATE          { 300, 300, 5, 30 }
#define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 10, 10000 }
#define DEFAULT_ACCELERATION          1500    // X, Y, Z and E acceleration for printing moves
#define DEFAULT_RETRACT_ACCELERATION  1500    // E acceleration for retracts
#define DEFAULT_TRAVEL_ACCELERATION   1500    // X, Y, Z acceleration for travel (non printing) moves
#define DEFAULT_XJERK                 10.0
#define DEFAULT_YJERK                 10.0
#define DEFAULT_ZJERK                  0.3
#define DEFAULT_EJERK                  5.0
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define FIX_MOUNTED_PROBE
#define X_PROBE_OFFSET_FROM_EXTRUDER -22 // X offset: -left  +right  [of the nozzle]
#define Y_PROBE_OFFSET_FROM_EXTRUDER -13 // Y offset: -front +behind [the nozzle]
#define Z_PROBE_OFFSET_FROM_EXTRUDER -2.1 // Z offset: -below +above  [the nozzle]
#define MIN_PROBE_EDGE 5
#define XY_PROBE_SPEED 8000
#define Z_PROBE_SPEED_FAST HOMING_FEEDRATE_Z
#define Z_PROBE_SPEED_SLOW (Z_PROBE_SPEED_FAST / 4)
#define MULTIPLE_PROBING 2
#define Z_CLEARANCE_DEPLOY_PROBE   0  // Z Clearance for Deploy/Stow
#define Z_CLEARANCE_BETWEEN_PROBES  5 // Z Clearance between probe points
#define Z_PROBE_LOW_POINT          -2 // Farthest distance below the trigger-point to go before stopping
#define Z_PROBE_OFFSET_RANGE_MIN -20
#define Z_PROBE_OFFSET_RANGE_MAX 20
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 // For all extruders
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E true // For all extruders
#define DISABLE_INACTIVE_EXTRUDER true // Keep only the active extruder enabled.
#define INVERT_X_DIR true
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
#define INVERT_E0_DIR true
#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false
#define NO_MOTION_BEFORE_HOMING    // Inhibit movement until all axes have been homed
#define Z_HOMING_HEIGHT 4    // (in mm) Minimal z height before homing (G28) for Z clearance above the bed, clamps, ...
#define X_HOME_DIR 0
#define Y_HOME_DIR 0
#define Z_HOME_DIR 0
#define X_BED_SIZE 105
#define Y_BED_SIZE 105
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS 105
#define Y_MAX_POS 105
#define Z_MAX_POS 105
#define AUTO_BED_LEVELING_3POINT
#define HOMING_FEEDRATE_XY 80
#define HOMING_FEEDRATE_Z  80
#define SOFT_PWM_SCALE 0
#define SERIAL_PORT 0
#define BAUDRATE 115200

#endif // CONFIGURATION_ADV_H
