/* Copyright 2018 Blake C. Lewis
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

/* test all possible keys */

// Defines names for use in layer keycodes and the keymap

enum my_layers { _BL, _FL };

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    KC60SE = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [_BL] = LAYOUT_all(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, \
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, \
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_FL), \
        KC_LGUI, KC_LALT, MO(_FL),                   KC_SPC,                                      KC_RALT, KC_RGUI, KC_APP,  KC_RCTL \
    ),
    [_FL] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, \
        KC_CAPS, KC60SE,  _______, _______, _______, _______, BL_ON,   BL_STEP, _______, _______, _______, _______, _______, KC_DEL, \
        _______, QMKURL,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, NK_TOGG, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______,                   _______,                                     _______, _______, _______, _______ \
    )
    // clang-format on
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC60SE:
            if (record->event.pressed) {
                // when keycode KC60SE is pressed
                SEND_STRING("https://github.com/qmk/qmk_firmware/blob/master/keyboards/kc60se/");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released

            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/

/* BL
 *.--------------------------------------------------------------------------.
 *| esc|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |bcsp|  ` |
 *|--------------------------------------------------------------------------|
 *| tab  |  q |  w |  e |  r |  t |  y |  u |  i |  o |  p |  [ |  ] |  \    |
 *|--------------------------------------------------------------------------|
 *| caps  |  a |  s |  d |  f |  g |  h |  j |  k |  l |  ; |  ' | #  |enter |
 *|--------------------------------------------------------------------------|
 *| lshft| \  |  z |  x |  c |  v |  b |  n |  m |  , |  . |  / |rshft|mo(FL)|
 *|--------------------------------------------------------------------------|
 *| lgui| lalt|mo(FL)|               space           |ralt |rgui | app |rctl | 
 *'--------------------------------------------------------------------------'
 * FL
 *.--------------------------------------------------------------------------.
 *|        |    |    |    |     |    |    |    |    |    |    |    |    |    |
 *|--------------------------------------------------------------------------|
 *| caps |CODE|    |    |    |    |blon|blup|    |    |    |    |    |  del  |
 *|--------------------------------------------------------------------------|
 *|       |DOCS|    |    |    |    |    |    |    |    |    |    |    |      |
 *|--------------------------------------------------------------------------|
 *|      |    |vol-|vol+|mute|    |    |NKRO|    |    |    |    |       |    |
 *|--------------------------------------------------------------------------|
 *|       |     |     |                              |     |     |     |     |
 *'--------------------------------------------------------------------------'
 */
