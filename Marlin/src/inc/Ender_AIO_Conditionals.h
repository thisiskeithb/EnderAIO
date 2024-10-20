#pragma once
//===========================================================================
//========================== DO NOT EDIT THIS FILE ==========================
//===========================================================================

/**
 * Ender_AIO_Conditionals.h
 * Configuration logic based on Ender_AIO_Configuration.h options at compile time.
 */
#define CONFIGURATION_H_VERSION 02010300
#define ENDER_AIO_VERSION 20241019

//===========================================================================
//============================ Source Code Info =============================
//===========================================================================

#define SOURCE_CODE_URL "bit.ly/3YYEblW"
#define WEBSITE_URL SOURCE_CODE_URL

//===========================================================================
//============================== Printer Name ===============================
//===========================================================================

#ifndef ENDER_AIO_CUSTOM_PRINTER_NAME
  #define ENDER_AIO_CUSTOM_PRINTER_NAME "Ender-3"
#endif

//===========================================================================
//=============================== Motherboard ===============================
//===========================================================================

// Define MOTHERBOARD here so preflight-checks.py works
#if ENABLED(ENDER_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3_0)
  #define MOTHERBOARD BOARD_BTT_SKR_MINI_E3_V3_0
  #define ENDER_AIO_NO_DRIVER_UART_SPI_JUMPERS 1
  #define ENDER_AIO_HAS_REAL_EEPROM 1
  #define ENDER_AIO_HAS_CONTROLLER_FAN 1
  #define ENDER_AIO_CONTROLLER_FAN_PIN FAN2_PIN // PB15
  #define ENDSTOP_INTERRUPTS_FEATURE
  #define ENDER_AIO_SERIAL_PORT_2 2
  #define FAN_SOFT_PWM
  #define ENDER_AIO_SINGLE_BOARD_EXP_CONNECTION 1
  //#define ENDER_AIO_HAS_TEMP_SENSOR_SOC 1
  #define FIL_MOTION1_PIN   PC13   // PS-ON
#elif ENABLED(ENDER_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3_0_1)
  #define MOTHERBOARD BOARD_BTT_SKR_MINI_E3_V3_0_1
  #define ENDER_AIO_NO_DRIVER_UART_SPI_JUMPERS 1
  #define ENDER_AIO_HAS_REAL_EEPROM 1
  #define ENDER_AIO_HAS_CONTROLLER_FAN 1
  #define ENDER_AIO_CONTROLLER_FAN_PIN FAN2_PIN // PC8
  #define ENDSTOP_INTERRUPTS_FEATURE
  #define ENDER_AIO_SERIAL_PORT_2 2
  #define FAN_SOFT_PWM
  #define ENDER_AIO_SINGLE_BOARD_EXP_CONNECTION 1
  //#define ENDER_AIO_HAS_TEMP_SENSOR_SOC 1
  #define FIL_MOTION1_PIN   PC14   // PS-ON
#elif ENABLED(ENDER_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V2_0)
  #define MOTHERBOARD BOARD_BTT_SKR_MINI_E3_V2_0
  #define ENDER_AIO_NO_DRIVER_UART_SPI_JUMPERS 1
  #define ENDSTOP_INTERRUPTS_FEATURE
  #define ENDER_AIO_SERIAL_PORT_2 2
  #define FAN_SOFT_PWM
  #define ENDER_AIO_SINGLE_BOARD_EXP_CONNECTION 1
  //#define ENDER_AIO_HAS_TEMP_SENSOR_SOC 1
  #define FIL_MOTION1_PIN   PC12   // PT-DET
#elif ENABLED(ENDER_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V1_2)
  #define MOTHERBOARD BOARD_BTT_SKR_MINI_E3_V1_2
  #define ENDER_AIO_NO_DRIVER_UART_SPI_JUMPERS 1
  #define ENDER_AIO_HAS_REAL_EEPROM 1
  #define ENDSTOP_INTERRUPTS_FEATURE
  #define ENDER_AIO_SERIAL_PORT_2 2
  #define FAN_SOFT_PWM
  #define ENDER_AIO_SINGLE_BOARD_EXP_CONNECTION 1
  //#define ENDER_AIO_HAS_TEMP_SENSOR_SOC 1
  #define FIL_MOTION1_PIN   PC13   // PS-ON
