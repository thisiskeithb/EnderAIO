#pragma once

/**
 * Ender_AIO_Configuration.h
 *
 * This file includes basic settings like:
 *
 * - Getting Started with Ender AIO Firmware
 * - Custom Printer Name
 * - Motherboard
 * - Dual-Z Upgrade
 * - Extruder
 * - Filament Runout
 * - Probes
 * - Bed Leveling
 * - Hotend & Thermal / PID Settings
 * - LCD / TFT / Controller
 * - Input Shaping
 * - Sheet Profile Menu
 */
#define CONFIGURATION_H_VERSION 02010300
#define ENDER_AIO_VERSION 20241019

//===========================================================================
//================= Getting Started with Ender AIO Firmware =================
//===========================================================================

/**
 * If you find this project helpful, please consider donating:
 *
 * Keith Bennett, Marlin tester/config builder:  https://github.com/sponsors/thisiskeithb
 *                                               https://ko-fi.com/thisiskeithb
 * Thank you and Happy Printing!
 */

//===========================================================================
//=========================== Custom Printer Name ===========================
//===========================================================================

// Uncomment to set a custom printer name.
//#define ENDER_AIO_CUSTOM_PRINTER_NAME "Ender-3"

//===========================================================================
//=============================== Motherboard ===============================
//===========================================================================

/**
 * Motherboard
 *
 *  - SKR Mini E3 V3.0    (STM32G0B0RE/STM32G0B1RE)
 *  - SKR Mini E3 V3.0.1  (STM32F401RC)
 *  - SKR Mini E3 V2.0    (STM32F103RC/STM32F103RE)
 *  - SKR Mini E3 V1.2    (STM32F103RC)
 *  - SKR E3 Turbo        (LPC1769)
 *  - SKR V3.0            (STM32H743VI/STM32H723VG)
 *  - SKR V3.0 EZ         (STM32H743VI/STM32H723VG)
 *
 *   More board support coming soon!
 */
#define ENDER_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3_0
//#define ENDER_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V3_0_1
//#define ENDER_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V2_0
//#define ENDER_AIO_MOTHERBOARD_BTT_SKR_MINI_E3_V1_2
//#define ENDER_AIO_MOTHERBOARD_BTT_SKR_E3_TURBO
//#define ENDER_AIO_MOTHERBOARD_BTT_SKR_V3_0
//#define ENDER_AIO_MOTHERBOARD_BTT_SKR_V3_0_EZ

//===========================================================================
//============================= Dual-Z Upgrade ==============================
//===========================================================================

/**
 * Creality Ender-3 Dual Z Kit https://www.amazon.com/dp/B09N8QQDSP
 *
 * Note: If your motherboard supports five drivers, all five driver slots must be populated.
 */
//#define ENDER_AIO_DUAL_Z_KIT

//===========================================================================
//================================ Extruder =================================
//===========================================================================

/**
 * Extruder
 *
 *  - Stock Ender-3 Extruder         https://www.amazon.com/dp/B07WHYBVJ5
 *  - WINSINN Dual Gear Extruder     https://www.amazon.com/dp/B08D9CNHVN
 *  - Genuine Bondtech BMG Extruder  https://www.bondtech.se/product/bmg-extruder/
 *  - Trianglelab DDB 2.0 Extruder   https://www.amazon.com/dp/B08KP189KN
 */
#define ENDER_AIO_EXTRUDER_STOCK
//#define ENDER_AIO_EXTRUDER_WINSINN_DUAL_GEAR
//#define ENDER_AIO_EXTRUDER_BONDTECH_BMG
//#define ENDER_AIO_EXTRUDER_TL_DDB_V2

// BMG/DDB with LDO 0.9° Slim Power motor on E
#if ANY(ENDER_AIO_EXTRUDER_BONDTECH_BMG, ENDER_AIO_EXTRUDER_TL_DDB_V2)
  //#define ENDER_AIO_EXTRUDER_MOTOR_LDO_0_9_SLIM_POWER
#endif

// Custom E-Steps
//#define ENDER_AIO_CUSTOM_E_STEPS 93

// Invert the E stepper direction. Enable if extruder goes the wrong way.
//#define ENDER_AIO_INVERT_E_DIR

