#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(2),                                          TG(3),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_AUDIO_VOL_UP,
    KC_TAB,         KC_COLN,        KC_C,           KC_Y,           KC_F,           KC_K,           KC_PERC,                                        TT(1),          KC_Z,           KC_L,           KC_I,           KC_U,           KC_MINUS,       KC_AUDIO_VOL_DOWN,
    KC_TAB,         KC_R,           KC_S,           KC_T,           KC_H,           KC_D,           OSL(1),                                                                         KC_TRANSPARENT, KC_M,           KC_N,           KC_A,           KC_E,           KC_O,           KC_QUOTE,       
    KC_RIGHT_CTRL,  KC_COMMA,       KC_V,           KC_G,           KC_P,           KC_B,                                           KC_X,           KC_W,           KC_J,           KC_DOT,         KC_Q,           KC_UP,          
    KC_HYPR,        KC_LEFT_ALT,    KC_TRANSPARENT, MO(4),          MO(2),          KC_LEFT_GUI,                                                                                                    LGUI(KC_Z),     KC_DOWN,        KC_UP,          KC_LEFT,        KC_RIGHT,       KC_DOWN,        
    KC_LEFT_SHIFT,  KC_BSPC,        KC_LEFT_GUI,                    MEH_T(KC_ESCAPE),LT(1, KC_ENTER),KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    TD(DANCE_0),    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, KC_SCLN,        KC_PIPE,        KC_AMPR,        KC_EQUAL,       KC_LCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TILD,        KC_QUES,        KC_SLASH,       KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LABK,        KC_LBRC,        KC_LPRN,        KC_LCBR,        ST_MACRO_0,     KC_TRANSPARENT,                                                                 TO(0),          ST_MACRO_1,     KC_RCBR,        KC_RPRN,        KC_RBRC,        KC_RABK,        KC_GRAVE,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PLUS,        KC_PERC,                                        KC_DLR,         KC_TRANSPARENT, KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    TD(DANCE_1),    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_KP_ASTERISK, KC_7,           KC_8,           KC_9,           KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TO(0),          KC_KP_PLUS,     KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_0,           KC_DOT,         KC_ENTER,       KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    TD(DANCE_2),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_K,           KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    TD(DANCE_3),    LALT(KC_1),     LALT(KC_2),     LALT(KC_3),     LALT(KC_4),     LALT(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_6),     LALT(KC_7),     LALT(KC_8),     LALT(KC_9),     LALT(KC_0),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  LALT(LSFT(KC_O)),LALT(KC_H),     LALT(KC_K),     LALT(KC_L),     LALT(LSFT(KC_M)),KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_COMMA), LALT(KC_V),     LALT(KC_J),     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_W, KC_A, KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_I, KC_S, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_W, KC_S, KC_A, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_2),
    COMBO(combo1, ST_MACRO_3),
    COMBO(combo2, ST_MACRO_4),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255}, {156,255,255} },

    [1] = { {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255}, {72,255,255} },

    [2] = { {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217}, {30,186,217} },

    [3] = { {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208}, {17,164,208} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
    }
    dance_state[2].step = 0;
}
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(25) SS_TAP(X_A) SS_DELAY(25) SS_TAP(X_N)
                      SS_DELAY(25) SS_TAP(X_T) SS_DELAY(25) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(10)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(10)  SS_TAP(X_A)SS_DELAY(10)  SS_TAP(X_S));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}
