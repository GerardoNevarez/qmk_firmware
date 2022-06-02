/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    zannikb
#define PRODUCT         occasus

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { 21, 20, 19, 18, 17 }
#define MATRIX_COL_PINS { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