#elif ENABLED(ENDER_AIO_MOTHERBOARD_BTT_SKR_E3_TURBO)
  #define MOTHERBOARD BOARD_BTT_SKR_E3_TURBO
  #define ENDER_AIO_NO_DRIVER_UART_SPI_JUMPERS 1
  #define ENDER_AIO_HAS_FIVE_DRIVERS 1
  #define ENDER_AIO_SERIAL_PORT_2 0
  #define ENDER_AIO_HAS_TEMP_SENSOR_BOARD 1
  #define ENDER_AIO_SINGLE_BOARD_EXP_CONNECTION 1
  #define FIL_MOTION1_PIN  P1_25   // E1-STOP
#elif ENABLED(ENDER_AIO_MOTHERBOARD_BTT_SKR_V3_0)
  #define MOTHERBOARD BOARD_BTT_SKR_V3_0
  #define ENDER_AIO_HAS_REAL_EEPROM 1
  #define ENDER_AIO_HAS_FIVE_DRIVERS 1
  #define ENDER_AIO_HAS_CONTROLLER_FAN 1
  #define ENDER_AIO_CONTROLLER_FAN_PIN FAN2_PIN // PB5
  #define ENDSTOP_INTERRUPTS_FEATURE
  #define ENDER_AIO_NEEDS_ALT_DISPLAY_MINI_12864_NEOPIXEL_ORDER 1 // Incorrect RGB color workaround on SKR V3 (STM32H7 issue?)
  #define ENDER_AIO_SERIAL_PORT_2 1
  #define FAN_SOFT_PWM
  //#define ENDER_AIO_HAS_TEMP_SENSOR_SOC 1
  #define FIL_MOTION1_PIN    PA0   // E1DET
#elif ENABLED(ENDER_AIO_MOTHERBOARD_BTT_SKR_V3_0_EZ)
  #define MOTHERBOARD BOARD_BTT_SKR_V3_0_EZ
  #define ENDER_AIO_NO_DRIVER_UART_SPI_JUMPERS 1
  #define ENDER_AIO_HAS_REAL_EEPROM 1
  #define ENDER_AIO_HAS_FIVE_DRIVERS 1
  #define ENDER_AIO_HAS_CONTROLLER_FAN 1
  #define ENDER_AIO_CONTROLLER_FAN_PIN FAN2_PIN // PB5
  #define ENDSTOP_INTERRUPTS_FEATURE
  #define ENDER_AIO_NEEDS_ALT_DISPLAY_MINI_12864_NEOPIXEL_ORDER 1 // Incorrect RGB color workaround on SKR V3 (STM32H7 issue?)
  #define ENDER_AIO_SERIAL_PORT_2 1
  #define FAN_SOFT_PWM
  //#define ENDER_AIO_HAS_TEMP_SENSOR_SOC 1
  #define FIL_MOTION1_PIN    PA0   // E1DET
#endif

//
#if ANY(ENDER_AIO_BLTOUCH, ENDER_AIO_MICROPROBE)
  #define ENDER_AIO_HAS_PROBE 1
#endif

// PRINTCOUNTER
#define ENDER_AIO_PRINTCOUNTER_SAVE_INTERVAL TERN(ENDER_AIO_HAS_REAL_EEPROM, 60, 0)

#if ALL(ENDER_AIO_HAS_FIVE_DRIVERS, ENDER_AIO_DUAL_Z_KIT)
  #define Z2_DRIVER_TYPE Z_DRIVER_TYPE
  #define SD_FINISHED_RELEASECOMMAND "M84XYE"
  #define STARTUP_COMMANDS "M17 Z"

  #if ENABLED(ENDER_AIO_HAS_PROBE)
    #define Z_STEPPER_AUTO_ALIGN
  #endif
#else
  #define DISABLE_IDLE_Z
  #define SD_FINISHED_RELEASECOMMAND "M84"
#endif

//===========================================================================
//============================= Stepper Motors ==============================
//===========================================================================

// Extruder Motor Current
#define ENDER_AIO_E0_CURRENT TERN(ENDER_AIO_EXTRUDER_MOTOR_LDO_0_9_SLIM_POWER, 550, 650)

// Extruder Steps/mm
#if defined(ENDER_AIO_CUSTOM_E_STEPS)
  #define ENDER_AIO_E_STEPS_PER_UNIT ENDER_AIO_CUSTOM_E_STEPS
#elif ENABLED(ENDER_AIO_EXTRUDER_STOCK)
  #define ENDER_AIO_E_STEPS_PER_UNIT 93
