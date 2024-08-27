#include <stdint.h>
#include "annepro2.h"
#include "qmk_ap2_led.h"
#include "config.h"

enum anne_pro_layers {
  _BASE_LAYER,
  _DEFAULT_LAYER,
  _FN1_TOGGLE_LAYER,
  _NUM1_LAYER,
  _NUM2_LAYER,
  _MOVE_LAYER,
  _FN1_PRESS_LAYER,
  _FN2_LAYER,
};

 const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_BASE_LAYER] = KEYMAP( /* Base */
    KC_GESC, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, S(KC_8), S(KC_9), S(KC_0), KC_MINS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_DEL,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(_FN2_LAYER, KC_SCLN), KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP,
    MO(_FN1_PRESS_LAYER), KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
),
 [_DEFAULT_LAYER] = KEYMAP( /* Base */
    _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______
),
 [_FN1_TOGGLE_LAYER] = KEYMAP( /* Base */
    _______, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, _______, _______, _______, _______, _______, _______,
    KC_DEL, KC_HOME, KC_UP, KC_END, C(KC_LEFT), _______, _______, KC_HOME, _______, KC_END, KC_BSPC, _______, KC_INS, _______,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______,
    _______, KC_PGUP, KC_PGDN, KC_BSPC, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_CAPS, _______, _______, _______, _______, _______, _______, _______
),
 [_NUM1_LAYER] = KEYMAP( /* Base */
    _______, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, _______, _______, _______, _______, _______, _______,
    _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, _______, _______,
    _______, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______
 ),
 [_NUM2_LAYER] = KEYMAP( /* Base */
    _______, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, _______, _______, _______, _______, _______, _______,
    _______, KC_7, KC_8, KC_9, C(KC_LEFT), _______, _______, KC_HOME, _______, KC_END, KC_BSPC, _______, _______, _______,
    _______, KC_4, KC_5, KC_6, C(KC_RGHT), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______,
    KC_0, KC_1, KC_2, KC_3, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______
 ),
  [_MOVE_LAYER] = KEYMAP( /* Base */
    _______, TO(_BASE_LAYER), TO(_FN1_TOGGLE_LAYER), TO(_NUM1_LAYER), TO(_NUM2_LAYER), TO(_MOVE_LAYER), TO(_DEFAULT_LAYER), _______, _______, _______, _______, _______, KC_AP_LED_OFF, KC_AP_LED_ON,
    _______, G(C(KC_LEFT)), KC_MS_U, G(C(KC_RGHT)), KC_WH_U, _______, _______, _______, KC_AP2_BT_UNPAIR, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_AP2_USB,
    _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_VOLD, KC_VOLU, KC_MPLY, KC_AP_LED_SPEED, KC_AP_LED_NEXT_INTENSITY, KC_AP_LED_PREV_PROFILE, KC_AP_LED_NEXT_PROFILE, KC_ACL0, KC_ACL1, KC_ACL2, KC_BRIU,
    _______, _______, _______, KC_BTN1, _______, KC_VOLD, KC_BRID, KC_VOLU
 ),
 [_FN1_PRESS_LAYER] = KEYMAP( /* Base */     
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
    KC_DEL, KC_HOME, KC_UP, KC_END, C(KC_LEFT), _______, _______, KC_HOME, _______, KC_END, KC_BSPC, _______, KC_INS, KC_BSLS,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_SCLN, _______, _______,
    KC_LSFT, KC_PGUP, KC_PGDN, KC_BSPC, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, TO(_FN1_TOGGLE_LAYER), _______, _______, _______, _______
 ),
 [_FN2_LAYER] = KEYMAP( /* Base */
    KC_GRV, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_ASTR, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_DEL, KC_HOME, KC_UP, KC_END, C(KC_LEFT), _______, _______, KC_HOME, _______, KC_END, _______, KC_BRIU, KC_VOLD, KC_VOLU,
    _______, KC_LEFT, KC_DOWN, KC_RGHT, C(KC_RGHT), _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, KC_BRID, S(KC_ENT),
    KC_LSFT, KC_PGUP, KC_PGDN, KC_BSPC, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______ 
 ),
};
const uint16_t keymaps_size = sizeof(keymaps);
// const key_override_t override_delete_pipe = ko_make_basic(MOD_MASK_SHIFT, KC_DEL, S(KC_BSLS));
// const key_override_t **key_overrides = (const key_override_t *[]){
//     &override_delete_pipe,
//     NULL
// };

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