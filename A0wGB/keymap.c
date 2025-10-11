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
  ST_MACRO_WANT,
  ST_MACRO_IS,
  ST_MACRO_WAS,

  ST_MACRO_ABOUT,
  ST_MACRO_ABOVE,
  ST_MACRO_ADD,
  ST_MACRO_AFTER,
  ST_MACRO_AGAIN,
  ST_MACRO_AIR,
  ST_MACRO_ALL,
  ST_MACRO_ALMOST,
  ST_MACRO_ALONG,
  ST_MACRO_ALSO,
  ST_MACRO_ALWAYS,
  ST_MACRO_AN,
  ST_MACRO_AND,
  ST_MACRO_ANIMAL,
  ST_MACRO_ANOTHER,
  ST_MACRO_ANSWER,
  ST_MACRO_ANY,
  ST_MACRO_ARE,
  ST_MACRO_AROUND,
  ST_MACRO_AS,
  ST_MACRO_ASK,
  ST_MACRO_AT,
  ST_MACRO_AWAY,

  ST_MACRO_BACK,
  ST_MACRO_BE,
  ST_MACRO_BECAUSE,
  ST_MACRO_BEEN,
  ST_MACRO_BEFORE,
  ST_MACRO_BEGAN,
  ST_MACRO_BEGIN,
  ST_MACRO_BELOW,
  ST_MACRO_BETWEEN,
  ST_MACRO_BIG,
  ST_MACRO_BOOK,
  ST_MACRO_BOTH,
  ST_MACRO_BOY,
  ST_MACRO_BUT,
  ST_MACRO_BY,
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(
        KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, KC_5, TG(2), TG(3), KC_6, KC_7, KC_8,
        KC_9, KC_0, KC_AUDIO_VOL_UP, KC_TAB, KC_COLN, KC_C, KC_Y, KC_F, KC_K,
        KC_PERC, TT(1), KC_Z, KC_L, KC_I, KC_U, KC_MINUS, KC_AUDIO_VOL_DOWN,
        KC_TAB, KC_R, KC_S, KC_T, KC_H, KC_D, OSL(1), KC_TRANSPARENT, KC_M,
        KC_N, KC_A, KC_E, KC_O, KC_QUOTE, KC_RIGHT_CTRL, KC_COMMA, KC_V, KC_G,
        KC_P, KC_B, KC_X, KC_W, KC_J, KC_DOT, KC_Q, KC_UP, KC_HYPR, KC_LEFT_ALT,
        KC_TRANSPARENT, MO(4), MO(2), KC_LEFT_GUI, LGUI(KC_Z), KC_DOWN, KC_UP,
        KC_LEFT, KC_RIGHT, KC_DOWN, KC_LEFT_SHIFT, KC_BSPC, KC_LEFT_GUI,
        MEH_T(KC_ESCAPE), LT(1, KC_ENTER), KC_SPACE),
    [1] = LAYOUT_moonlander(
        TD(DANCE_0), KC_F1,
        KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_TRANSPARENT, KC_F7, KC_F8, KC_F9,
        KC_F10, KC_F11, KC_F12, KC_TRANSPARENT, KC_SCLN, KC_PIPE, KC_AMPR,
        KC_EQUAL, KC_LCBR, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TILD, KC_QUES, KC_SLASH, KC_BSLS, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_LABK, KC_LBRC, KC_LPRN, KC_LCBR, ST_MACRO_0, KC_TRANSPARENT, TO(0),
        ST_MACRO_1, KC_RCBR, KC_RPRN, KC_RBRC, KC_RABK, KC_GRAVE,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PLUS,
        KC_PERC, KC_DLR, KC_TRANSPARENT, KC_RCBR, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(
        TD(DANCE_1), KC_F1,
        KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,
        KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_UP, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        TO(0), KC_KP_ASTERISK, KC_7, KC_8, KC_9, KC_SLASH, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT, KC_DOWN, KC_RIGHT,
        KC_TRANSPARENT, KC_TRANSPARENT, TO(0), KC_KP_PLUS, KC_4, KC_5, KC_6,
        KC_KP_MINUS, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_DOWN, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_1, KC_2, KC_3, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_0, KC_0, KC_DOT, KC_ENTER,
        KC_TRANSPARENT, KC_LEFT_SHIFT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_moonlander(
        TD(DANCE_2), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_1, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_LEFT, KC_K, KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_DOWN, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [4] = LAYOUT_moonlander(
        TD(DANCE_3), LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5),
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9),
        LGUI(KC_0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_LEFT_SHIFT, LGUI(KC_MINUS), LGUI(KC_LEFT),
        LGUI(KC_UP), LGUI(KC_RIGHT), LGUI(KC_EQUAL), KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        LALT(KC_F11), LGUI(KC_J), LGUI(KC_DOWN), KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
};

const uint16_t PROGMEM combo0[] = {KC_W, KC_A, KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo1[] = {KC_I, KC_S, COMBO_END};
const uint16_t PROGMEM combo2[] = {KC_W, KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo3[] = {KC_A, KC_B, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo4[] = {KC_A, KC_B, KC_O, KC_V, COMBO_END};
const uint16_t PROGMEM combo5[] = {KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM combo6[] = {KC_A, KC_F, COMBO_END};
const uint16_t PROGMEM combo7[] = {KC_A, KC_G, KC_I, KC_N, COMBO_END};
const uint16_t PROGMEM combo8[] = {KC_A, KC_I, KC_R, COMBO_END};
const uint16_t PROGMEM combo9[] = {KC_A, KC_L, COMBO_END};
const uint16_t PROGMEM combo10[] = {KC_A, KC_L, KC_M, COMBO_END};
const uint16_t PROGMEM combo11[] = {KC_A, KC_G, KC_L, KC_O, COMBO_END};
const uint16_t PROGMEM combo12[] = {KC_A, KC_L, KC_O, KC_S, COMBO_END};
const uint16_t PROGMEM combo13[] = {KC_A, KC_L, KC_W, KC_Y, COMBO_END};
const uint16_t PROGMEM combo14[] = {KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM combo15[] = {KC_A, KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo16[] = {KC_A, KC_I, KC_N, COMBO_END};
const uint16_t PROGMEM combo17[] = {KC_A, KC_H, KC_N, KC_O, COMBO_END};
const uint16_t PROGMEM combo18[] = {KC_A, KC_N, KC_R, KC_S, KC_W, COMBO_END};
const uint16_t PROGMEM combo19[] = {KC_A, KC_N, KC_Y, COMBO_END};
const uint16_t PROGMEM combo20[] = {KC_A, KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM combo21[] = {KC_A, KC_R, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo22[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo23[] = {KC_A, KC_K, KC_S, COMBO_END};
const uint16_t PROGMEM combo24[] = {KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM combo25[] = {KC_A, KC_W, KC_Y, COMBO_END};
const uint16_t PROGMEM combo26[] = {KC_B, KC_Y, COMBO_END};
const uint16_t PROGMEM combo27[] = {KC_B, KC_A, KC_K, COMBO_END};
const uint16_t PROGMEM combo28[] = {KC_B, KC_E, COMBO_END};
const uint16_t PROGMEM combo29[] = {KC_B, KC_C, COMBO_END};
const uint16_t PROGMEM combo30[] = {KC_B, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM combo31[] = {KC_B, KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM combo32[] = {KC_B, KC_E, KC_G, KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM combo33[] = {KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM combo34[] = {KC_B, KC_E, KC_L, KC_O, COMBO_END};
const uint16_t PROGMEM combo35[] = {KC_B, KC_E, KC_T, KC_W, COMBO_END};
const uint16_t PROGMEM combo36[] = {KC_B, KC_I, KC_G, COMBO_END};
const uint16_t PROGMEM combo37[] = {KC_B, KC_O, KC_K, COMBO_END};
const uint16_t PROGMEM combo38[] = {KC_B, KC_O, KC_T, COMBO_END};
const uint16_t PROGMEM combo39[] = {KC_B, KC_O, KC_Y, COMBO_END};
const uint16_t PROGMEM combo40[] = {KC_B, KC_U, KC_T, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_WANT),     COMBO(combo1, ST_MACRO_IS),
    COMBO(combo2, ST_MACRO_WAS),

    COMBO(combo3, ST_MACRO_ABOUT),    COMBO(combo4, ST_MACRO_ABOVE),
    COMBO(combo5, ST_MACRO_ADD),      COMBO(combo6, ST_MACRO_AFTER),
    COMBO(combo7, ST_MACRO_AGAIN),    COMBO(combo8, ST_MACRO_AIR),
    COMBO(combo9, ST_MACRO_ALL),      COMBO(combo10, ST_MACRO_ALMOST),
    COMBO(combo11, ST_MACRO_ALONG),   COMBO(combo12, ST_MACRO_ALSO),
    COMBO(combo13, ST_MACRO_ALWAYS),  COMBO(combo14, ST_MACRO_AN),
    COMBO(combo15, ST_MACRO_AND),     COMBO(combo16, ST_MACRO_ANIMAL),
    COMBO(combo17, ST_MACRO_ANOTHER), COMBO(combo18, ST_MACRO_ANSWER),
    COMBO(combo19, ST_MACRO_ANY),     COMBO(combo20, ST_MACRO_ARE),
    COMBO(combo21, ST_MACRO_AROUND),  COMBO(combo22, ST_MACRO_AS),
    COMBO(combo23, ST_MACRO_ASK),     COMBO(combo24, ST_MACRO_AT),
    COMBO(combo25, ST_MACRO_AWAY),

    COMBO(combo26, ST_MACRO_BY),      COMBO(combo27, ST_MACRO_BACK),
    COMBO(combo28, ST_MACRO_BE),      COMBO(combo29, ST_MACRO_BECAUSE),
    COMBO(combo30, ST_MACRO_BEEN),    COMBO(combo31, ST_MACRO_BEFORE),
    COMBO(combo32, ST_MACRO_BEGAN),   COMBO(combo33, ST_MACRO_BEGIN),
    COMBO(combo34, ST_MACRO_BELOW),   COMBO(combo35, ST_MACRO_BETWEEN),
    COMBO(combo36, ST_MACRO_BIG),     COMBO(combo37, ST_MACRO_BOOK),
    COMBO(combo38, ST_MACRO_BOTH),    COMBO(combo39, ST_MACRO_BOY),
    COMBO(combo40, ST_MACRO_BUT),
};

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb(hsv);
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){f * rgb.r, f * rgb.g, f * rgb.b};
}

void keyboard_post_init_user(void) { rgb_matrix_enable(); }

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {{156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255},
           {156, 255, 255}, {156, 255, 255}, {156, 255, 255}, {156, 255, 255}},

    [1] = {{72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255},
           {72, 255, 255}, {72, 255, 255}, {72, 255, 255}, {72, 255, 255}},

    [2] = {{30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217},
           {30, 186, 217}, {30, 186, 217}, {30, 186, 217}, {30, 186, 217}},

    [3] = {{17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208},
           {17, 164, 208}, {17, 164, 208}, {17, 164, 208}, {17, 164, 208}},

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
        .h = pgm_read_byte(&ledmap[layer][i][0]),
        .s = pgm_read_byte(&ledmap[layer][i][1]),
        .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
      rgb_matrix_set_color(i, 0, 0, 0);
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
    if (state->interrupted || !state->pressed)
      return SINGLE_TAP;
    else
      return SINGLE_HOLD;
  } else if (state->count == 2) {
    if (state->interrupted)
      return DOUBLE_SINGLE_TAP;
    else if (state->pressed)
      return DOUBLE_HOLD;
    else
      return DOUBLE_TAP;
  }
  return MORE_TAPS;
}

void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[0].step = dance_step(state);
  switch (dance_state[0].step) {
  case DOUBLE_TAP:
    layer_move(0);
    break;
  }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[0].step) {}
  dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[1].step = dance_step(state);
  switch (dance_state[1].step) {
  case DOUBLE_TAP:
    layer_move(0);
    break;
  }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[1].step) {}
  dance_state[1].step = 0;
}
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[2].step = dance_step(state);
  switch (dance_state[2].step) {
  case DOUBLE_TAP:
    layer_move(0);
    break;
  }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[2].step) {}
  dance_state[2].step = 0;
}
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
  dance_state[3].step = dance_step(state);
  switch (dance_state[3].step) {
  case DOUBLE_TAP:
    layer_move(0);
    break;
  }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[3].step) {}
  dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] =
        ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
    [DANCE_1] =
        ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
    [DANCE_2] =
        ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),
    [DANCE_3] =
        ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
  case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_EQUAL));
    }
    break;
  case ST_MACRO_WANT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_IS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_S) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_WAS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_S)
                      SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ABOUT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T)
                          SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ABOVE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ADD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AFTER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                          SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AGAIN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N)
                          SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AIR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ALL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ALMOST:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_S)
                          SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10)
                              SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ALONG:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_G)
                          SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ALSO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ALWAYS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_Y)
                          SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10)
                              SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10)
                      SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ANIMAL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_I)
                      SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_A)
                          SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10)
                              SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ANOTHER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                              SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ANSWER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10)
                              SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ANY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ARE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AROUND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_N)
                          SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10)
                              SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10)
                      SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_ASK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_K)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10)
                      SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_AWAY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;

  case ST_MACRO_BACK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_K) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10)
                      SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BECAUSE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_U)
                          SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E)
                              SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BEEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BEFORE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_F)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10)
                              SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BEGAN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_G)
                      SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N)
                          SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BEGIN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_G)
                      SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N)
                          SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BELOW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_W)
                          SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BETWEEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N)
                              SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BIG:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_G)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BOOK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_K) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BOTH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BOY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BUT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_SPACE));
    }
    break;
  case ST_MACRO_BY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10)
                      SS_TAP(X_SPACE));
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