#elif ENABLED(ENDER_AIO_EXTRUDER_WINSINN_DUAL_GEAR)
  #define ENDER_AIO_E_STEPS_PER_UNIT 139
#elif ANY(ENDER_AIO_EXTRUDER_TL_DDB_V2, ENDER_AIO_EXTRUDER_BONDTECH_BMG)
  #define ENDER_AIO_E_STEPS_PER_UNIT TERN(ENDER_AIO_EXTRUDER_MOTOR_LDO_0_9_SLIM_POWER, 830, 415)
#endif

// Default Extruder Inverting
#define ENDER_AIO_INVERT_E0_DIR TERN(ENDER_AIO_EXTRUDER_BONDTECH_BMG, false, true)

// User Extruder Inverting
#if ENABLED(ENDER_AIO_INVERT_E_DIR)
  #if ENDER_AIO_INVERT_E0_DIR == true
    #undef ENDER_AIO_INVERT_E0_DIR  // Prevent redefined warnings
    #define ENDER_AIO_INVERT_E0_DIR false
  #elif ENDER_AIO_INVERT_E0_DIR == false
    #undef ENDER_AIO_INVERT_E0_DIR  // Prevent redefined warnings
    #define ENDER_AIO_INVERT_E0_DIR true
  #endif
#endif

// Default X/Y/Z Inverting
#define ENDER_AIO_INVERT_X_DIR true
#define ENDER_AIO_INVERT_Y_DIR true
#define ENDER_AIO_INVERT_Z_DIR false

//===========================================================================
//=========================== Homing / StallGuard ===========================
//===========================================================================

// Homing speeds (mm/min)
#ifndef ENDER_AIO_HOMING_FEEDRATE_MM_M
  #define ENDER_AIO_HOMING_FEEDRATE_MM_M { (50*60), (50*60), (8*60) }
#endif

/**
 * Sensorless Homing
 *
 *  Sensitivity   TMC2209
 *    HIGHEST       255      (Too sensitive => False positive)
 *    LOWEST         0       (Too insensitive => No trigger)
 *
 * If needed, uncomment ENDER_AIO_*_STALL sensorless (StallGuard) settings below.
 * Settings can also be customized via LCD under Configuration -> Advanced Settings -> TMC Drivers -> Sensorless Homing
 */
//#define ENDER_AIO_SENSORLESS_HOMING
#if ENABLED(ENDER_AIO_SENSORLESS_HOMING)
//#define ENDER_AIO_X_STALL_SENSITIVITY  75
//#define ENDER_AIO_Y_STALL_SENSITIVITY  75

// If needed, uncomment ENDER_AIO_HOMING_FEEDRATE_MM_M to customize Homing speeds (mm/min)
//#define ENDER_AIO_HOMING_FEEDRATE_MM_M { (50*60), (50*60), (8*60) }
#endif

// StallGuard settings
#if ENABLED(ENDER_AIO_SENSORLESS_HOMING)
  #ifndef ENDER_AIO_X_STALL_SENSITIVITY
    #define ENDER_AIO_X_STALL_SENSITIVITY 75
  #endif
  #ifndef ENDER_AIO_Y_STALL_SENSITIVITY
    #define ENDER_AIO_Y_STALL_SENSITIVITY 75
  #endif
#endif

//===========================================================================
//============================== Input Shaping ==============================
//===========================================================================

#if ENABLED(ENDER_AIO_INPUT_SHAPING)
  #define INPUT_SHAPING_X
  #define INPUT_SHAPING_Y

  #ifdef ENDER_AIO_SHAPING_MIN_FREQ
    #define SHAPING_MIN_FREQ ENDER_AIO_SHAPING_MIN_FREQ
  #endif

  #ifdef ENDER_AIO_SHAPING_MAX_STEPRATE
    #define SHAPING_MAX_STEPRATE ENDER_AIO_SHAPING_MAX_STEPRATE
  #endif

#else
  #define S_CURVE_ACCELERATION // Not needed/recommended with Input Shaping
#endif

//===========================================================================
//====================== Hotend & Thermal/PID Settings ======================
//===========================================================================

// Phaetus Dragonfly Upgrade
#define ENDER_AIO_HEATER_0_MAXTEMP TERN(ENDER_AIO_PHAETUS_DRAGONFLY_290C, 305, 270)

// Motherboard Temperature Sensor
#define ENDER_AIO_TEMP_SENSOR_BOARD TERN(ENDER_AIO_HAS_TEMP_SENSOR_BOARD, 1, 0)

