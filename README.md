<p align="center"><img src="buildroot/share/pixmaps/logo/marlin-outrun-nf-500.png" height="250" alt="MarlinFirmware's logo" /></p>

<h1 align="center">Marlin 3D Printer Firmware</h1>

<p align="center">
    <a href="/LICENSE"><img alt="GPL-V3.0 License" src="https://img.shields.io/github/license/marlinfirmware/marlin.svg"></a>
    <a href="https://github.com/MarlinFirmware/Marlin/graphs/contributors"><img alt="Contributors" src="https://img.shields.io/github/contributors/marlinfirmware/marlin.svg"></a>
    <a href="https://github.com/MarlinFirmware/Marlin/releases"><img alt="Last Release Date" src="https://img.shields.io/github/release-date/MarlinFirmware/Marlin"></a>
    <a href="https://github.com/MarlinFirmware/Marlin/actions"><img alt="CI Status" src="https://github.com/MarlinFirmware/Marlin/actions/workflows/test-builds.yml/badge.svg"></a>
    <a href="https://github.com/sponsors/thinkyhead"><img alt="GitHub Sponsors" src="https://img.shields.io/github/sponsors/thinkyhead?color=db61a2"></a>
    <br />
    <a href="https://twitter.com/MarlinFirmware"><img alt="Follow MarlinFirmware on Twitter" src="https://img.shields.io/twitter/follow/MarlinFirmware?style=social&logo=twitter"></a>
</p>

