#include QMK_KEYBOARD_H

// Define layer names
#define _NORMAL 0
#define _FNONE 1
#define _FNTWO 2

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_NORMAL] = LAYOUT_60_ansi_split(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, \
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), KC_SPC, KC_BSPC, KC_RALT, KC_DEL, KC_APP, KC_RCTL),

    [_FNONE] = LAYOUT_60_ansi_split(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    KC_TAB, L_TOGGLE, L_INC, L_DEC, KC_R, KC_T, KC_Y, KC_U, KC_UP, KC_O, KC_P, KC_VOLD, KC_VOLU, EE_RST, \
    KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), KC_SPC, KC_BSPC, KC_RALT, KC_DEL, KC_APP, KC_RCTL),
};

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom_cyan();
  rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL);
}