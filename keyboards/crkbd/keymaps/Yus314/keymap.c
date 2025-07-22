/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



#include QMK_KEYBOARD_H

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
  //  XXXXXXX, KC_K,    KC_Y,    KC_O,     KC_DOT,  KC_EQL,                      KC_F,   KC_C,     KC_L,    KC_P,   KC_Q,     KC_Z,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //  XXXXXXX,  KC_H,   KC_I,    KC_E,    KC_A,    KC_U,                         KC_D,    KC_S,    KC_T,    KC_N,    KC_R,    KC_V,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  // XXXXXXX, KC_J,   KC_SCLN, KC_COMM, KC_QUOT, KC_SLSH,                        KC_W,   KC_G,    KC_M,    KC_B,     KC_X,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
    //  KC_BSPC,  LT(1,KC_SPC),LT(2,KC_ENT),  KC_RCTL,  KC_RSFT, KC_RALT
                                      //`--------------------------'  `--------------------------'

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
  //  XXXXXXX,  KC_7,    KC_5,    KC_3,    KC_1,    KC_9,                         KC_8,  KC_0,   KC_2,    KC_4,    KC_6,   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //  XXXXXXX, KC_EQL,  KC_PLUS,  KC_ESC,  KC_TAB, KC_MINS,                      KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_COLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //  XXXXXXX, XXXXXXX, KC_LT, KC_PIPE, KC_UNDS,  XXXXXXX,                      XXXXXXX, KC_HASH,KC_AMPR,  KC_GT,  XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                      KC_BSPC,   LT(1,KC_SPC),  LT(2,KC_ENT),    KC_RCTL, KC_RSFT, KC_RALT
                                      //`--------------------------'  `--------------------------'

  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
  //  XXXXXXX, XXXXXXX, KC_CIRC, KC_EXLM,  KC_DLR, XXXXXXX,                     XXXXXXX,  KC_AT,   KC_TILD, KC_GRV, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //  XXXXXXX, KC_LCBR, KC_LPRN, KC_LBRC, KC_ASTR, XXXXXXX,                      XXXXXXX,  KC_DQT, KC_RBRC, KC_RPRN, KC_RCBR,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //  XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH,   KC_QUES, XXXXXXX,                      XXXXXXX, KC_PERC, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                                        KC_SPC,   LT(1,KC_SPC),  LT(2,KC_ENT),     KC_RCTL, KC_RSFT, KC_RALT
                                      //`--------------------------'  `--------------------------'


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_K,    KC_Y,    KC_O,     KC_DOT,  KC_EQL,                      KC_F,   KC_C,     KC_L,    KC_P,   KC_Q,     KC_Z,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_H,   KC_I,    KC_E,    KC_A,    KC_U,                         KC_D,    KC_S,    KC_T,    KC_N,    KC_R,    KC_V,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_J,   KC_SCLN, KC_COMM, KC_QUOT, KC_SLSH,                        KC_W,   KC_G,    KC_M,    KC_B,     KC_X,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_BSPC,LT(1,KC_SPC),LT(2,KC_ENT),  KC_RCTL,  KC_RSFT, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,  KC_7,    KC_5,    KC_3,    KC_1,    KC_9,                         KC_8,  KC_0,   KC_2,    KC_4,    KC_6,   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_EQL,  KC_PLUS,  KC_ESC,  KC_TAB, KC_MINS,                      KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_COLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_LT, KC_PIPE, KC_UNDS,  XXXXXXX,                      XXXXXXX, KC_HASH,KC_AMPR,  KC_GT,  XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_BSPC,   LT(1,KC_SPC),  LT(2,KC_ENT),    KC_RCTL, KC_RSFT, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, KC_CIRC, KC_EXLM,  KC_DLR, XXXXXXX,                     XXXXXXX,  KC_AT,   KC_TILD, KC_GRV, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LCBR, KC_LPRN, KC_LBRC, KC_ASTR, XXXXXXX,                      XXXXXXX,  KC_DQT, KC_RBRC, KC_RPRN, KC_RCBR,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH,   KC_QUES, XXXXXXX,                      XXXXXXX, KC_PERC, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_SPC,   LT(1,KC_SPC),  LT(2,KC_ENT),     KC_RCTL, KC_RSFT, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

// static bool shift_pressed = false;
//  bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case KC_RSFT:
//             if (record->event.pressed) {
//                 shift_pressed = true;
//             } else {
//                 shift_pressed = false;
//             }
//             break;
//         case KC_COMM:
//              (record->event.pressed) {
//                 if (shift_pressed) {
//                     unregister_code(KC_RSFT);
//                     SEND_STRING("[");
//                     register_code(KC_RSFT);
//
//                 } else {
//                     SEND_STRING(",");
//                 }
//             }
//             break;
//         case KC_DOT:
//             if (record->event.pressed) {
//                 if (shift_pressed) {
//                     unregister_code(KC_RSFT);
//                     SEND_STRING("]");
//                     register_code(KC_RSFT);
//                 } else {
//                     SEND_STRING(".");
//                 }
//             }
//             break;
//     };
//     return true;
//
// }
