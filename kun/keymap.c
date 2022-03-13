#include <stdint.h>
#include "annepro2.h"
#include "qmk_ap2_led.h"
#include "config.h"

enum anne_pro_layers {
  _BASE_LAYER,
  _DEFAULT_LAYER,
  _SHIFT_LAYER,
  _FN1_TOGGLE_LAYER,
  _SHIFT_TOGGLE_LAYER,
  _NUM1_LAYER,
  _NUM2_LAYER,
  _MOVE_LAYER,
  _FN1_PRESS_LAYER,
  _FN2_LAYER,
};

 const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_BASE_LAYER] = KEYMAP( /* Base */
    KC_ESC, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), KC_7, S(KC_8), S(KC_9), S(KC_0), KC_UNDS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_DEL,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, MO(_FN2_LAYER), KC_QUOT, KC_ENT,
    MO(_SHIFT_LAYER), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP,
    LT(_FN1_PRESS_LAYER, KC_CAPS), KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
),
 [_DEFAULT_LAYER] = KEYMAP( /* Base */
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_UNDS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_DEL,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, MO(_FN2_LAYER), KC_QUOT, KC_ENT,
    MO(_SHIFT_LAYER), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP,
    LT(_FN1_PRESS_LAYER, KC_CAPS), KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
),
 [_SHIFT_LAYER] = KEYMAP( /* Base */
    S(KC_GRV), S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_MINS, S(KC_EQL), S(KC_DEL),
    S(KC_TAB), S(KC_Q), S(KC_W), S(KC_E), S(KC_R), S(KC_T), S(KC_Y), S(KC_U), S(KC_I), S(KC_O), S(KC_P), S(KC_LBRC), S(KC_RBRC), S(KC_BSLS),
    _______, S(KC_A), S(KC_S), S(KC_D), S(KC_F), S(KC_G), S(KC_H), S(KC_J), S(KC_K), S(KC_L), S(KC_SCLN), S(KC_QUOT), S(KC_ENT),
    _______, S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B), S(KC_N), S(KC_M), S(KC_COMM), S(KC_DOT), S(KC_SLSH), S(KC_UP),
    _______, _______, _______, TO(_FN1_TOGGLE_LAYER), _______, S(KC_LEFT), S(KC_DOWN), S(KC_RGHT)
 ),
 [_FN1_TOGGLE_LAYER] = KEYMAP( /* Base */
    _______, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, _______, _______, _______, _______, _______, _______,
    KC_DEL, KC_HOME, KC_UP, KC_END, C(KC_LEFT), C(KC_Z), C(KC_C), KC_HOME, KC_UP, KC_END, KC_BSPC, _______, KC_INS, _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,
    TT(_SHIFT_TOGGLE_LAYER), KC_PGUP, KC_PGDN, KC_BSPC, C(KC_V), _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______
),
 [_SHIFT_TOGGLE_LAYER] = KEYMAP( /* Base */
    TG(_SHIFT_TOGGLE_LAYER), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS, S(KC_EQL), _______,
    KC_DEL, S(KC_HOME), S(KC_UP), S(KC_END), S(C(KC_LEFT)), C(KC_Z), C(KC_C), S(KC_HOME), S(KC_UP), S(KC_END), KC_BSPC, _______, _______, _______,
    _______, S(KC_LEFT), S(KC_DOWN), S(KC_RGHT), S(C(KC_RGHT)), _______, _______, S(KC_LEFT), S(KC_DOWN), S(KC_RGHT), S(KC_SCLN), S(KC_QUOT), S(KC_ENT),
    _______, S(KC_PGUP), S(KC_PGDN), KC_BSPC, C(KC_V), _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______
),
 [_NUM1_LAYER] = KEYMAP( /* Base */
    _______, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, _______, _______, _______, KC_MINS, _______, _______,
    _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, _______, _______,
    _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, _______,
    KC_LSFT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______
 ),
 [_NUM2_LAYER] = KEYMAP( /* Base */
    _______, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, _______, _______, _______, KC_MINS, _______, _______,
    _______, KC_7, KC_8, KC_9, _______, _______, C(KC_LEFT), KC_HOME, KC_UP, KC_END, KC_BSPC, _______, _______, _______,
    _______, KC_4, KC_5, KC_6, _______, _______, C(KC_RGHT), KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,
    KC_0, KC_1, KC_2, KC_3, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______
 ),
  [_MOVE_LAYER] = KEYMAP( /* Base */
    _______, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, _______, _______, _______, _______, KC_AP_LED_OFF, KC_AP_LED_ON,
    _______, G(C(KC_LEFT)), KC_MS_U, G(C(KC_RGHT)), KC_WH_U, _______, _______, _______, _______, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, OUT_USB,
    _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_VOLD, KC_VOLU, KC_MPLY, KC_AP_LED_SPEED, KC_AP_LED_NEXT_INTENSITY, KC_AP_LED_PREV_PROFILE, KC_AP_LED_NEXT_PROFILE, KC_ACL0, KC_ACL1, KC_ACL2, KC_BRIU,
    _______, _______, _______, KC_BTN1, _______, KC_VOLD, KC_BRID, KC_VOLU
 ),
 [_FN1_PRESS_LAYER] = KEYMAP( /* Base */
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
    KC_DEL, KC_HOME, KC_UP, KC_END, C(KC_LEFT), C(KC_Z), C(KC_C), KC_HOME, KC_UP, KC_END, KC_BSPC, _______, KC_INS, KC_BSLS,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, C(KC_RGHT), KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, _______, _______,
    KC_LSFT, KC_PGUP, KC_PGDN, KC_BSPC, C(KC_V), _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, TO(_NUM1_LAYER), _______, _______, _______, _______
 ),
 [_FN2_LAYER] = KEYMAP( /* Base */
    KC_GRV, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_ASTR, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_DEL, KC_HOME, KC_UP, KC_END, C(KC_LEFT), C(KC_Z), C(KC_C), KC_HOME, KC_UP, KC_END, _______, KC_BRIU, KC_VOLD, KC_VOLU,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_BRID, S(KC_ENT),
    KC_LSFT, KC_PGUP, KC_PGDN, KC_BSPC, C(KC_V), _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______ 
 ),
};
const uint16_t keymaps_size = sizeof(keymaps);


void matrix_init_user(void) {

}

void matrix_scan_user(void) {
}

// Code to run after initializing the keyboard
void keyboard_post_init_user(void) {
    // Here are two common functions that you can use. For more LED functions, refer to the file "qmk_ap2_led.h"

    // annepro2-shine disables LEDs by default. Uncomment this function to enable them at startup.
    // annepro2LedEnable();

    // Additionally, it also chooses the first LED profile by default. Refer to the "profiles" array in main.c in
    // annepro2-shine to see the order. Replace "i" with the index of your preferred profile. (i.e the RED profile is index 0)
    // annepro2LedSetProfile(i);
}

layer_state_t layer_state_set_user(layer_state_t layer) {
    return layer;
}