//===========================================================================
//============================= Filament Runout =============================
//===========================================================================

/**
 * Filament Runout
 *
 * Basic NC-style filament runout support is available (but disabled) by default.
 *
 * Uncomment for BigTreeTech Smart Filament Sensor V2: https://github.com/bigtreetech/smart-filament-detection-module/tree/master/V2.0
 */
//#define ENDER_AIO_BTT_SMART_FILAMENT_SENSOR_V2

//===========================================================================
//================================= Probes ==================================
//===========================================================================

/**
 *  Probe Options
 *
 * To simplify homing, Z endstop must be removed and the probe will be used for Z homing.
 */

/**
 * BLTouch
 *
 * If your BLTouch did not come with a metal bracket, dude-in-a-box's "stiffer, with cutouts" BLTouch mount is recommended: https://www.thingiverse.com/thing:4390903
 *
 * Note: Offsets can also be customized via LCD under Configuration > Advanced Settings > Probe Offsets.
 */
//#define ENDER_AIO_BLTOUCH
#if ENABLED(ENDER_AIO_BLTOUCH)
  #define ENDER_AIO_BLTOUCH_MOUNT_CREALITY_METAL              // Metal bracket from Creality. Uses { -40, -9, 0 } probe offsets
  //#define ENDER_AIO_BLTOUCH_MOUNT_DUDE_IN_A_BOX             // Uses { -43, -10, 0 } probe offsets
  //#define ENDER_AIO_BLTOUCH_MOUNT_CUSTOM { -40, -9, -0.0 }  // Custom probe offsets { X, Y, Z }. Z should be a negative value
#endif

/**
 * BIQU MicroProbe
 *
 * Note: Offsets can also be customized via LCD under Configuration > Advanced Settings > Probe Offsets.
 */
//#define ENDER_AIO_MICROPROBE
#if ENABLED(ENDER_AIO_MICROPROBE)
  //#define ENDER_AIO_MICROPROBE_V1                                      // V2 is assumed by default. Uncomment if using V1

  // Bracket Options
  #define ENDER_AIO_MICROPROBE_MOUNT_METAL                               // Metal Bracket from BIQU. Uses { -41.825, -5.198, 0 } probe offsets
  //#define ENDER_AIO_MICROPROBE_MOUNT_CUSTOM { -41.825, -5.198, -0.0 }  // Custom probe offsets { X, Y, Z }. Z should be a negative value
#endif

/**
 * Probe Connection
 *
 * Connect probe to ZPROBE (5-pin) or SERVO (3-pin) + ZPROBE (2-pin) by default.
 * Uncomment if connecting probe to SERVO + Z MIN/Z STOP instead.
 */
//#define ENDER_AIO_PROBE_CONNECTED_TO_Z_MIN_PORT

//===========================================================================
//============================== Bed Leveling ===============================
//===========================================================================

/**
 * Bed Leveling Type
 *
 *   - Mesh Bed Leveling (default unless a probe option is enabled above)
 *   - Bilinear
 *   - Unified Bed Leveling
 */
#if ANY(ENDER_AIO_BLTOUCH, ENDER_AIO_MICROPROBE)
  #define ENDER_AIO_AUTO_BED_LEVELING_BILINEAR
  //#define ENDER_AIO_AUTO_BED_LEVELING_UBL
#endif

//===========================================================================
//===================== Hotend & Thermal / PID Settings =====================
//===========================================================================

/**
 * Phaetus Dragonfly Hotend
 *
 * HT-NTC100K cartridge thermistor is recommended: https://www.amazon.com/gp/product/B09WDR1M5Q
 */
//#define ENDER_AIO_PHAETUS_DRAGONFLY_290C // 290°C maximum temperature (305°C - 15°C overshoot)

/**
 * Custom PID Settings
 *
 * Stock Ender-3 hotend and bed PID settings are enabled by default.
 *
 * If needed, uncomment ENDER_AIO_CUSTOM_HOTEND_PID and/or ENDER_AIO_CUSTOM_BED_PID to customize PID settings.
 */
