#include QMK_KEYBOARD_H
#include "led.h"

#define _L0 0
#define _L1 1
#define _L2 2
#define _L3 3

enum {
    TD_KC_LSFT_CAPS,
    TD_KC_RSFT_CAPS,
};

#define LShftCap TD(TD_KC_LSFT_CAPS)
#define RShftCap TD(TD_KC_RSFT_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Default Layer
 *  ,-----------------------------------------------------------------------------------------.
 *  | ESC |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   BKSPC   |
 *  |-----------------------------------------------------------------------------------------+
 *  |   Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \   |
 *  |-----------------------------------------------------------------------------------------+
 *  |    MO1    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |   ENTER   |
 *  |-----------------------------------------------------------------------------------------+
 *  |  Shift/Caps  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  ?  |  Shift/Caps  |
 *  |-----------------------------------------------------------------------------------------+
 *  | Ctrl | LWin | LAlt |                SPACE                   | RAlt | RWin | MO2  | Ctrl |
 *  '-----------------------------------------------------------------------------------------'
 */
	[_L0] = LAYOUT_60_ansi(
        QK_GESC,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,   KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,   KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,
        MO(1),      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,   KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,
        LShftCap,   KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,   KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    RShftCap,
        KC_LCTL,    KC_LGUI,    KC_LALT,    KC_SPC,     KC_RALT,    KC_RGUI,    MO(2),  KC_RCTL
    ),

/* FN Layer 1 (MO1) 
 *  ,-----------------------------------------------------------------------------------------.
 *  | `~  | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |    DEL    |
 *  |-----------------------------------------------------------------------------------------+
 *  |         |     |     |     |     |     |Home |PgDn |PgUp | END |     |     |     |  INS  |
 *  |-----------------------------------------------------------------------------------------+
 *  |           |     |     |     |     |     |  ←  |  ↓  |  ↑  |  →  |     |     |   PrtSc   |
 *  |-----------------------------------------------------------------------------------------+
 *  |              |     |     |     |     |     |     |Mute |Vol- |Vol+ |     |     ScrLk    |
 *  |-----------------------------------------------------------------------------------------+
 *  |      |      |      |                                        |      |      |MO(3) |Pause |
 *  '-----------------------------------------------------------------------------------------'
 */
	[_L1] = LAYOUT_60_ansi(
        _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_DEL,
        _______,    UC(0x2126), _______,    _______,    _______,    _______,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     _______,    _______,    _______,    KC_INS,
        _______,    _______,    _______,    UC(0x00B0), _______,    _______,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    _______,    _______,    KC_PSCR,
        _______,    _______,    _______,    UC(0x00A9), _______,    _______,    _______,    KC_MUTE,    KC_VOLD,    KC_VOLU,    _______,    KC_SCRL,
        _______,    _______,    _______,    _______,    _______,    _______,    MO(3),      KC_PAUS
    ),

/* FN Layer 2 (MO2)
 *  ,-----------------------------------------------------------------------------------------.
 *  |     |     |     |     |     |     |     |     |     |     |     |     |     |  VOL UP   |
 *  |-----------------------------------------------------------------------------------------+
 *  |         |     |     |     |     |     |     |     |     |     |     |     |     |VOL DN |
 *  |-----------------------------------------------------------------------------------------+
 *  |           |     |     |     |     |     |     |     |     |     |     |     |           |
 *  |-----------------------------------------------------------------------------------------+
 *  |              |     |     |     |     |     |     |     |     |     |     |              |
 *  |-----------------------------------------------------------------------------------------+
 *  |      |      |      |                                        |      |      |      |      |
 *  '-----------------------------------------------------------------------------------------'
 */
	[_L2] = LAYOUT_60_ansi(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_VOLU,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_VOLD,
        MO(3),      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      _______,    KC_NO
    ),

/* FN Layer 3 (MO3) - get her by pressing Caps Lock & FN key
 *  ,-----------------------------------------------------------------------------------------.
 *  |     |     |     |     |     |     |     |     |     |     |     |     |     | EepromRst |
 *  |-----------------------------------------------------------------------------------------+
 *  |         |     |     |     |     |     |     |     |     |     |     |     |     | Reset |
 *  |-----------------------------------------------------------------------------------------+
 *  |           |     |     |     |     |     |     |     |     |     |     |     |           |
 *  |-----------------------------------------------------------------------------------------+
 *  |              |     |     |     |     |     |     |     |     |     |     |              |
 *  |-----------------------------------------------------------------------------------------+
 *  |      |      |      |                                        |      |      |      |      |
 *  '-----------------------------------------------------------------------------------------'
 */
	[_L3] = LAYOUT_60_ansi(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      EE_CLR,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      QK_BOOT,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      _______,    KC_NO
    )
};

bool has_layer_changed = true;

void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    switch (layer) {
        case _L1:
            backlight_set(1);
            break;
        case _L2:
            backlight_set(2);
            break;
        case _L3:
            backlight_set(3);
            break;
        default:
            backlight_set(0);
            break;
    }
}

/* Tap Dance Definitions */
tap_dance_action_t tap_dance_actions[] = {
    // Tap shift for shift, double tap for capslock
    [TD_KC_LSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
    [TD_KC_RSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_RSFT, KC_CAPS),
};