// SOC Temperature Sensor
#define ENDER_AIO_TEMP_SENSOR_SOC TERN(ENDER_AIO_HAS_TEMP_SENSOR_SOC, 100, 0)

// MPC/Hotend PID
#if ENABLED(ENDER_AIO_HOTEND_MPCTEMP)
  #define MPCTEMP

  #if DISABLED(ENDER_AIO_CUSTOM_HOTEND_MPCTEMP)
    #define ENDER_AIO_CUSTOM_MPC_HEATER_POWER              { 40.0f }
    #define ENDER_AIO_CUSTOM_MPC_BLOCK_HEAT_CAPACITY       { 13.33f }
    #define ENDER_AIO_CUSTOM_MPC_SENSOR_RESPONSIVENESS     { 0.1299f }
    #define ENDER_AIO_CUSTOM_MPC_AMBIENT_XFER_COEFF        { 0.1163f }
    #define ENDER_AIO_CUSTOM_MPC_AMBIENT_XFER_COEFF_FAN255 { 0.1245f }
    #define ENDER_AIO_CUSTOM_FILAMENT_HEAT_CAPACITY_PERMM  { 5.6e-3f }
  #endif
#else // Hotend PID
  #define PIDTEMP

  #if DISABLED(ENDER_AIO_CUSTOM_HOTEND_PID)
    #define ENDER_AIO_DEFAULT_Kp  21.73
    #define ENDER_AIO_DEFAULT_Ki   1.54
    #define ENDER_AIO_DEFAULT_Kd  76.55
  #endif
#endif

// Bed PID
#if DISABLED(ENDER_AIO_CUSTOM_BED_PID)
  #define ENDER_AIO_DEFAULT_bedKp   47.93
  #define ENDER_AIO_DEFAULT_bedKi    7.94
  #define ENDER_AIO_DEFAULT_bedKd  192.91
#endif

//===========================================================================
//================================== Fans ===================================
//===========================================================================

// Motherboard Cooling Fan
#if ENABLED(ENDER_AIO_HAS_CONTROLLER_FAN)
  #define USE_CONTROLLER_FAN
#endif

//===========================================================================
//============================= Filament Runout =============================
//===========================================================================

#if ENABLED(ENDER_AIO_BTT_SMART_FILAMENT_SENSOR_V2)
  #define FILAMENT_RUNOUT_DISTANCE_MM 3
  #define FILAMENT_MOTION_SENSOR
  #define FILAMENT_SWITCH_AND_MOTION
#endif

//===========================================================================
//========================== Probe / Bed Leveling ===========================
//===========================================================================

#if ENABLED(ENDER_AIO_HAS_PROBE)

  #define USE_PROBE_FOR_Z_HOMING
  //#define ASSISTED_TRAMMING
  #define BABYSTEP_ZPROBE_OFFSET
  #define BED_TRAMMING_USE_PROBE
  #define Z_SAFE_HOMING
  #define PROBE_OFFSET_WIZARD

  #if ENABLED(ENDER_AIO_AUTO_BED_LEVELING_BILINEAR)
    #define AUTO_BED_LEVELING_BILINEAR
    #define G29_RETRY_AND_RECOVER
  #elif ENABLED(ENDER_AIO_AUTO_BED_LEVELING_UBL)
    #define AUTO_BED_LEVELING_UBL
    #define MESH_EDIT_GFX_OVERLAY
  #endif

  // Probe pin
  #if ENABLED(ENDER_AIO_PROBE_CONNECTED_TO_Z_MIN_PORT)
    #define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
  #endif

  #if ENABLED(ENDER_AIO_BLTOUCH)
    #define BLTOUCH

    #define ENDER_AIO_Z_MIN_ENDSTOP_HIT_STATE HIGH
    #define ENDER_AIO_Z_MIN_PROBE_ENDSTOP_HIT_STATE HIGH

    #if ENABLED(ENDER_AIO_BLTOUCH_MOUNT_CREALITY_METAL)
      #define ENDER_AIO_NOZZLE_TO_PROBE_OFFSET { -40, -9, 0 }
    #elif ENABLED(ENDER_AIO_BLTOUCH_MOUNT_DUDE_IN_A_BOX)
      #define ENDER_AIO_NOZZLE_TO_PROBE_OFFSET { -43, -10, 0 }
    #elif defined(ENDER_AIO_BLTOUCH_MOUNT_CUSTOM)
      #define ENDER_AIO_NOZZLE_TO_PROBE_OFFSET ENDER_AIO_BLTOUCH_MOUNT_CUSTOM
    #endif

  #elif ENABLED(ENDER_AIO_MICROPROBE)
    #define PROBE_ENABLE_DISABLE

    #if ENABLED(ENDER_AIO_MICROPROBE_V1)
      #define BIQU_MICROPROBE_V1
      #define ENDER_AIO_Z_MIN_ENDSTOP_HIT_STATE HIGH
      #define ENDER_AIO_Z_MIN_PROBE_ENDSTOP_HIT_STATE HIGH
    #else // MicroProbe V2
      #define BIQU_MICROPROBE_V2
      #define ENDER_AIO_Z_MIN_ENDSTOP_HIT_STATE LOW
      #define ENDER_AIO_Z_MIN_PROBE_ENDSTOP_HIT_STATE LOW
    #endif

    #if ENABLED(ENDER_AIO_MICROPROBE_MOUNT_METAL)
      #define ENDER_AIO_NOZZLE_TO_PROBE_OFFSET { -41.825, -5.198, 0 }
    #elif defined(ENDER_AIO_MICROPROBE_MOUNT_CUSTOM)
      #define ENDER_AIO_NOZZLE_TO_PROBE_OFFSET ENDER_AIO_MICROPROBE_MOUNT_CUSTOM
    #endif
  #endif