//#define ENDER_AIO_CUSTOM_HOTEND_PID
#if ENABLED(ENDER_AIO_CUSTOM_HOTEND_PID)
  #define ENDER_AIO_DEFAULT_Kp  21.73
  #define ENDER_AIO_DEFAULT_Ki   1.54
  #define ENDER_AIO_DEFAULT_Kd  76.55
  // Find your own by running "M303 E0 C8 S210" via serial to PID autotune the hotend at 210°C for 8 cycles.
#endif

//#define ENDER_AIO_CUSTOM_BED_PID
#if ENABLED(ENDER_AIO_CUSTOM_BED_PID)
  #define ENDER_AIO_DEFAULT_bedKp   47.93
  #define ENDER_AIO_DEFAULT_bedKi    7.94
  #define ENDER_AIO_DEFAULT_bedKd  192.91
  // Find your own by running "M303 E-1 C8 S65" via serial to PID autotune the bed at 65°C for 8 cycles.
#endif

/**
 * Model Predictive Control for Hotend
 *
 * Stock Ender-3 hotend with 40W heater cartridge is configured by default.
 *
 * Note: Replaces PID for the hotend
 */
//#define ENDER_AIO_HOTEND_MPCTEMP

// If needed, uncomment ENDER_AIO_CUSTOM_HOTEND_MPCTEMP to customize MPCTEMP settings.
// Use M306 T to autotune the model. See https://marlinfw.org/docs/gcode/M306.html for full details.
//#define ENDER_AIO_CUSTOM_HOTEND_MPCTEMP
#if ALL(ENDER_AIO_HOTEND_MPCTEMP, ENDER_AIO_CUSTOM_HOTEND_MPCTEMP)
  #define ENDER_AIO_CUSTOM_MPC_HEATER_POWER { 40.0f }                 // (W) Heat cartridge power.
  #define ENDER_AIO_CUSTOM_MPC_BLOCK_HEAT_CAPACITY { 10.46f }         // (J/K) Heat block heat capacity. Use M306 T to autotune the model.
  #define ENDER_AIO_CUSTOM_MPC_SENSOR_RESPONSIVENESS { 0.7801f }      // (K/s per ∆K) Rate of change of sensor temperature from heat block.
  #define ENDER_AIO_CUSTOM_MPC_AMBIENT_XFER_COEFF { 0.0564f }         // (W/K) Heat transfer coefficients from heat block to room air with fan off.
  #define ENDER_AIO_CUSTOM_MPC_AMBIENT_XFER_COEFF_FAN255 { 0.1264f }  // (W/K) Heat transfer coefficients from heat block to room air with fan on full.

  // Filament Heat Capacity (joules/kelvin/mm)
  // Set with M306 H<value> in your filament or start G-code.
  #define ENDER_AIO_CUSTOM_FILAMENT_HEAT_CAPACITY_PERMM { 5.6e-3f }  //   PLA = 5.6e-3f (0.0056) J/K/mm
                                                                     //  PETG = 3.6e-3f (0.0036) J/K/mm
                                                                     //   ABS = 5.15e-3f (0.00515) J/K/mm
                                                                     // Nylon = 5.22e-3f (0.00522) J/K/mm
#endif

//===========================================================================
//========================= LCD / TFT / Controller ==========================
//===========================================================================

/**
 * LCD / TFT / Controller
 *
 *   - Stock Creality Ender-3 Screen
 *   - BigTreeTech TFT35 E3 Dual Mode TFT
 */
#define ENDER_AIO_DISPLAY_STOCK
//#define ENDER_AIO_DISPLAY_BTT_TFT35_E3_TFT
#if ENABLED(ENDER_AIO_DISPLAY_BTT_TFT35_E3_TFT)
  #define ENDER_AIO_USES_BOTH_EXP_CABLES  // Disable if only using one 10-pin EXP cable. SD card connection will be set to the motherboard instead of TFT.
