/* Copyright 2020 Mo-E-lectronics
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

enum layers{
    L0
};

const uint16_t PROGMEM keymaps [][MATRIX_ROWS][MATRIX_COLS] = {
    [L0] = LAYOUT( /* Base Layer */
      KC_KP_0, KC_BACKSPACE, KC_NO, KC_LEFT_ALT, KC_SPACE, KC_RIGHT_CTRL, KC_ESC, KC_NO, KC_PAGE_DOWN,
      KC_KP_2, KC_DOWN, KC_Z, KC_C, KC_B, KC_M, KC_DOT, KC_NO, KC_PAGE_UP,
      KC_KP_5, KC_LEFT, KC_A, KC_D, KC_G, KC_J, KC_L, KC_QUOTE, KC_INSERT,
      KC_KP_8, KC_UP,  KC_Q, KC_E, KC_T, KC_U, KC_O, KC_LEFT_BRACKET, KC_DELETE,
      KC_KP_MINUS, KC_NO, KC_1, KC_3, KC_5, KC_7, KC_9, KC_MINUS, KC_PRINT_SCREEN,
      KC_KP_ASTERISK, KC_NO, KC_F1, KC_F3, KC_F5, KC_F7, KC_F9, KC_F11, KC_PAUSE,
      KC_KP_SLASH, KC_NUM_LOCK, KC_ESCAPE, KC_F2, KC_F4, KC_F6, KC_F8, KC_10, KC_12,
      KC_KP_PLUS, KC_SCROLL-LOCK, KC_GRAVE, KC_2, KC_4, KC_6, KC_8, KC_0, KC_EQUAL,
      KC_KP_7, KC_KP_9, KC_TAB, KC_W, KC_R, KC_Y, KC_I, KC_P, KC_RIGHT_BRACKET,
      KC_KP_4, KC_KP_6, KC_RIGHT, KC_S, KC_F, KC_H, KC_K, KC_SEMICOLON, KC_BACKSLASH,
      KC_KP_1, KC_KP_3, KC_LEFT_SHIFT, KC_X, KC_V, KC_N, KC_COMMA, KC_SLASH, KC_HOME,
      KC_KP_DOT, KC_KP_ENTER, KC_LEFT_CTRL, KC_LEFT-GUI, KC_BACKSPACE, KC_RIGHT_SHIFT, KC_ENTER, KC_CAPS_LOCK, KC_END,
    )
       
};
