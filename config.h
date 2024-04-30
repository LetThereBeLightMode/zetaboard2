
/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/* depreciated, info now in info.json
#define MATRIX_ROW_PINS { D4, D7, E6, B4, D1 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW */

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 1


#define USE_SERIAL
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling, enable if compiling properly */
#define USB_POLLING_INTERVAL_MS 1

//saves absolutely neccesary space, you dont need more than 8 layers anyways
#define LAYER_STATE_8BIT

/* Select hand configuration */
#define EE_HANDS
//#define MASTER_LEFT
// #define MASTER_RIGHT

//absolutely crucial, will break your split without this
#define SPLIT_USB_DETECT

//some vial config stuff
//#define VIAL_KEYBOARD_UID {0x2C, 0x37, 0x4D, 0x3A, 0xB3, 0x49, 0x22, 0xA9}
#define DYNAMIC_KEYMAP_LAYER_COUNT 3

//lock config for vial. Make sure this is posted visibly
//#define VIAL_UNLOCK_COMBO_COLS { 0, 3 }
//#define VIAL_UNLOCK_COMBO_ROWS { 3, 5 }

//additional space saving

#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT