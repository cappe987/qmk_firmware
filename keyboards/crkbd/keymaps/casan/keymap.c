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

#include "keymap_swedish.h"


#include QMK_KEYBOARD_H


enum my_keycodes {
  SWE_1 = SAFE_RANGE,
  SWE_2,
  SWE_3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
   /*MT(MOD_LCTL, KC_CAPS),    KC_A,    KC_S,    KC_D,    KC_F, KC_G,                 KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, MT(MOD_RCTL, KC_QUOT),*/
      KC_CAPS,    KC_A,    KC_S,    KC_D,    MT(MOD_LCTL, KC_F),    KC_G,           KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,  KC_SPC, MO(1),        MO(2), KC_BSPC, KC_LCTL
                                        /*KC_LALT, KC_SPC, LM(1, MOD_LALT),     MO(2), KC_BSPC, MO(3)*/
                                      //`--------------------------'  `--------------------------'

  ),

    // Colemak-DH
    /*[0] = LAYOUT_split_3x6_3(*/
  /*//,-----------------------------------------------------.                    ,-----------------------------------------------------.*/
       /*KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y,   KC_SCLN,  KC_LALT,*/
  /*//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|*/
   /*MT(MOD_LCTL, KC_CAPS),    KC_A,    KC_R,    KC_T,    KC_F, KC_G,                 KC_M,    KC_N,    KC_E,    KC_I, KC_O, MT(MOD_RCTL, KC_QUOT),*/
  /*//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|*/
      /*KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,*/
  /*//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|*/
                                     /*MO(3), KC_SPC, LM(1, MOD_LALT),     MO(2), KC_BSPC, KC_ENT*/
                                      /*//`--------------------------'  `--------------------------'*/
  /*),*/

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, A(KC_6), A(KC_7), A(KC_8), A(KC_9), A(KC_0),                      XXXXXXX, XXXXXXX, XXXXXXX, A(KC_O),  A(KC_P), KC_F8,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, A(KC_1), A(KC_2), A(KC_3), A(KC_4), A(KC_5),                      A(KC_H),  A(KC_J), A(KC_K), A(KC_L), XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, C(KC_X), C(KC_C), C(KC_V), XXXXXXX,                         KC_O,    KC_M,    KC_F, XXXXXXX, XXXXXXX, KC_LSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  _______,    MO(3),  _______,   _______
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       /*KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,*/
   S(KC_QUOT),   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      KC_CIRC, KC_AMPR, KC_LCBR, KC_RCBR, KC_ASTR, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      /*KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,*/
      KC_QUOT,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_MINS,  KC_EQL, KC_LPRN, KC_RPRN,  KC_UNDS,  KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      /*KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,*/
      KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, MO(3),      XXXXXXX, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9, XXXXXXX,                 LGUI(KC_SPC), KC_WH_U,   KC_UP, KC_WH_D, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, SWE_1, SWE_2, SWE_3, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT,
      /*XXXXXXX, SE_ARNG, SE_ADIA, SE_ODIA, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,*/
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______,  KC_LGUI,     XXXXXXX, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};


/*bool process_record_user(uint16_t keycode, keyrecord_t *record) {*/
  /*switch (keycode) {*/
    /*case SWE_1:*/
      /*if (record->event.pressed) {*/
        /*SEND_STRING("hello");*/
        /*[>SEND_STRING("å");<]*/
      /*}*/
      /*return false; // Skip all further processing of this key*/
    /*case SWE_2:*/
      /*if (record->event.pressed) {*/
        /*SEND_STRING("ä");*/
      /*}*/
      /*return false; // Skip all further processing of this key*/
    /*case SWE_3:*/
      /*if (record->event.pressed) {*/
        /*SEND_STRING("ö");*/
      /*}*/
      /*return false; // Skip all further processing of this key*/
    /*default:*/
      /*return true; // Process all other keycodes normally*/
  /*}*/
/*}*/

/*void keyboard_post_init_user(void) {*/
    /*rgblight_enable_noeeprom(); // Enables RGB, without saving settings*/
    /*rgblight_sethsv_noeeprom(HSV_RED);*/
    /*rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);*/
/*}*/
