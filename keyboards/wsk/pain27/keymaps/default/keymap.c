#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,
        MT(MOD_LCTL, KC_Z), MT(MOD_LALT, KC_X), LT(1, KC_C), LT(2, KC_V), MT(MOD_RGUI,KC_B), MT(MOD_RALT, KC_N), MT(MOD_RCTL, KC_M), MT(MOD_LSFT, KC_SPC)),
//    [1] = LAYOUT(KC_ESC, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_BSPC,
//        KC_TAB, RGB_TOG, RGB_VAD, RGB_VAI, RGB_MOD, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
//        KC_LCTL, KC_LALT, KC_TRNS, MO(3), KC_RGUI, KC_RALT, KC_RCTL, KC_NO),
    [1] = LAYOUT(KC_ESC, KC_MS_LEFT, KC_MS_DOWN, KC_MS_UP, KC_MS_RIGHT, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_BSPC,
        KC_TAB, RGB_TOG, RGB_VAD, RGB_VAI, RGB_MOD, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
        KC_LCTL, KC_LALT, KC_TRNS, MO(3), KC_RGUI, KC_MS_BTN1, KC_MS_BTN2, KC_NO),
    [2] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_GRV, KC_BSLS, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LCTL, KC_LALT, MO(3), KC_TRNS, KC_COMM, KC_DOT, KC_SLSH, KC_NO),
    [3] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        KC_F11, KC_F12, RGB_SPD, RGB_SPI, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, KC_DEL,
        KC_LCTL, KC_LALT, KC_TRNS, KC_TRNS, KC_RGUI, KC_RALT, KC_RCTL, KC_NO)

};

#ifdef CONSOLE_ENABLE
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
  uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
  return true;
}

#endif