#else // No Probe
  #define MESH_BED_LEVELING
  #define ENDER_AIO_Z_MIN_ENDSTOP_HIT_STATE HIGH
#endif // ENDER_AIO_HAS_PROBE

//===========================================================================
//========================= LCD / TFT / Controller ==========================
//===========================================================================

#if ENABLED(ENDER_AIO_DISPLAY_STOCK)
  #define ENDER_AIO_SINGLE_LCD_EXP_CONNECTION 1
#elif ENABLED(ENDER_AIO_DISPLAY_BTT_TFT35_E3_TFT)
  #define SERIAL_PORT_2 ENDER_AIO_SERIAL_PORT_2 // Only enable TFT serial port when needed
  #define EP_BABYSTEPPING                       // M293/M294 babystepping with EMERGENCY_PARSER support
#endif

#if ENABLED(ENDER_AIO_USES_BOTH_EXP_CABLES)
  #if ENABLED(ENDER_AIO_SINGLE_LCD_EXP_CONNECTION)
    #error "ENDER_AIO_USES_BOTH_EXP_CABLES is incompatible with enabled LCD."
  #elif ENABLED(ENDER_AIO_SINGLE_BOARD_EXP_CONNECTION)
    #error "ENDER_AIO_USES_BOTH_EXP_CABLES is incompatible with enabled motherboard."
  #endif
#endif

#if ENABLED(ENDER_AIO_SINGLE_LCD_EXP_CONNECTION) && DISABLED(ENDER_AIO_USES_BOTH_EXP_CABLES)
  #define CR10_STOCKDISPLAY
  #define ENDER_AIO_SDCARD_CONNECTION ONBOARD
#else
  #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #define ENDER_AIO_SDCARD_CONNECTION LCD
#endif

// Boot & Status Screens
#if ENABLED(ENDER_AIO_SHOW_CUSTOM_BOOTSCREEN)
  #define SHOW_CUSTOM_BOOTSCREEN
#endif

#if ENABLED(ENDER_AIO_STATUS_SCREEN_IMAGE)
  #define CUSTOM_STATUS_SCREEN_IMAGE
#endif

//===========================================================================
//============================== Custom Menus ===============================
//===========================================================================

