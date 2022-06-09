#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFC32
#define PRODUCT_ID      0x0287
#define DEVICE_VER      0x0001
#define MANUFACTURER    JosefAdamcik
#define PRODUCT         Sofle

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
//#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
//#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define MATRIX_ROW_PINS { 5, 6, 7, 8, 9 }
#define MATRIX_COL_PINS { 27, 26, 18, 20, 19, 10 }
/*
D3  -  0
D2  -  1
GND - 
GND - 
D1  -  2
D0  -  3
D4  -  4
C6  -  5
D7  -  6
E6  -  7
B4  -  8
B5  -  9
--- - 
RAW - 
GND - 
RST - 
VCC - 
F4  - 29
F5  - 28
F6  - 27
F7  - 26
B1  - 18
B3  - 20
B2  - 19
B6  - 10
*/

#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 100
#define DEBOUNCE 5

/* encoder support */
//#define ENCODERS_PAD_A { F5 }
//#define ENCODERS_PAD_B { F4 }
//#define ENCODERS_PAD_A_RIGHT { F4 }
//#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODERS_PAD_A { 28 }
#define ENCODERS_PAD_B { 29 }
#define ENCODERS_PAD_A_RIGHT { 29 }
#define ENCODERS_PAD_B_RIGHT { 28 }
#define ENCODER_RESOLUTION 2

#define TAP_CODE_DELAY 10

/* communication between sides */
#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION
//#define SOFT_SERIAL_PIN D2
#define SOFT_SERIAL_PIN 1

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1
