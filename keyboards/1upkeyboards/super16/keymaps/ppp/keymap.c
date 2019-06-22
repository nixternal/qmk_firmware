#include QMK_KEYBOARD_H

enum {
    P1,
    P2,
    P3,
    P4,
    P5,
    P6,
    P7,
    P8,
    P9,
    P10,
    P11,
    P12,
    BF10S,
    BF1M
};

#define Preset1 TD(P1)
#define Preset2 TD(P2)
#define Preset3 TD(P3)
#define Preset4 TD(P4)
#define Preset5 TD(P5)
#define Preset6 TD(P6)
#define Preset7 TD(P7)
#define Preset8 TD(P8)
#define Preset9 TD(P9)
#define Preset10 TD(P10)
#define Preset11 TD(P11)
#define Preset12 TD(P12)
#define BackForward10S TD(BF10S)
#define BackForward1M TD(BF1M)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        Preset1,    Preset2,    Preset3,        Preset4,
        Preset5,    Preset6,    Preset7,        Preset8,
        Preset9,    Preset10,   Preset11,       Preset12,
        KC_SPACE,   KC_ENTER,   BackForward10S, BackForward1M
    )
};

/*-- Preset 1 --*/
void p1_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F1);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F1);
    }
}

void p1_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F1);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F1);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 2 --*/
void p2_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F2);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F2);
    }
}

void p2_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F2);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F2);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 3 --*/
void p3_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F3);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F3);
    }
}

void p3_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F3);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F3);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 4 --*/
void p4_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F4);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F4);
    }
}

void p4_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F4);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F4);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 5 --*/
void p5_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F5);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F5);
    }
}

void p5_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F5);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F5);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 6 --*/
void p6_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F6);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F6);
    }
}

void p6_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F6);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F6);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 7 --*/
void p7_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F7);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F7);
    }
}

void p7_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F7);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F7);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 8 --*/
void p8_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F8);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F8);
    }
}

void p8_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F8);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F8);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 9 --*/
void p9_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F9);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F9);
    }
}

void p9_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F9);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F9);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 10 --*/
void p10_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F10);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F10);
    }
}

void p10_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F10);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F10);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 11 --*/
void p11_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F11);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F11);
    }
}

void p11_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F11);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F11);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Preset 12 --*/
void p12_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Scene
        register_code (KC_LWIN);
        register_code (KC_F12);
    } else if (state->count == 2) {     // Group/Loop
        register_code (KC_LWIN);
        register_code (KC_LALT);
        register_code (KC_F12);
    }
}

void p12_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_F12);
        unregister_code (KC_LWIN);
    } else {
        unregister_code (KC_F12);
        unregister_code (KC_LALT);
        unregister_code (KC_LWIN);
    }
}

/*-- Back/Forward 1 Minute --*/
void BackForward1M_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Back 1
        register_code (KC_UP);
    } else if (state->count == 2) {     // Forward 1
        register_code (KC_DOWN);
    }
}

void BackForward1M_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_UP);
    } else {
        unregister_code (KC_DOWN);
    }
}

/*-- Back/Forward 10 Seconds --*/
void BackForward10S_tap (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {            // Back
        register_code (KC_LEFT);
    } else if (state->count == 2) {     // Forward
        register_code (KC_RIGHT);
    }
}

void BackForward10S_tap_end (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        unregister_code (KC_LEFT);
    } else {
        unregister_code (KC_RIGHT);
    }
}

/*-- TAP DANCE DEFINITIONS (Double Tapping Keys) --*/
qk_tap_dance_action_t tap_dance_actions[] = {
    [P1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p1_tap, p1_tap_end),
    [P2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p2_tap, p2_tap_end),
    [P3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p3_tap, p3_tap_end),
    [P4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p4_tap, p4_tap_end),
    [P5] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p5_tap, p5_tap_end),
    [P6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p6_tap, p6_tap_end),
    [P7] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p7_tap, p7_tap_end),
    [P8] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p8_tap, p8_tap_end),
    [P9] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p9_tap, p9_tap_end),
    [P10] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p10_tap, p10_tap_end),
    [P11] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p11_tap, p11_tap_end),
    [P12] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, p12_tap, p12_tap_end),
    [BF1M] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BackForward1M_tap, BackForward1M_tap_end),
    [BF10S] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, BackForward10S_tap, BackForward10S_tap_end)
};
