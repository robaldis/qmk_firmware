/*
  Copyright (c) 2020 Fred Silberberg

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include QMK_KEYBOARD_H
#define BASE 0
#define SHIFT 1
#define NUM   2
#define ARROW 3
#define MOUSE 4
#define FUN   5
#define MUSIC 6

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT_5x6_5(
     KC_GRV,          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                    KC_6,   KC_7,   KC_8,         KC_9,   KC_0,    KC_MINS,
     KC_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                    KC_Y,   KC_U,   KC_I,         KC_O,   KC_P,    KC_BSLS,
     KC_ESC,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                    KC_H,   KC_J,   KC_K,         KC_L,   KC_SCLN, KC_QUOT,
     LSFT_T(KC_NUHS), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                    KC_N,   KC_M,   KC_COMM,      KC_DOT, KC_SLSH, OSM(MOD_RSFT),
                      KC_LGUI, KC_LALT, MO(MUSIC), LT(MOUSE, KC_SPACE), LT(ARROW, KC_DEL),               LT(ARROW, KC_ENT),   LT(FUN, KC_TAB), LT(NUM, KC_BSPC), KC_LALT,    KC_LGUI,
                                                     KC_LCTL, KC_LSFT,              KC_LSFT, KC_RCTL
  ),

  [SHIFT] = LAYOUT_5x6_5(
     LSFT(KC_GRV),       KC_1,       KC_2,          KC_3,       KC_4,       KC_5,                                                    KC_6,            KC_7,             KC_8,          KC_9,         KC_0,          LSFT(KC_MINS),
     KC_TAB,             LSFT(KC_Q), LSFT(KC_W),    LSFT(KC_E), LSFT(KC_R), LSFT(KC_T),                                              LSFT(KC_Y),      LSFT(KC_U),       LSFT(KC_I),    LSFT(KC_O),   LSFT(KC_P),    LSFT(KC_BSLS),
     KC_ESC,             LSFT(KC_A), LSFT(KC_S),    LSFT(KC_D), LSFT(KC_F), LSFT(KC_G),                                              LSFT(KC_H),      LSFT(KC_J),       LSFT(KC_K),    LSFT(KC_L),   LSFT(KC_SCLN), LSFT(KC_QUOT),
     LSFT(KC_BACKSLASH), LSFT(KC_Z), LSFT(KC_X),    LSFT(KC_C), LSFT(KC_V), LSFT(KC_B),                                              LSFT(KC_N),      LSFT(KC_M),       LSFT(KC_COMM), LSFT(KC_DOT), LSFT(KC_SLSH), OSM(MOD_RSFT),
                                     KC_LGUI,       KC_LALT,    MO(MUSIC),  LT(MOUSE,KC_SPACE), KC_DEL,     LT(ARROW, LSFT(KC_ENT)), LT(FUN, KC_TAB), LT(NUM, KC_BSPC), KC_LALT,       KC_LGUI,
                                                                            KC_LCTL,            MO(SHIFT),  MO(SHIFT),         KC_RCTL
  ),

  [FUN] = LAYOUT_5x6_5(
     QK_BOOT,         KC_F10,   KC_F10,   KC_F11,   KC_F12,   KC_HASH,                              KC_CIRC,KC_RPRN,KC_RCBR,      KC_RBRC,KC_DLR,         KC_MINS,
     KC_TAB,          KC_F7,    KC_F7,    KC_F8,    KC_F9,    KC_T,                                    KC_Y,   KC_U,   KC_I,         KC_O,   KC_P,           KC_BSLS,
     KC_ESC,          KC_F4,    KC_F4,    KC_F5,    KC_F6,    KC_G,                                    KC_H,   KC_J,   KC_K,         KC_L,   KC_SCLN,        KC_QUOT,
     LSFT_T(KC_NUHS), KC_F1,    KC_F1,    KC_F2,    KC_F3,    KC_B,                                    KC_N,   KC_M,   KC_COMM,      KC_DOT, CTL_T(KC_SLSH), OSM(MOD_RSFT),
                             KC_LGUI, KC_LALT, MO(MUSIC), LT(MOUSE, KC_SPACE), KC_DEL,               LT(ARROW, KC_ENT),   LT(FUN, KC_TAB), LT(NUM, KC_BSPC), KC_LALT,    KC_LGUI,
                                                     KC_LCTL, MO(SHIFT),              MO(SHIFT), KC_RCTL
  ),

  [ARROW] = LAYOUT_5x6_5(
     KC_GRV,          KC_PAST, KC_LBRC, KC_LCBR, KC_LPRN, KC_HASH,                               KC_CIRC,KC_RPRN,KC_RCBR,      KC_RBRC,KC_DLR,  KC_MINS,
     KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                    KC_Y,   KC_U,   KC_I,         KC_O,   KC_P,           KC_BSLS,
     KC_ESC,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                    KC_LEFT,   KC_DOWN,   KC_UP,  KC_RGHT,   KC_SCLN,        KC_QUOT,
     LSFT_T(KC_NUHS),       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                    KC_N,   KC_M,   KC_COMM,      KC_DOT, CTL_T(KC_SLSH), OSM(MOD_RSFT),
                             KC_LGUI, KC_LALT, MO(MUSIC), LT(MOUSE, KC_SPACE), KC_DEL,               LT(ARROW, KC_ENT),   LT(FUN, KC_TAB), LT(NUM, KC_BSPC), KC_LALT,    KC_LGUI,
                                                     KC_LCTL, MO(SHIFT),              MO(SHIFT), KC_RCTL
  ),

  [NUM] = LAYOUT_5x6_5(
     KC_GRV,        KC_EXLM, KC_AT, KC_LCBR, KC_LPRN, KC_PERC,                              KC_CIRC, UC(0x40B), KC_RCBR, KC_RBRC, KC_EQL,         KC_MINS,
     KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_P7,     KC_P8,   KC_P9,   KC_PPLS,           KC_BSLS,
     KC_ESC,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_P4,     KC_P5,   KC_P6,   KC_PMNS,        KC_QUOT,
     LSFT_T(KC_NUHS),       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                       KC_NUM,  KC_P1,     KC_P2,   KC_P3,   KC_PAST, OSM(MOD_RSFT),
                             KC_LGUI, KC_LALT, MO(MUSIC), LT(MOUSE, KC_SPACE), KC_BSPC, LT(ARROW, KC_ENT),   LT(FUN, KC_TAB), LT(NUM, KC_BSPC), KC_P0,    KC_PDOT,
                                                     KC_LCTL, MO(SHIFT),              MO(SHIFT), KC_RCTL
  ),

  [MOUSE] = LAYOUT_5x6_5(
     KC_GRV,        KC_PAST, KC_LBRC, KC_LCBR, KC_LPRN, KC_HASH,                              KC_CIRC,KC_RPRN,KC_RCBR,      KC_RBRC,KC_DLR,         KC_MINS,
     KC_TAB,        KC_F,    KC_W,    KC_E,    KC_R,    KC_T,                                    KC_Y,   KC_P7,   KC_P8,         KC_P9,   KC_P,           KC_BSLS,
     KC_ESC,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                    KC_H,   KC_P4,   KC_P5,         KC_P6,   KC_SCLN,        KC_QUOT,
     LSFT_T(KC_NUHS),       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                    KC_N,   KC_P1,   KC_P2,      KC_P3, CTL_T(KC_SLSH), OSM(MOD_RSFT),
                             KC_LGUI, KC_LALT, MO(MUSIC), LT(MOUSE, KC_SPACE), KC_DEL, LT(ARROW, KC_ENT),   LT(FUN, KC_TAB), LT(NUM, KC_BSPC), KC_P0,    KC_LGUI,
                                                     KC_LCTL, MO(SHIFT),              MO(SHIFT), KC_RCTL
  ),

  [MUSIC] = LAYOUT_5x6_5(
     KC_GRV,        KC_PAST, KC_LBRC, KC_LCBR, KC_LPRN, KC_HASH,                              KC_CIRC,KC_RPRN,KC_RCBR,      KC_RBRC,KC_DLR,         KC_MINS,
     KC_TAB,        KC_M,    KC_W,    KC_VOLU,    KC_R,    KC_NO,                                    KC_SLEP,   KC_P7,   KC_P8,         KC_P9,   KC_P,           KC_BSLS,
     KC_ESC,        KC_A,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_G,                                    KC_H,   KC_P4,   KC_P5,         KC_P6,   KC_SCLN,        KC_QUOT,
     LSFT_T(KC_NUHS),       KC_Z,    KC_X,    KC_VOLD,    KC_MUTE,    KC_B,                                    KC_N,   KC_P1,   KC_P2,      KC_P3, CTL_T(KC_SLSH), OSM(MOD_RSFT),
                             KC_LGUI, KC_LALT, MO(MUSIC), LT(MOUSE, KC_SPACE), KC_DEL, LT(ARROW, KC_ENT),   LT(FUN, KC_TAB), LT(NUM, KC_BSPC), KC_P0,    KC_LGUI,
                                                     KC_LCTL, MO(SHIFT),              MO(SHIFT), KC_RCTL
  ),
};





  /* BASE/SHIFT
   * .---------------------------------------------.                                  .-----------------------------------------.
   * |    `~    |  *1  |  [2  |  {3  |  (4  |  #5  |                                  |  ^6  |  )7  |  }8  |  ]9  |  $0  |  -_  |
   * |----------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |    Tab   |   Q  |   W  |   E  |   R  |   T  |                                  |   Y  |   U  |   I  |   O  |   P  |  \\  |
   * |----------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |    Esc   |   A  |   S  |   D  |   F  |   G  |                                  |   H  |   J  |   K  |   L  |  ;:  |  '"  |
   * |----------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * | Shift \| |   Z  |   X  |   C  |   V  |   B  |                                  |   N  |   M  |  ,<  |  .>  |  /?  | Shft |
   * '---------------------------------------------/                                  \-----------------------------------------'
   *                   | GUI  |  ALT |    / MUSIC /---------------.    .---------------\  Bspc \    | ALT  |  GUI |
   *                   |      |      |   /       / Space /  Del  /      \ Enter \  Tab  \  NUM  \   |      |      |
   *                   '-------------'  '-------/ MOUSE /       /        \ ARROW \  FUN  \-------'  '-------------'
   *                                           /---------------/          \---------------\
   *                                          /  Ctl  / SHIFT /            \ SHIFT \  Ctl  \
   *                                         /       /       /              \       \       \
   *                                        '---------------'                '---------------'
   */

  /*  NUMS  
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |   !  |   @  |      |      |   %  |                                  |      |   &  | PUND |      |   =  |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |   7  |   8  |   9  |   +  |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |   4  |   5  |   6  |   *  |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  | NumLK|   1  |   2  |   3  |   /  |      |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *               | GUI  |  ALT |    / MUSIC /---------------.    .---------------\  Bspc \    |   0  |   .  |
   *               |      |      |   /       / Space /  Del  /      \ Enter \  Tab  \  NUM  \   |      |      |
   *               '-------------'  '-------/ MOUSE /       /        \ ARROW \  FUN  \-------'  '-------------'
   *                                       /---------------/          \---------------\
   *                                      /  Ctl  / SHIFT /            \ SHIFT \  Ctl  \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */

  /* FUN (FUNCTION)
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |  RST |      | F10  | F11  | F12  |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |  F7  |  F8  |  F9  |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |  F4  |  F5  |  F6  |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |  F1  |  F2  |  F3  |      |                                  |      |      |      |      |      |      |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *               | GUI  |  ALT |    / MUSIC /---------------.    .---------------\  Bspc \    | ALT  |  GUI |
   *               |      |      |   /       / Space /  Del  /      \ Enter \  Tab  \  NUM  \   |      |      |
   *               '-------------'  '-------/ MOUSE /       /        \ ARROW \  FUN  \-------'  '-------------'
   *                                       /---------------/          \---------------\
   *                                      /  Ctl  / SHIFT /            \ SHIFT \  Ctl  \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */

  /*  ARROWS
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  | LEFT | DOWN |  UP  | RGHT |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *               | GUI  |  ALT |    / MUSIC /---------------.    .---------------\  Bspc \    | ALT  |  GUI |
   *               |      |      |   /       / Space /  Del  /      \ Enter \  Tab  \  NUM  \   |      |      |
   *               '-------------'  '-------/ MOUSE /       /        \ ARROW \  FUN  \-------'  '-------------'
   *                                       /---------------/          \---------------\
   *                                      /  Ctl  / SHIFT /            \ SHIFT \  Ctl  \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */

  /*  MUSIC
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      | VOL^ |      |      |                                  | SLEP |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      | PREV | PLAY | NEXT |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      | VOLv | MUTE |      |                                  |      |      |      |      |      |      |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *               | GUI  |  ALT |    / MUSIC /---------------.    .---------------\  Bspc \    | ALT  |  GUI |
   *               |      |      |   /       / Space /  Del  /      \ Enter \  Tab  \  NUM  \   |      |      |
   *               '-------------'  '-------/ MOUSE /       /        \ ARROW \  FUN  \-------'  '-------------'
   *                                       /---------------/          \---------------\
   *                                      /  Ctl  / SHIFT /            \ SHIFT \  Ctl  \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */

  /*  MOUSE (NOT DONE)
   * .-----------------------------------------.                                  .-----------------------------------------.
   * |      |      |      |      |      |      |                                  |      |      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  | SCRL^|      |      |      |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  | LEFT | DOWN |  UP  | RGHT |      |      |
   * |------+------+------+------+------+------|                                  |------+------+------+------+------+------|
   * |      |      |      |      |      |      |                                  | SCRLv|      |      |      |      |      |
   * '-----------------------------------------/                                  \-----------------------------------------'
   *               | GUI  |  ALT |    / MUSIC /---------------.    .---------------\  Bspc \    | ALT  |  GUI |
   *               |      |      |   /       / Space /  Del  /      \ Enter \  Tab  \  NUM  \   |      |      |
   *               '-------------'  '-------/ MOUSE /       /        \ ARROW \  FUN  \-------'  '-------------'
   *                                       /---------------/          \---------------\
   *                                      /  Ctl  / SHIFT /            \ SHIFT \  Ctl  \
   *                                     /       /       /              \       \       \
   *                                    '---------------'                '---------------'
   */
