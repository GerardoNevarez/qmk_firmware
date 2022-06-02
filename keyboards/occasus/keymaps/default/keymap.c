/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H
#include "keymap_italian.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,   IT_1,    IT_2,    IT_3,   IT_4,    IT_5,    IT_6,    IT_7,     IT_8,    IT_9,     IT_0,   KC_BSPC,
        KC_TAB,   KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,     KC_P,    KC_DEL,
        KC_LSFT,  KC_A,    KC_S,    KC_D,   KC_F,    KC_G,    KC_H,    KC_J,     KC_K,    KC_L,    IT_AT,   KC_RBRC,
        KC_LCTL,  KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,    KC_N,    KC_M,  IT_COMM,  IT_DOT,  KC_SLSH,    KC_ENT,
        KC_LALT,  KC_NO,  KC_SPC,  KC_SPC,    KC_NO,  KC_RALT
    )

/*    [1] = LAYOUT(
        KC_A, KC_B,
        KC_C, KC_D
    ) */
};