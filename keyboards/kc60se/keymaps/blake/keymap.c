/* Copyright 2020 Blake C. Lewis
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

/* my evolution */

// Defines names for use in layer keycodes and the keymap
enum layer_names { _BL, _FL, _WK, _TK, _BS };

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes { KC60SE = SAFE_RANGE, QMKURL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [_BL] = LAYOUT_60_ansi_split_bs_rshift(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(_FL),
        KC_LGUI, KC_LALT, MO(_FL),                   KC_SPC,                                      KC_NO,   KC_RGUI, KC_RALT, KC_RCTL
    ),
    [_FL] = LAYOUT_60_ansi_split_bs_rshift(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_INS,
        KC_CAPS, _______, _______, _______, _______, _______, BL_ON,   BL_STEP, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   _______, KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______, KC_END,  KC_PGDN, KC_DOWN, _______, _______,
        TG(_WK), _______, TG(_TK),                   _______,                                     _______, _______, _______, _______
    ),
    [_WK] = LAYOUT_60_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TG(_WK), _______, _______,                   _______,                                     _______, _______, _______, _______
    ),
    [_TK] = LAYOUT_60_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_NO,   _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PCMM, KC_PENT,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PEQL, _______,
        TG(_WK), MO(_BS), TG(_TK),                   _______,                                     _______, KC_P0,   KC_PDOT, _______
    ),
    [_BS] = LAYOUT_60_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, QMKURL,  _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, KC60SE,  _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                   _______,                                     _______, _______, _______, _______
    )
    // clang-format on
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC60SE:
            if (record->event.pressed) {
                // when keycode KC60SE is pressed
                SEND_STRING("https://github.com/qmk/qmk_firmware/blob/master/keyboards/kc60se/\n");
            } else {
                // when keycode KC60SE is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/#/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) { }

void matrix_scan_user(void) { }

bool led_update_user(led_t led_state) { return true; }

*/

/* BL
 *.--------------------------------------------------------------------------.
 *| esc|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |  \ |  ` |
 *|--------------------------------------------------------------------------|
 *| tab  |  q |  w |  e |  r |  t |  y |  u |  i |  o |  p |  [ |  ] | bksp  |
 *|--------------------------------------------------------------------------|
 *| lctrl |  a |  s |  d |  f |  g |  h |  j |  k |  l |  ; |  ' |  enter    |
 *|--------------------------------------------------------------------------|
 *| lshift  |  z |  x |  c |  v |  b |  n |  m |  , |  . |  / | rshift|mo(FL)|
 *|--------------------------------------------------------------------------|
 *|lgui |lalt |mo(FL)|              space           |mo(FL)|rgui |ralt |rctl |
 *'--------------------------------------------------------------------------'
 * FL
 *.--------------------------------------------------------------------------.
 *|    | f1 | f2 | f3 | f4 | f5 | f6 | f7 | f8 | f9 | f10| f11| f12|    | ins|
 *|--------------------------------------------------------------------------|
 *| caps |    |    |    |    |    |blon|blup| psc|slck|paus| up |    |  del  |
 *|--------------------------------------------------------------------------|
 *|       |    |    |    |    |    |    |    |home|pgup|left|rght|           |
 *|--------------------------------------------------------------------------|
 *|         |vol-|vol+|mute|    |    |    |    |end |pgdn|down|         |    |
 *|--------------------------------------------------------------------------|
 *|tg(WK)|     |tg(TK)|                              |     |     |     |     |
 *'--------------------------------------------------------------------------'
 * WK
 *.--------------------------------------------------------------------------.
 *|    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |
 *|--------------------------------------------------------------------------|
 *|      |    | up |    |    |    |    |    |    |    |    |    |    |       |
 *|--------------------------------------------------------------------------|
 *|       |left|down|rght|    |    |    |    |    |    |    |    |           |
 *|--------------------------------------------------------------------------|
 *|         |    |    |    |    |    |    |    |    |    |    |       |      |
 *|--------------------------------------------------------------------------|
 *|tg(WK)|     |     |                               |     |     |     |     |
 *'--------------------------------------------------------------------------'
 * TK
 *.--------------------------------------------------------------------------.
 *|    |    |    |    |    |    |    |    |    | /  | *  | -  |    |    |    |
 *|--------------------------------------------------------------------------|
 *|      |    |    |    |    |    |    |    | 7  | 8  | 9  | +  |    |       |
 *|--------------------------------------------------------------------------|
 *|       |    |    |    |    |    |    |    | 4  | 5  | 6  |,   |  penter   |
 *|--------------------------------------------------------------------------|
 *|         |    |    |    |    |    |    |    | 1  | 2  | 3  |  =    |      |
 *|--------------------------------------------------------------------------|
 *|     |mo(BS)|tg(TK)|                              |     |  0  |  .  |     |
 *'--------------------------------------------------------------------------'
 * BS
 *.--------------------------------------------------------------------------.
 *|    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |
 *|--------------------------------------------------------------------------|
 *|      |    |    |    |    |qmk |    |    |    |    |    |    |    |       |
 *|--------------------------------------------------------------------------|
 *|       |    |    |    |    |kc60|    |    |    |    |    |    |           |
 *|--------------------------------------------------------------------------|
 *|         |    |    |    |    |    |nkro|    |    |    |    |       |      |
 *|--------------------------------------------------------------------------|
 *|     |      |      |                              |     |     |     |     |
 *'--------------------------------------------------------------------------'
 */
