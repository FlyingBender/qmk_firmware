// #include "keycodes.h"
#include "keyboard.h"
#include "keycodes.h"
#include "quantum_keycodes.h"
#include "rgb_matrix.h"
#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif
#include "keymap_german.h"
#include "action_util.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //  left                                                                right
    [0] = LAYOUT( // base layout
        DE_CIRC, DE_1, DE_2, DE_3, DE_4, DE_5,                                       DE_6, DE_7, DE_8, DE_9, DE_0, DE_SS,
        QK_GESC, DE_Q, DE_W, DE_E, DE_R, DE_T,                                       DE_Z, DE_U, DE_I, DE_O, DE_P, KC_BSPC,
        KC_TAB, DE_A, DE_S, DE_D, SFT_T(DE_F), DE_G,                                 DE_H, RSFT_T(DE_J), DE_K, DE_L, DE_ODIA,  DE_ADIA,
        KC_LSFT, DE_Y, DE_X, DE_C, DE_V, DE_B, XXXXXXX,                     XXXXXXX, DE_N, DE_M, DE_COMM, DE_DOT, DE_MINS, KC_RSFT, // hier sind noch die beiden encoder
        KC_LGUI, KC_LALT, KC_LCTL, MO(1), LT(4, KC_ENT),                    KC_SPC, MO(2), KC_RCTL, KC_RALT, KC_RGUI
    ),
    [1] = LAYOUT( // braces and stuff
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                                    KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_GRV, DE_1, DE_2, DE_3, DE_4, DE_5,                                        DE_6, DE_7, DE_8, DE_9, DE_0, DE_UDIA,
        DE_QUES, DE_EXLM, DE_AT, DE_HASH, DE_DLR, DE_PERC,                           DE_AMPR, DE_SLSH, DE_ASTR, DE_LPRN, DE_RPRN, DE_PIPE,
        DE_LABK, DE_RABK, DE_MINS, DE_PLUS, DE_LCBR, DE_RCBR, _______,      _______, DE_LBRC, DE_RBRC, DE_EQL, DE_COLN, DE_BSLS, DE_TILD,
                         _______, _______, _______, _______, _______,       _______, MO(3), DE_DQUO, DE_QUOT, DE_ACUT
    ),
    [2] = LAYOUT( // arrows
        _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______,
        _______, KC_INS, KC_PSCR, KC_APP, XXXXXXX, XXXXXXX,                          KC_PGUP, C(KC_LEFT), KC_UP, C(KC_RGHT), C(KC_BSPC), KC_DEL,
        _______, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_CAPS,                        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, KC_BSPC,
        _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX, _______,      _______, XXXXXXX, KC_HOME, XXXXXXX, KC_END, XXXXXXX, _______,
                            _______, _______, _______, MO(3), _______,      _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT( // media and rgb
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX,                        XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
        XXXXXXX, RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
                          _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______
    ),
    [4] = LAYOUT( // numpad
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, KC_CALC,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, KC_P7, KC_P8, KC_P9, KC_KP_PLUS, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, KC_P4, KC_P5, KC_P6, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, KC_P1, KC_P2, KC_P3, XXXXXXX, XXXXXXX,
                          _______, _______, _______, _______, _______,      _______, _______, KC_P0, _______, _______
    ),
    [5] = LAYOUT( // gaming
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_ESC, XXXXXXX, DE_Q, DE_W, DE_E, DE_R,                                    XXXXXXX, XXXXXXX, KC_UP, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, DE_A, DE_S, DE_D, XXXXXXX,                                 XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                          _______, _______, _______, _______, KC_SPC,       KC_ENT, _______, _______, _______, _______
    )

    // TODO layer for anno with lock
};
// clang-format on

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
        case DE_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT)); // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case DE_UNDS:
            return true;

        default:
            return false; // Deactivate Caps Word.
    }
}

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