#endif

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *   en, an, bg, ca, cz, da, de, el, el_CY, es, eu, fi, fr, gl, hr, hu, it,
 *   jp_kana, ko_KR, nl, pl, pt, pt_br, ro, ru, sk, sv, tr, uk, vi, zh_CN, zh_TW
 *
 * :{ 'en':'English', 'an':'Aragonese', 'bg':'Bulgarian', 'ca':'Catalan', 'cz':'Czech', 'da':'Danish', 'de':'German', 'el':'Greek (Greece)', 'el_CY':'Greek (Cyprus)', 'es':'Spanish', 'eu':'Basque-Euskera', 'fi':'Finnish', 'fr':'French', 'gl':'Galician', 'hr':'Croatian', 'hu':'Hungarian', 'it':'Italian', 'jp_kana':'Japanese', 'ko_KR':'Korean (South Korea)', 'nl':'Dutch', 'pl':'Polish', 'pt':'Portuguese', 'pt_br':'Portuguese (Brazilian)', 'ro':'Romanian', 'ru':'Russian', 'sk':'Slovak', 'sv':'Swedish', 'tr':'Turkish', 'uk':'Ukrainian', 'vi':'Vietnamese', 'zh_CN':'Chinese (Simplified)', 'zh_TW':'Chinese (Traditional)' }
 */
#define ENDER_AIO_LCD_LANGUAGE en

/**
 * Boot & Status Screens
 *
 * Disabled by default to save flash space.
 */
//#define ENDER_AIO_SHOW_CUSTOM_BOOTSCREEN  // Show the Ender dragon bootscreen on startup.
//#define ENDER_AIO_STATUS_SCREEN_IMAGE     // Show the "Ender-3" text in upper-left corner of status screen.

//===========================================================================
//============================== Input Shaping ==============================
//===========================================================================

/**
 * Input Shaping -- EXPERIMENTAL
 *
 * Zero Vibration (ZV) Input Shaping for X and/or Y movements.
 *
 * See https://github.com/MarlinFirmware/Marlin/pull/24797 for configuration & full details.
 *
 * Tune with M593 D<factor> F<frequency>:
 *
 *  D<factor>    Set the zeta/damping factor. If axes (X, Y, etc.) are not specified, set for all axes.
 *  F<frequency> Set the frequency. If axes (X, Y, etc.) are not specified, set for all axes.
 *  X<1>         Set the given parameters only for the X axis.
 *  Y<1>         Set the given parameters only for the Y axis.
 */
//#define ENDER_AIO_INPUT_SHAPING
#if ENABLED(ENDER_AIO_INPUT_SHAPING)
  #define ENDER_AIO_SHAPING_FREQ_X            40     // (Hz) The default dominant resonant frequency on the X axis.
  #define ENDER_AIO_SHAPING_FREQ_Y            40     // (Hz) The default dominant resonant frequency on the Y axis.
  #define ENDER_AIO_SHAPING_ZETA_X             0.15  // Damping ratio of the X axis (range: 0.0 = no damping to 1.0 = critical damping).
  #define ENDER_AIO_SHAPING_ZETA_Y             0.15  // Damping ratio of the Y axis (range: 0.0 = no damping to 1.0 = critical damping).
  //#define ENDER_AIO_SHAPING_MIN_FREQ        20.0   // By default the minimum of the shaping frequencies. Override to affect SRAM usage.
  //#define ENDER_AIO_SHAPING_MAX_STEPRATE 10000     // By default the maximum total step rate of the shaped axes. Override to affect SRAM usage.
#endif

//===========================================================================
//=========================== Sheet Profile Menu ============================
//===========================================================================

/**
 * Sheet Profiles Menu
 *
 * Automatically adjust Z Probe Offset with M851 based on selected Sheet Profile.
 * Up to 10 sheet profiles are supported without changes.
 */
//#define ENDER_AIO_SHEET_PROFILES_MENU
#if ENABLED(ENDER_AIO_SHEET_PROFILES_MENU)
  #define ENDER_AIO_SHEET_1_DESC      "Smooth"    // Short description of Sheet
  #define ENDER_AIO_SHEET_1_OFFSET      -0.000    // Sheet offset. This should be a negative value.

  #define ENDER_AIO_SHEET_2_DESC    "Textured"
  #define ENDER_AIO_SHEET_2_OFFSET      -0.000

  //#define ENDER_AIO_SHEET_3_DESC     "Satin"
  //#define ENDER_AIO_SHEET_3_OFFSET    -0.000
#endif
