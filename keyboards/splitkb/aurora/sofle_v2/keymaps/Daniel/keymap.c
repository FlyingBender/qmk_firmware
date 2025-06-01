#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif
#include "keymap_german.h"
// #include "gpio.h"

// // turns power LED off
// void keyboard_pre_init_user(void) {
//     gpio_set_pin_output(24);
//     gpio_write_pin_high(24);
// }

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //  left                                                   right
    [0] = LAYOUT(
        DE_CIRC, DE_1, DE_2, DE_3, DE_4, DE_5,                              DE_6, DE_7, DE_8, DE_9, DE_0,     DE_SS,
        QK_GESC, DE_Q, DE_W, DE_E, DE_R, DE_T,                               DE_Y, DE_U, DE_I, DE_O, DE_P,     KC_BSPC,
        KC_TAB, DE_A, DE_S, DE_D, SFT_T(DE_F), DE_G,                        DE_H, SFT_T(DE_J), DE_K, DE_L, DE_ODIA,  DE_ADIA,
        KC_LSFT, DE_Z, DE_X, DE_C, DE_V, DE_B, XXXXXXX,                     XXXXXXX, DE_N, DE_M, DE_COMM, DE_DOT, DE_MINS, KC_RSFT, // hier sind noch die beiden encoder
        KC_LGUI, KC_LALT, KC_LCTL, MO(1), KC_ENT,                           KC_SPC, MO(2), KC_RCTL, KC_RALT, KC_RGUI
    ),
    [1] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                           KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_F12,
        _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                  DE_RABK, DE_SLSH, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
        _______, KC_EQL, KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,       _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
        _______, _______, _______, _______, _______,                        _______, MO(3), KC_GRV, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,               _______, _______, _______, _______, _______, _______,
        _______, KC_INS, KC_PSCR, KC_APP, XXXXXXX, XXXXXXX,                 KC_PGUP, C(KC_LEFT), KC_UP, C(KC_RGHT), C(KC_BSPC), KC_BSPC,
        _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS,               KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_BSPC,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX, _______,      _______, XXXXXXX, KC_HOME, XXXXXXX, KC_END, XXXXXXX, _______,
        _______, _______, _______, MO(3), _______,                          _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX,               XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
        XXXXXXX, RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______
    )
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