// Sheet Profiles Menu
#if ALL(ENDER_AIO_SHEET_PROFILES_MENU, ENDER_AIO_HAS_PROBE)
  #define CUSTOM_MENU_CONFIG

  #if defined(ENDER_AIO_SHEET_1_DESC) && defined(ENDER_AIO_SHEET_1_OFFSET)
    #define CONFIG_MENU_ITEM_1_DESC ENDER_AIO_SHEET_1_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_1_OFFSET)
    #define CONFIG_MENU_ITEM_1_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_1_OFFSET)
    #define CONFIG_MENU_ITEM_1_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_2_DESC) && defined(ENDER_AIO_SHEET_2_OFFSET)
    #define CONFIG_MENU_ITEM_2_DESC ENDER_AIO_SHEET_2_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_2_OFFSET)
    #define CONFIG_MENU_ITEM_2_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_2_OFFSET)
    #define CONFIG_MENU_ITEM_2_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_3_DESC) && defined(ENDER_AIO_SHEET_3_OFFSET)
    #define CONFIG_MENU_ITEM_3_DESC ENDER_AIO_SHEET_3_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_3_OFFSET)
    #define CONFIG_MENU_ITEM_3_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_3_OFFSET)
    #define CONFIG_MENU_ITEM_3_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_4_DESC) && defined(ENDER_AIO_SHEET_4_OFFSET)
    #define CONFIG_MENU_ITEM_4_DESC ENDER_AIO_SHEET_4_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_4_OFFSET)
    #define CONFIG_MENU_ITEM_4_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_4_OFFSET)
    #define CONFIG_MENU_ITEM_4_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_5_DESC) && defined(ENDER_AIO_SHEET_5_OFFSET)
    #define CONFIG_MENU_ITEM_5_DESC ENDER_AIO_SHEET_5_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_5_OFFSET)
    #define CONFIG_MENU_ITEM_5_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_5_OFFSET)
    #define CONFIG_MENU_ITEM_5_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_6_DESC) && defined(ENDER_AIO_SHEET_6_OFFSET)
    #define CONFIG_MENU_ITEM_6_DESC ENDER_AIO_SHEET_6_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_6_OFFSET)
    #define CONFIG_MENU_ITEM_6_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_6_OFFSET)
    #define CONFIG_MENU_ITEM_6_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_7_DESC) && defined(ENDER_AIO_SHEET_7_OFFSET)
    #define CONFIG_MENU_ITEM_7_DESC ENDER_AIO_SHEET_7_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_7_OFFSET)
    #define CONFIG_MENU_ITEM_7_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_7_OFFSET)
    #define CONFIG_MENU_ITEM_7_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_8_DESC) && defined(ENDER_AIO_SHEET_8_OFFSET)
    #define CONFIG_MENU_ITEM_8_DESC ENDER_AIO_SHEET_8_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_8_OFFSET)
    #define CONFIG_MENU_ITEM_8_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_8_OFFSET)
    #define CONFIG_MENU_ITEM_8_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_9_DESC) && defined(ENDER_AIO_SHEET_9_OFFSET)
    #define CONFIG_MENU_ITEM_9_DESC ENDER_AIO_SHEET_9_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_9_OFFSET)
    #define CONFIG_MENU_ITEM_9_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_9_OFFSET)
    #define CONFIG_MENU_ITEM_9_CONFIRM
  #endif

  #if defined(ENDER_AIO_SHEET_10_DESC) && defined(ENDER_AIO_SHEET_10_OFFSET)
    #define CONFIG_MENU_ITEM_10_DESC ENDER_AIO_SHEET_10_DESC ": "  STRINGIFY(ENDER_AIO_SHEET_10_OFFSET)
    #define CONFIG_MENU_ITEM_10_GCODE "M851 Z" STRINGIFY(ENDER_AIO_SHEET_10_OFFSET)
    #define CONFIG_MENU_ITEM_10_CONFIRM
  #endif
#endif

/**
 * Calibration Menu
 */
//#define ENDER_AIO_CALIBRATION_MENU
#if ENABLED(ENDER_AIO_CALIBRATION_MENU)
  #define CUSTOM_MENU_MAIN

  #if ALL(ENDER_AIO_HAS_PROBE, ENDER_AIO_HAS_FIVE_DRIVERS, ENDER_AIO_DUAL_Z_KIT)
    #define MAIN_MENU_ITEM_1_DESC "Tram X Gantry"
    #define MAIN_MENU_ITEM_1_GCODE "M117 " MAIN_MENU_ITEM_1_DESC "\nG34\nM0 " MAIN_MENU_ITEM_1_DESC " Complete"
    #define MAIN_MENU_ITEM_1_CONFIRM           // Show a confirmation dialog before this action

    #define MAIN_MENU_ITEM_2_DESC "Update Firmware"
    #define MAIN_MENU_ITEM_2_GCODE "M997"
    #define MAIN_MENU_ITEM_2_CONFIRM
  #else
    #define MAIN_MENU_ITEM_1_DESC "Update Firmware"
    #define MAIN_MENU_ITEM_1_GCODE "M997"
    #define MAIN_MENU_ITEM_1_CONFIRM
  #endif
#endif
