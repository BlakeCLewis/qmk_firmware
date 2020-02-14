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

/* DVORAK */

enum layer_names { _BL, _FL, _TK };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [_BL] = LAYOUT_60_ansi_split_bs_rshift(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV, \
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,  KC_BSPC, \
        KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS, KC_ENT, \
        KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT, MO(_FL), \
        KC_LGUI, KC_LALT, MO(_FL),                   KC_SPC,                                      KC_RALT, KC_RGUI, KC_APP,  KC_RCTL \
    ),
    [_FL] = LAYOUT_60_ansi_split_bs_rshift(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_INS, \
        KC_CAPS, _______, _______, _______, _______, _______, BL_ON,   BL_STEP, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   _______, KC_DEL, \
        _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, _______, \
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, NK_TOGG, _______, KC_END,  KC_PGDN, KC_DOWN, _______, _______, \
        TG(_TK), _______, _______,                   _______,                                     _______, _______, _______, _______ \
    ),
    [_TK] = LAYOUT_60_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        TG(_TK), _______, _______,                   _______,                                     _______, _______, _______, _______ \
    )
    // clang-format on
};

/* BL
 *.--------------------------------------------------------------------------.
 *| esc|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  [ |  ] |  \ |  ` |
 *| -------------------------------------------------------------------------|
 *| tab  |  ' |  , |  . |  p |  y |  f |  g |  c |  r |  l |  / |  = | bspc  |
 *| -------------------------------------------------------------------------|
 *| ctrl  |  a |  o |  e |  u |  i |  d |  h |  t |  n |  s |  - |  enter    |
 *| -------------------------------------------------------------------------|
 *| shift   |  ; |  q |  j |  k |  x |  b |  m |  w |  v |  z | shift |mo(FL)|
 *|--------------------------------------------------------------------------|
 *| lgui| lalt|mo(FL)|               space           |ralt |rgui | app |rctl |
 *'--------------------------------------------------------------------------'
 * FL
 *.--------------------------------------------------------------------------.
 *|    | f1 | f2 | f3 | f4 | f5 | f6 | f7 | f8 | f9 | f10| f11| f12|    | ins|
 *|--------------------------------------------------------------------------|
 *| caps |    |    |    |    |    |blon|blup| psc|slck|paus| up |    |  del  |
 *|--------------------------------------------------------------------------|
 *|       |    |    |    |    |    |    |    |home|pgup|left|rght|           |
 *|--------------------------------------------------------------------------|
 *|         |vol-|vol+|mute|    |    |NKRO|    |end |pgdn|down|         |    |
 *|--------------------------------------------------------------------------|
 *|tg(TK)|     |     |                               |     |     |     |     |
 *'--------------------------------------------------------------------------'
 * TK
 *.--------------------------------------------------------------------------.
 *|    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |
 *|--------------------------------------------------------------------------|
 *|      |    | up |    |    |    |    |    |    |    |    |    |    |       |
 *|--------------------------------------------------------------------------|
 *|       |left|down|rght|    |    |    |    |    |    |    |    |           |
 *|--------------------------------------------------------------------------|
 *|         |    |    |    |    |    |    |    |    |    |    |         |    |
 *|--------------------------------------------------------------------------|
 *|tg(TK)|     |     |                               |     |     |     |     |
 *'--------------------------------------------------------------------------'
 */