Additional documentation can be found at the [Marlin Home Page](https://marlinfw.org/).
Please test this firmware and let us know if it misbehaves in any way. Volunteers are standing by!

## Introduction

The goal is to develop a custom Digital Light Processing (DLP) printer that cures resin with a projected image. The base Marlin Firmware code from their GitHub repository was modified to meet our specifications. The finished printer will print composite materials made from resins and fiberglass sheets. 

## Changes Made to Base Marlin Code

In order to have a fucntioning DLP printer, the following modifcations were made to the base Marlin Firmware Code from most recent to oldest:

   ### Configuration.h:

   ##### 8/28/2022
   Line# 
   
    113  #define BAUDRATE 115200
    1137 #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 400, 800, 88.88, 88.88 }
    1144 #define DEFAULT_MAX_FEEDRATE          { 10, 10, 10 , 3600, 3600 }
    1157 #define DEFAULT_MAX_ACCELERATION      { 3000, 100, 100, 400, 400 }
    1673 #define I_MIN_POS -3600000
    1675 #define J_MIN_POS -3600000
    1745 #define FIL_RUNOUT_STATE     HIGH        // Pin state indicating that filament is NOT present.
    2055 #define HOMING_FEEDRATE_MM_M { (50*60), (5*60), (5*60), (60*60), (60*60) }
    2772 //#define CR10_STOCKDISPLAY

   ##### 8/10/2022

    165  #define I_DRIVER_TYPE  TMC2209
    166  #define J_DRIVER_TYPE  TMC2209
    171  //#define E0_DRIVER_TYPE TMC2209
    172  //#define E1_DRIVER_TYPE TMC2209
    226  #define EXTRUDERS 0
    1004 #define USE_IMIN_PLUG
    1005 #define USE_JMIN_PLUG
    1137 #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 400, 800, 400, 400 }
    1144 #define DEFAULT_MAX_FEEDRATE          { 10, 10, 10 , 10, 10, }
    1157 #define DEFAULT_MAX_ACCELERATION      { 3000, 100, 100, 100, 100 }
    1452 #define NOZZLE_TO_PROBE_OFFSET { 0, 0, 0, 0, 0 }
    1579 #define I_ENABLE_ON 0
    1580 #define J_ENABLE_ON 0
    1591 #define DISABLE_I false
    1592 #define DISABLE_J false
    1612 #define INVERT_I_DIR false
    1613 #define INVERT_J_DIR false
    1653 #define I_HOME_DIR -1
    1654 #define J_HOME_DIR -1
    1673 #define I_MIN_POS 0
    1674 #define I_MAX_POS 3600000
    1675 #define J_MIN_POS 0
    1676 #define J_MAX_POS 3600000
    2049 //#define Z_SAFE_HOMING_X_POINT 0  // X point for Z homing
    2055 #define HOMING_FEEDRATE_MM_M { (50*60), (5*60), (5*60), (5*60), (5*60) }
    2772 #define CR10_STOCKDISPLAY


   ##### 7/25/2022

    531  #define TEMP_SENSOR_0 998
    539  #define TEMP_SENSOR_BED 998
    826  //#define THERMAL_PROTECTION_HOTENDS // Enable thermal protection for all extruders
    827  //#define THERMAL_PROTECTION_BED     // Enable thermal protection for the heated bed
    828  //#define THERMAL_PROTECTION_CHAMBER // Enable thermal protection for the heated chamber
    829  //#define THERMAL_PROTECTION_COOLER  // Enable thermal protection for the laser cooling
    1746 #define FIL_RUNOUT_STATE     LOW        // Pin state indicating that filament is NOT present.
    1788 #define FILAMENT_RUNOUT_SCRIPT "M600"
    2189 #define NOZZLE_PARK_FEATURE
    2193 #define NOZZLE_PARK_POINT { X_MIN_POS, 0, 25 }


  ##### 7/20/2022
   
    114  #define BAUDRATE 250000
    122  #define SERIAL_PORT_2 -1
    1003 //#define USE_YMIN_PLUG
    1012 #define USE_YMAX_PLUG
    1788 #define FILAMENT_RUNOUT_SCRIPT "M226 PC2 S1"


  ##### 7/19/2022
   
    63   #define STRING_CONFIG_H_AUTHOR "(Rowan University, Elias Timmons)" // Who made the changes.
    90   #define MOTHERBOARD BOARD_BTT_SKR_V2_0_REV_B
    101  #define SERIAL_PORT 1
    114  #define BAUDRATE 115200
    158  #define X_DRIVER_TYPE  TMC2209
    159  #define Y_DRIVER_TYPE  TMC2209
    160  #define Z_DRIVER_TYPE  TMC2209
    172  #define E0_DRIVER_TYPE TMC2209
    173  #define E1_DRIVER_TYPE TMC2209
    1138 #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 400, 800, 96 }
    1145 #define DEFAULT_MAX_FEEDRATE          { 300, 10, 10, 25 }
    1158 #define DEFAULT_MAX_ACCELERATION      { 3000, 100, 100, 10000 }
    1173 #define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration for printing moves
    1174 #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
    1175 #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves
    1247 #define USE_PROBE_FOR_Z_HOMING
    1301 #define BLTOUCH
    1453 #define NOZZLE_TO_PROBE_OFFSET { 0, 0, 0 }
    1499 #define PROBE_ENABLE_DISABLE
    1611 #define INVERT_Y_DIR false
    1644 #define Z_HOMING_HEIGHT  10      // (mm) Minimal Z height before homing (G28) for Z clearance above the bed, clamps, ...
    1647 #define Z_AFTER_HOMING  0     // (mm) Height to move to after homing Z
    1652 #define Y_HOME_DIR 1
    1664 #define X_BED_SIZE 1000
    1665 #define Y_BED_SIZE 50
    1669 #define Y_MIN_POS -45
    1670 #define Z_MIN_POS -5
    1672 +#define Y_MAX_POS 5
    1673 #define Z_MAX_POS 140
    1741 #define FILAMENT_RUNOUT_SENSOR
    1746 #define FIL_RUNOUT_STATE     HIGH        // Pin state indicating that filament is NOT present.
    1747 //#define FIL_RUNOUT_PULLUP               // Use internal pullup for filament runout pins.
    1748 #define FIL_RUNOUT_PULLDOWN           // Use internal pulldown for filament runout pins.
    1842 #define AUTO_BED_LEVELING_LINEAR
    1869 #define DEBUG_LEVELING_FEATURE
    2031 #define MANUAL_Y_HOME_POS 0
    2032 #define MANUAL_Z_HOME_POS 0
    2047 #define Z_SAFE_HOMING
    2050 #define Z_SAFE_HOMING_X_POINT 0  // X point for Z homing
    2051 #define Z_SAFE_HOMING_Y_POINT 0  // Y point for Z homing
    2055 #define HOMING_FEEDRATE_MM_M { (50*60), (5*60), (5*60) }
    2132 #define EEPROM_SETTINGS     // Persistent storage with M500 and M501
    2137 #define EEPROM_AUTO_INIT  // Init EEPROM automatically on any errors.
    2138  #define EEPROM_INIT_NOW   // Init EEPROM on first boot after a new build.
    2405 #define SDSUPPORT


   ### Configuration_adv.h: 
   
   ##### 8/28/2022

    856  #define QUICK_HOME_AB

   ##### 8/15/2022

    1561 //#define LONG_FILENAME_HOST_SUPPORT    // Get the long filename of a file/folder with 'M33 <dosname>' and list long filenames with 'M20 L'
    1577 //#define AUTO_REPORT_SD_STATUS         // Auto-report media status with 'M27 S<seconds>'
    1660 //#define SDCARD_CONNECTION ONBOARD
    2402 //#define SERIAL_FLOAT_PRECISION 4
    2600 //#define FILAMENT_LOAD_UNLOAD_GCODES           // Add M701/M702 Load/Unload G-codes, plus Load/Unload in the LCD Prepare menu. 
    3629 //#define AUTO_REPORT_TEMPERATURES
    3637 //#define AUTO_REPORT_POSITION
    3644 //#define M115_GEOMETRY_REPORT        
    3692 //#define M114_DETAIL         // Use 'M114` for details to check planner calculations    
    3696 //#define REPORT_FAN_CHANGE   // Report the new fan speed when changed by M106 (and others)   
    3859 //#define HOST_ACTION_COMMANDS    
    3862 //#define HOST_PROMPT_SUPPORT           // Initiate host prompts to get user feedback        
    3864 //#define HOST_STATUS_NOTIFICATIONS   // Send some status messages to the host as notifications    
    
    
   ##### 8/10/2022
    
    851  #define HOMING_BUMP_MM      { 5, 5, 2, 5, 5 }       // (linear=mm, rotational=°) Backoff from endstops after first bump
    852  #define HOMING_BUMP_DIVISOR { 2, 2, 4, 2, 2 }       // Re-Bump Speed Divisor (Divides the Homing Feedrate)        
    1031 #define AXIS_RELATIVE_MODES { false, false, false, false, false }    
    1281 #define MANUAL_FEEDRATE { 50*60, 50*60, 4*60, 2*60, 2*60 } // (mm/min) Feedrates for manual moves along X, Y, Z, E from panel    
    1561 #define LONG_FILENAME_HOST_SUPPORT    // Get the long filename of a file/folder with 'M33 <dosname>' and list long filenames with 'M20 L'    
    1577 #define AUTO_REPORT_SD_STATUS         // Auto-report media status with 'M27 S<seconds>'    
    1660 #define SDCARD_CONNECTION ONBOARD   
    2402 #define SERIAL_FLOAT_PRECISION 4
    2600 #define FILAMENT_LOAD_UNLOAD_GCODES           // Add M701/M702 Load/Unload G-codes, plus Load/Unload in the LCD Prepare menu.
    3637 #define AUTO_REPORT_POSITION        
    3644 #define M115_GEOMETRY_REPORT    
    3692 #define M114_DETAIL         // Use 'M114` for details to check planner calculations        
    3696 #define REPORT_FAN_CHANGE   // Report the new fan speed when changed by M106 (and others)      
    3859 #define HOST_ACTION_COMMANDS    
    3862 #define HOST_PROMPT_SUPPORT           // Initiate host prompts to get user feedback        
    3864 #define HOST_STATUS_NOTIFICATIONS   // Send some status messages to the host as notifications 
    

   ##### 7/25/2022

    2328 #define TX_BUFFER_SIZE 128   
    2336 #if RX_BUFFER_SIZE >= 1024    
    2366 #define EMERGENCY_PARSER  
    2577 #define ADVANCED_PAUSE_FEATURE    
    
    
   ##### 7/20/2022
    
    1242 //#define PWM_MOTOR_CURRENT { 800, 800, 800 }          // Values in milliamps
    3133 #define MONITOR_DRIVER_STATUS
    3242 #define TMC_DEBUG


   ##### 7/19/2022
   
    907  #define BLTOUCH_SET_5V_MODE
    1989 #define BABYSTEPPING
    2012 #define BABYSTEP_ZPROBE_OFFSET          // Combine M851 Z and Babystepping
    4054 #define NANODLP_Z_SYNC
    4215 #define DIRECT_PIN_CONTROL
    4220 #define PINS_DEBUGGING

    
   ### pins_BTT_SKR_V2_0_common.h:  
    
   ##### 8/28/2022
    
    68   #define I_DIAG_PIN                          PC2   // E0DET  
    69   #define J_DIAG_PIN                          PC2   // E0DET      
    151  #define FIL_RUNOUT_PIN                      PC15   // PWRDET    
    152  //#define FIL_RUNOUT2_PIN                     PA0   // E1DET    
    165  //#define POWER_LOSS_PIN                    PC15  // PWRDET
    
    
   ##### 8/15/2022  
    
    68   #define I_DIAG_PIN                         PC2   // E0DET  
    69   #define J_DIAG_PIN                         PA0   // E1DET   
    71   #define I_STOP_PIN                  I_DIAG_PIN    
    72   #define J_STOP_PIN                  J_DIAG_PIN        
    197  #define I_STEP_PIN                          PD15    
    198  #define I_DIR_PIN                           PD14    
    199  #define I_ENABLE_PIN                        PC7    
    200  #ifndef I_CS_PIN    
    201  #define I_CS_PIN                          PC6      
    204  #define J_STEP_PIN                          PD11    
    205  #define J_DIR_PIN                           PD10    
    206  #define J_ENABLE_PIN                        PD13    
    207  #ifndef J_CS_PIN    
    208  #define J_CS_PIN                          PD12        
    310  #define I_SERIAL_TX_PIN                  PC6    
    311  #define I_SERIAL_RX_PIN      I_SERIAL_TX_PIN       
    313  #define J_SERIAL_TX_PIN                  PD12 
    314  #define J_SERIAL_RX_PIN      J_SERIAL_TX_PIN    
    
    
   ##### 8/10/2022  

    68   #define I_DIAG_PIN                         PC2   // E0DET
    69   #define J_DIAG_PIN                         PA0   // E1DET
    71   #define I_STOP_PIN                  I_DIAG_PIN
    72   #define J_STOP_PIN                  J_DIAG_PIN

Delete Lines 195-205:

    195  #ifndef E0_STEP_PIN
    196  #define E0_STEP_PIN                       PD15
    197  #endif
    198  #ifndef E0_DIR_PIN
    199   #define E0_DIR_PIN                        PD14
    200  #endif
    201 #ifndef E0_ENABLE_PIN
    202  #define E0_ENABLE_PIN                     PC7
    203  #endif
    204  #ifndef E0_CS_PIN
    205   #define E0_CS_PIN                         PC6

Replace lines 195-205 with:

    197  #define I_STEP_PIN                          PD15
    198  #define I_DIR_PIN                           PD14
    199  #define I_ENABLE_PIN                        PC7
    200  #ifndef I_CS_PIN
    201  #define I_CS_PIN                            PC6
    
Delete Lines 208-218:

    208 #ifndef E1_STEP_PIN
    209  #define E1_STEP_PIN                       PD11
    210 #endif
    211 #ifndef E1_DIR_PIN
    212 #define E1_DIR_PIN                        PD10
    213 #endif
    214 #ifndef E1_ENABLE_PIN
    215 #define E1_ENABLE_PIN                     PD13
    216 #endif
    217 #ifndef E1_CS_PIN
    218 #define E1_CS_PIN                         PD12
    
Replace Lines 208-218 with:
    
    204 #define J_STEP_PIN                          PD11
    205 #define J_DIR_PIN                           PD10
    206 #define J_ENABLE_PIN                        PD13
    207 #ifndef J_CS_PIN
    208 #define J_CS_PIN                            PD12   
    
Further Changes:
    
    310  #define I_SERIAL_TX_PIN                  PC6
    311  #define I_SERIAL_RX_PIN      I_SERIAL_TX_PIN
    313  #define J_SERIAL_TX_PIN                  PD12
    314  #define J_SERIAL_RX_PIN      J_SERIAL_TX_PIN   

### macros.h
    
##### 8/28/2022  
    
    134  #define HYPOT2AB(i,j) (sq(i)+sq(j))
    410  #define HYPOTAB(i,j) SQRT(HYPOT2AB(i,j))  
    
    
    
### G28.cpp
   
##### 8/28/2022
    
    if ENABLED(QUICK_HOME_AB)

     static void quick_home_ab() {

    // Pretend the current position is 0,0
    current_position.set(0.0, 0.0, 0.0, 0.0, 0.0);
    sync_plan_position();

    const int i_axis_home_dir = I_HOME_DIR;

    // Use a higher diagonal feedrate so axes move at homing speed
    const float minfr = _MIN(homing_feedrate(I_AXIS), homing_feedrate(J_AXIS)),
                fr_mm_s = HYPOTAB(minfr, minfr);

    // Removed Sensorless Homing Section

    do_blocking_move_to_xy(1.5 * max_length(I_AXIS) * i_axis_home_dir, 1.5 * max_length(J_AXIS) * J_HOME_DIR, fr_mm_s);

    endstops.validate_homing_move();

    current_position.set(0.0, 0.0, 0.0, 0.0, 0.0);

    #if ENABLED(SENSORLESS_HOMING) && DISABLED(ENDSTOPS_ALWAYS_ON_DEFAULT)
      TERN_(X_SENSORLESS, tmc_disable_stallguard(stepperX, stealth_states.x));
      TERN_(X2_SENSORLESS, tmc_disable_stallguard(stepperX2, stealth_states.x2));
      TERN_(Y_SENSORLESS, tmc_disable_stallguard(stepperY, stealth_states.y));
      TERN_(Y2_SENSORLESS, tmc_disable_stallguard(stepperY2, stealth_states.y2));
    #endif
    }

    #endif // QUICK_HOME_AB

    #if ENABLED(QUICK_HOME)

    static void quick_home_xy() {

    // Pretend the current position is 0,0
    current_position.set(0.0, 0.0);
    sync_plan_position();

    const int x_axis_home_dir = TOOL_X_HOME_DIR(active_extruder);

    // Use a higher diagonal feedrate so axes move at homing speed
    const float minfr = _MIN(homing_feedrate(X_AXIS), homing_feedrate(Y_AXIS)),
                fr_mm_s = HYPOT(minfr, minfr);

    #if ENABLED(SENSORLESS_HOMING)
      sensorless_t stealth_states {
        NUM_AXIS_LIST(
          TERN0(X_SENSORLESS, tmc_enable_stallguard(stepperX)),
          TERN0(Y_SENSORLESS, tmc_enable_stallguard(stepperY)),
          false, false, false, false
        )
        , TERN0(X2_SENSORLESS, tmc_enable_stallguard(stepperX2))
        , TERN0(Y2_SENSORLESS, tmc_enable_stallguard(stepperY2))
    @ -413,6 +445,9 @@ void GcodeSuite::G28() {
    // Diagonal move first if both are homing
    TERN_(QUICK_HOME, if (doX && doY) quick_home_xy());

    // Combined homing of A and B axis (Dual Motor Belt Drive Mod)
    TERN_(QUICK_HOME_AB, if (doI && doJ) quick_home_ab());

    // Home Y (before X)
    if (ENABLED(HOME_Y_BEFORE_X) && (doY || TERN0(CODEPENDENT_XY_HOMING, doX)))
      homeaxis(Y_AXIS);



    
    
    
## Marlin 2.0 Bugfix Branch

__Not for production use. Use with caution!__

Marlin 2.0 takes this popular RepRap firmware to the next level by adding support for much faster 32-bit and ARM-based boards while improving support for 8-bit AVR boards. Read about Marlin's decision to use a "Hardware Abstraction Layer" below.

This branch is for patches to the latest 2.0.x release version. Periodically this branch will form the basis for the next minor 2.0.x release.

Download earlier versions of Marlin on the [Releases page](https://github.com/MarlinFirmware/Marlin/releases).

## Example Configurations

Before building Marlin you'll need to configure it for your specific hardware. Your vendor should have already provided source code with configurations for the installed firmware, but if you ever decide to upgrade you'll need updated configuration files. Marlin users have contributed dozens of tested example configurations to get you started. Visit the [MarlinFirmware/Configurations](https://github.com/MarlinFirmware/Configurations) repository to find the right configuration for your hardware.

## Building Marlin 2.0

To build Marlin 2.0 you'll need [Arduino IDE 1.8.8 or newer](https://www.arduino.cc/en/main/software) or [PlatformIO](https://docs.platformio.org/en/latest/ide.html#platformio-ide). We've posted detailed instructions on [Building Marlin with Arduino](https://marlinfw.org/docs/basics/install_arduino.html) and [Building Marlin with PlatformIO for ReArm](https://marlinfw.org/docs/basics/install_rearm.html) (which applies well to other 32-bit boards).

## Hardware Abstraction Layer (HAL)

Marlin 2.0 introduces a layer of abstraction so that all the existing high-level code can be built for 32-bit platforms while still retaining full 8-bit AVR compatibility. Retaining AVR compatibility and a single code-base is important to us, because we want to make sure that features and patches get as much testing and attention as possible, and that all platforms always benefit from the latest improvements.

### Supported Platforms

  Platform|MCU|Example Boards
  --------|---|-------
  [Arduino AVR](https://www.arduino.cc/)|ATmega|RAMPS, Melzi, RAMBo
  [Teensy++ 2.0](https://www.microchip.com/en-us/product/AT90USB1286)|AT90USB1286|Printrboard
  [Arduino Due](https://www.arduino.cc/en/Guide/ArduinoDue)|SAM3X8E|RAMPS-FD, RADDS, RAMPS4DUE
  [ESP32](https://github.com/espressif/arduino-esp32)|ESP32|FYSETC E4, E4d@BOX, MRR
  [LPC1768](https://www.nxp.com/products/processors-and-microcontrollers/arm-microcontrollers/general-purpose-mcus/lpc1700-cortex-m3/512-kb-flash-64-kb-sram-ethernet-usb-lqfp100-package:LPC1768FBD100)|ARM® Cortex-M3|MKS SBASE, Re-ARM, Selena Compact
  [LPC1769](https://www.nxp.com/products/processors-and-microcontrollers/arm-microcontrollers/general-purpose-mcus/lpc1700-cortex-m3/512-kb-flash-64-kb-sram-ethernet-usb-lqfp100-package:LPC1769FBD100)|ARM® Cortex-M3|Smoothieboard, Azteeg X5 mini, TH3D EZBoard
  [STM32F103](https://www.st.com/en/microcontrollers-microprocessors/stm32f103.html)|ARM® Cortex-M3|Malyan M200, GTM32 Pro, MKS Robin, BTT SKR Mini
  [STM32F401](https://www.st.com/en/microcontrollers-microprocessors/stm32f401.html)|ARM® Cortex-M4|ARMED, Rumba32, SKR Pro, Lerdge, FYSETC S6, Artillery Ruby
  [STM32F7x6](https://www.st.com/en/microcontrollers-microprocessors/stm32f7x6.html)|ARM® Cortex-M7|The Borg, RemRam V1
  [SAMD51P20A](https://www.adafruit.com/product/4064)|ARM® Cortex-M4|Adafruit Grand Central M4
  [Teensy 3.5](https://www.pjrc.com/store/teensy35.html)|ARM® Cortex-M4|
  [Teensy 3.6](https://www.pjrc.com/store/teensy36.html)|ARM® Cortex-M4|
  [Teensy 4.0](https://www.pjrc.com/store/teensy40.html)|ARM® Cortex-M7|
  [Teensy 4.1](https://www.pjrc.com/store/teensy41.html)|ARM® Cortex-M7|
  Linux Native|x86/ARM/etc.|Raspberry Pi

## Submitting Patches

Proposed patches should be submitted as a Pull Request against the ([bugfix-2.1.x](https://github.com/MarlinFirmware/Marlin/tree/bugfix-2.1.x)) branch.

- This branch is for fixing bugs and integrating any new features for the duration of the Marlin 2.0.x life-cycle.
- Follow the [Coding Standards](https://marlinfw.org/docs/development/coding_standards.html) to gain points with the maintainers.
- Please submit Feature Requests and Bug Reports to the [Issue Queue](https://github.com/MarlinFirmware/Marlin/issues/new/choose). Support resources are also listed there.
- Whenever you add new features, be sure to add tests to `buildroot/tests` and then run your tests locally, if possible.
  - It's optional: Running all the tests on Windows might take a long time, and they will run anyway on GitHub.
  - If you're running the tests on Linux (or on WSL with the code on a Linux volume) the speed is much faster.
  - You can use `make tests-all-local` or `make tests-single-local TEST_TARGET=...`.
  - If you prefer Docker you can use `make tests-all-local-docker` or `make tests-all-local-docker TEST_TARGET=...`.

## Marlin Support

The Issue Queue is reserved for Bug Reports and Feature Requests. To get help with configuration and troubleshooting, please use the following resources:

- [Marlin Documentation](https://marlinfw.org) - Official Marlin documentation
- [Marlin Discord](https://discord.gg/n5NJ59y) - Discuss issues with Marlin users and developers
- Facebook Group ["Marlin Firmware"](https://www.facebook.com/groups/1049718498464482/)
- RepRap.org [Marlin Forum](https://forums.reprap.org/list.php?415)
- Facebook Group ["Marlin Firmware for 3D Printers"](https://www.facebook.com/groups/3Dtechtalk/)
- [Marlin Configuration](https://www.youtube.com/results?search_query=marlin+configuration) on YouTube

## Contributors

Marlin is constantly improving thanks to a huge number of contributors from all over the world bringing their specialties and talents. Huge thanks are due to [all the contributors](https://github.com/MarlinFirmware/Marlin/graphs/contributors) who regularly patch up bugs, help direct traffic, and basically keep Marlin from falling apart. Marlin's continued existence would not be possible without them.

## Administration

Regular users can open and close their own issues, but only the administrators can do project-related things like add labels, merge changes, set milestones, and kick trolls. The current Marlin admin team consists of:

 - Scott Lahteine [[@thinkyhead](https://github.com/thinkyhead)] - USA - Project Maintainer &nbsp; [💸 Donate](https://www.thinkyhead.com/donate-to-marlin)
 - Roxanne Neufeld [[@Roxy-3D](https://github.com/Roxy-3D)] - USA
 - Keith Bennett [[@thisiskeithb](https://github.com/thisiskeithb)] - USA &nbsp; [💸 Donate](https://github.com/sponsors/thisiskeithb)
 - Peter Ellens [[@ellensp](https://github.com/ellensp)] - New Zealand  &nbsp; [💸 Donate](https://ko-fi.com/ellensp)
 - Victor Oliveira [[@rhapsodyv](https://github.com/rhapsodyv)] - Brazil
 - Chris Pepper [[@p3p](https://github.com/p3p)] - UK
 - Jason Smith [[@sjasonsmith](https://github.com/sjasonsmith)] - USA
 - Luu Lac [[@shitcreek](https://github.com/shitcreek)] - USA
 - Bob Kuhn [[@Bob-the-Kuhn](https://github.com/Bob-the-Kuhn)] - USA
 - Erik van der Zalm [[@ErikZalm](https://github.com/ErikZalm)] - Netherlands &nbsp; [💸 Donate](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)

## License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.
