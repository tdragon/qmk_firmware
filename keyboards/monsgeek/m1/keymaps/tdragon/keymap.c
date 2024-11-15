/* Copyright (C) 2023 jonylee@hfd
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

enum __layers { BASE, SYMB, FUNC, DIGI, MAC_W, MAC_FN };

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_all ( /* Base */
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        OSL(DIGI),KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,           KC_PGDN,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LALT, KC_LGUI,                   LT(SYMB,KC_SPC),                    KC_RALT, KC_RCTL, MO(FUNC),         KC_LEFT, KC_DOWN, KC_RGHT),


    [SYMB] = LAYOUT_all( /* Symbols */
        _______, _______, _______,    _______,   _______,    _______, _______,    _______,    _______,    _______, _______,    _______, _______, _______, _______,
        _______, _______, _______,    _______,   _______,    _______, _______,    _______,    _______,    _______, _______,    _______, _______, _______, _______,
        _______, KC_QUOT, S(KC_COMM), S(KC_DOT), S(KC_QUOT), KC_DOT,  S(KC_7),    KC_GRV,     KC_LBRC,    KC_RBRC, S(KC_5),    _______, _______, _______, _______,
        KC_CAPS, S(KC_1), S(KC_MINS), S(KC_EQL), KC_EQL,     S(KC_3), S(KC_BSLS), S(KC_SCLN), S(KC_9),    S(KC_0), S(KC_SLSH), _______, _______, _______, _______,
        _______, _______, S(KC_6), KC_SLSH,    S(KC_8),   KC_BSLS,    KC_COMM, S(KC_GRV),  S(KC_4),    S(KC_LBRC), S(KC_RBRC), S(KC_2), _______, _______, _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______, _______, _______),

    [FUNC] = LAYOUT_all( /* Functions */
        _______, KC_F14,  KC_F15,  KC_WSCH, KC_WHOM, KC_MSEL, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,           RGB_MOD,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_SPI, _______,           _______,
        _______, MS_BTN2, MS_UP,   MS_BTN1, MS_WHLD, _______, _______, _______, KC_INS,  _______, KC_PSCR,_______, _______, RGB_MOD,           _______,
        _______, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLU, _______, _______, _______, _______, RGB_TOG, _______, _______, RGB_MOD, RGB_HUI,           _______,
        _______, _______, _______, _______, KC_CALC, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,          _______,  RGB_VAI, _______,
        _______, _______, GU_TOGG,                   _______,                            _______, _______, _______,          RGB_SAD,  RGB_VAD, RGB_SAI),

    [DIGI] = LAYOUT_all( /* Numbers */
        _______, _______, _______,    _______,   _______,    _______, _______,    _______,    _______,    _______, _______,    _______, _______, _______, _______,
        _______, _______, _______,    _______,   _______,    _______, _______,    _______,    _______,    _______, _______,    _______, _______, _______, _______,
        _______, _______, _______,    _______,   _______,    _______, _______,    _______,    _______,    _______, _______,    _______, _______, _______, _______,
        OSL(DIGI),KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______, _______, _______),

    [MAC_W] = LAYOUT_all( /* WASD/↑←↓→ */
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_W,    _______,
        _______, _______, _______,                   _______,                            _______, MO(MAC_FN), _______,          KC_A,    KC_S,    KC_D),

    [MAC_FN] = LAYOUT_all( /* FN */
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_DEL,            RGB_MOD,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_SPI, _______,           _______,
        _______, _______,TG(MAC_W),_______, _______, _______, _______, _______, KC_INS,  DF(BASE),KC_PSCR,_______, _______, RGB_MOD,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, _______, _______, RGB_MOD, RGB_HUI,           _______,
        _______, _______, _______, _______, KC_CALC, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,          _______,  RGB_VAI, _______,
        _______, _______, _______,                   _______,                            _______, _______, _______,          RGB_SAD,  RGB_VAD, RGB_SAI)
};
// clang-format off
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [SYMB] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [FUNC] = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) },
    [DIGI] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [MAC_W] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [MAC_FN] = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD) }
};
#endif

void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    switch(get_highest_layer(layer_state|default_layer_state)) {
        case DIGI:
            for (uint8_t i = led_min; i < led_max; i++) {
                rgb_matrix_set_color(i, RGB_PURPLE);
            }
            return true;
        case FUNC:
            for (uint8_t i = led_min; i < led_max; i++) {
                rgb_matrix_set_color(i, RGB_TEAL);
            }
            return true;
        case SYMB:
            for (uint8_t i = led_min; i < led_max; i++) {
                rgb_matrix_set_color(i, RGB_GREEN);
            }
            return true;

    }
    return false;
}

