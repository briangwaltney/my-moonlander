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

  ST_MACRO_CALLED,
  ST_MACRO_CAME,
  ST_MACRO_CAN,
  ST_MACRO_CAR,
  ST_MACRO_CHANGE,
  ST_MACRO_CHILDREN,
  ST_MACRO_CITY,
  ST_MACRO_COME,
  ST_MACRO_COULD,
  ST_MACRO_COUNTRY,
  ST_MACRO_CUT,

  ST_MACRO_DAY,
  ST_MACRO_DID,
  ST_MACRO_DIDNT,
  ST_MACRO_DIFFERENT,
  ST_MACRO_DO,
  ST_MACRO_DOES,
  ST_MACRO_DONT,
  ST_MACRO_DONE,
  ST_MACRO_DOOR,
  ST_MACRO_DOWN,
  ST_MACRO_DURING,

  ST_MACRO_EACH,
  ST_MACRO_EARTH,
  ST_MACRO_END,
  ST_MACRO_ENOUGH,
  ST_MACRO_EVEN,
  ST_MACRO_EVER,
  ST_MACRO_EVERY,
  ST_MACRO_EXAMPLE,

  ST_MACRO_FACE,
  ST_MACRO_FAMILY,
  ST_MACRO_FAR,
  ST_MACRO_FATHER,
  ST_MACRO_FEET,
  ST_MACRO_FEW,
  ST_MACRO_FIND,
  ST_MACRO_FIRST,
  ST_MACRO_FISH,
  ST_MACRO_FIVE,
  ST_MACRO_FOOD,
  ST_MACRO_FOR,
  ST_MACRO_FORM,
  ST_MACRO_FOUND,
  ST_MACRO_FOUR,
  ST_MACRO_FROM,

  ST_MACRO_GET,
  ST_MACRO_GIVE,
  ST_MACRO_GO,
  ST_MACRO_GOING,
  ST_MACRO_GOOD,
  ST_MACRO_GOT,
  ST_MACRO_GREAT,
  ST_MACRO_GROUP,

  ST_MACRO_HAD,
  ST_MACRO_HALF,
  ST_MACRO_HAND,
  ST_MACRO_HARD,
  ST_MACRO_HAS,
  ST_MACRO_HAVE,
  ST_MACRO_HE,
  ST_MACRO_HEAD,
  ST_MACRO_HEAR,
  ST_MACRO_HEARD,
  ST_MACRO_HELP,
  ST_MACRO_HER,
  ST_MACRO_HERE,
  ST_MACRO_HIGH,
  ST_MACRO_HIM,
  ST_MACRO_HIMSELF,
  ST_MACRO_HIS,
  ST_MACRO_HOME,
  ST_MACRO_HOUSE,
  ST_MACRO_HOW,
  ST_MACRO_HOWEVER,

  ST_MACRO_IM,
  ST_MACRO_IF,
  ST_MACRO_IMPORTANT,
  ST_MACRO_IN,
  ST_MACRO_INTO,
  ST_MACRO_IT,
  ST_MACRO_ITS,

  ST_MACRO_JUST,

  ST_MACRO_KEEP,
  ST_MACRO_KIND,
  ST_MACRO_KNEW,
  ST_MACRO_KNOW,

  ST_MACRO_LAND,
  ST_MACRO_LARGE,
  ST_MACRO_LAST,
  ST_MACRO_LATER,
  ST_MACRO_LEARN,
  ST_MACRO_LEFT,
  ST_MACRO_LET,
  ST_MACRO_LIFE,
  ST_MACRO_LIGHT,
  ST_MACRO_LIKE,
  ST_MACRO_LINE,
  ST_MACRO_LITTLE,
  ST_MACRO_LIVE,
  ST_MACRO_LONG,
  ST_MACRO_LOOK,

  ST_MACRO_MADE,
  ST_MACRO_MAKE,
  ST_MACRO_MAN,
  ST_MACRO_MANY,
  ST_MACRO_MAY,
  ST_MACRO_ME,
  ST_MACRO_MEN,
  ST_MACRO_MIGHT,
  ST_MACRO_MONEY,
  ST_MACRO_MORE,
  ST_MACRO_MORNING,
  ST_MACRO_MOST,
  ST_MACRO_MOTHER,
  ST_MACRO_MOVE,
  ST_MACRO_MUCH,
  ST_MACRO_MUST,
  ST_MACRO_MY,

  ST_MACRO_NAME,
  ST_MACRO_NEAR,
  ST_MACRO_NEED,
  ST_MACRO_NEVER,
  ST_MACRO_NEW,
  ST_MACRO_NEXT,
  ST_MACRO_NIGHT,
  ST_MACRO_NO,
  ST_MACRO_NOT,
  ST_MACRO_NOW,
  ST_MACRO_NUMBER,

  ST_MACRO_OF,
  ST_MACRO_OFF,
  ST_MACRO_OFTEN,
  ST_MACRO_OLD,
  ST_MACRO_ON,
  ST_MACRO_ONCE,
  ST_MACRO_ONE,
  ST_MACRO_ONLY,
  ST_MACRO_OR,
  ST_MACRO_OTHER,
  ST_MACRO_OUR,
  ST_MACRO_OUT,
  ST_MACRO_OVER,
  ST_MACRO_OWN,

  ST_MACRO_PAGE,
  ST_MACRO_PAPER,
  ST_MACRO_PART,
  ST_MACRO_PEOPLE,
  ST_MACRO_PICTURE,
  ST_MACRO_PLACE,
  ST_MACRO_PLANTS,
  ST_MACRO_PLAY,
  ST_MACRO_POINT,
  ST_MACRO_PUT,

  ST_MACRO_READ,
  ST_MACRO_RED,
  ST_MACRO_RIGHT,
  ST_MACRO_ROOM,

  ST_MACRO_SAID,
  ST_MACRO_SAME,
  ST_MACRO_SAW,
  ST_MACRO_SAY,
  ST_MACRO_SCHOOL,
  ST_MACRO_SEA,
  ST_MACRO_SECOND,
  ST_MACRO_SEE,
  ST_MACRO_SEEN,
  ST_MACRO_SENTENCE,
  ST_MACRO_SET,
  ST_MACRO_SEVERAL,
  ST_MACRO_SHE,
  ST_MACRO_SHOULD,
  ST_MACRO_SHOW,
  ST_MACRO_SIDE,
  ST_MACRO_SINCE,
  ST_MACRO_SMALL,
  ST_MACRO_SO,
  ST_MACRO_SOME,
  ST_MACRO_SOMETHING,
  ST_MACRO_SOON,
  ST_MACRO_SOUND,
  ST_MACRO_STILL,
  ST_MACRO_STORY,
  ST_MACRO_STUDY,
  ST_MACRO_SUCH,
  ST_MACRO_SUN,
  ST_MACRO_SURE,

  ST_MACRO_TAKE,
  ST_MACRO_TELL,
  ST_MACRO_THAN,
  ST_MACRO_THAT,
  ST_MACRO_THE,
  ST_MACRO_THEIR,
  ST_MACRO_THEM,
  ST_MACRO_THEN,
  ST_MACRO_THERE,
  ST_MACRO_THESE,
  ST_MACRO_THEY,
  ST_MACRO_THING,
  ST_MACRO_THINK,
  ST_MACRO_THIS,
  ST_MACRO_THOSE,
  ST_MACRO_THOUGHT,
  ST_MACRO_THREE,
  ST_MACRO_THROUGH,
  ST_MACRO_TIME,
  ST_MACRO_TO,
  ST_MACRO_TODAY,
  ST_MACRO_TOGETHER,
  ST_MACRO_TOLD,
  ST_MACRO_TOO,
  ST_MACRO_TOOK,
  ST_MACRO_TOP,
  ST_MACRO_TOWARD,
  ST_MACRO_TRUE,
  ST_MACRO_TRY,
  ST_MACRO_TURN,
  ST_MACRO_TURNED,
  ST_MACRO_TWO,

  ST_MACRO_UNDER,
  ST_MACRO_UNTIL,
  ST_MACRO_UP,
  ST_MACRO_UPON,
  ST_MACRO_US,
  ST_MACRO_USE,
  ST_MACRO_USUALLY,

  ST_MACRO_VERY,

  ST_MACRO_WATER,
  ST_MACRO_WAY,
  ST_MACRO_WE,
  ST_MACRO_WELL,
  ST_MACRO_WENT,
  ST_MACRO_WERE,
  ST_MACRO_WHAT,
  ST_MACRO_WHEN,
  ST_MACRO_WHERE,
  ST_MACRO_WHICH,
  ST_MACRO_WHILE,
  ST_MACRO_WHITE,
  ST_MACRO_WHO,
  ST_MACRO_WHOLE,
  ST_MACRO_WHY,
  ST_MACRO_WILL,
  ST_MACRO_WITH,
  ST_MACRO_WITHOUT,
  ST_MACRO_WORDS,
  ST_MACRO_WORK,
  ST_MACRO_WORLD,
  ST_MACRO_WOULD,
  ST_MACRO_WRITE,

  ST_MACRO_YEAR,
  ST_MACRO_YOU,
  ST_MACRO_YOUNG,
  ST_MACRO_YOUR,
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
        MT(MOD_RCTL, KC_TAB), KC_R, KC_S, KC_T, KC_H, KC_D, OSL(1),
        KC_TRANSPARENT, KC_M, KC_N, KC_A, KC_E, KC_O, KC_QUOTE, KC_RIGHT_CTRL,
        KC_COMMA, KC_V, KC_G, KC_P, KC_B, KC_X, KC_W, KC_J, KC_DOT, KC_Q, KC_UP,
        KC_HYPR, KC_LEFT_ALT, KC_TRANSPARENT, MO(4), MO(2), KC_LEFT_GUI,
        LCTL(KC_Z), KC_DOWN, KC_UP, KC_LEFT, KC_RIGHT, KC_DOWN, KC_LEFT_SHIFT,
        KC_BSPC, KC_LEFT_GUI, MEH_T(KC_ESCAPE), LT(1, KC_ENTER), KC_SPACE),
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
        KC_TRANSPARENT, LGUI(KC_6), LGUI(KC_7), LGUI(KC_UP), LGUI(KC_9),
        LGUI(LSHIFT(KC_EQUAL)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_LEFT_SHIFT, LGUI(KC_MINUS), LGUI(KC_LEFT),
        LGUI(KC_DOWN), LGUI(KC_RIGHT), LGUI(KC_EQUAL), KC_TRANSPARENT,
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

const uint16_t PROGMEM combo41[] = {KC_C, KC_A, KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo42[] = {KC_C, KC_A, KC_M, KC_E, COMBO_END};
const uint16_t PROGMEM combo43[] = {KC_C, KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM combo44[] = {KC_C, KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM combo45[] = {KC_C, KC_H, KC_A,     KC_N,
                                    KC_G, KC_E, COMBO_END};
const uint16_t PROGMEM combo46[] = {KC_C, KC_H, KC_I, KC_L,     KC_D,
                                    KC_R, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM combo47[] = {KC_C, KC_I, KC_T, KC_Y, COMBO_END};
const uint16_t PROGMEM combo48[] = {KC_C, KC_O, KC_M, KC_E, COMBO_END};
const uint16_t PROGMEM combo49[] = {KC_C, KC_O, KC_U, KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo50[] = {KC_C, KC_O, KC_U, KC_N,
                                    KC_T, KC_R, KC_Y, COMBO_END};
const uint16_t PROGMEM combo51[] = {KC_C, KC_U, KC_T, COMBO_END};

const uint16_t PROGMEM combo52[] = {KC_D, KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM combo53[] = {KC_D, KC_I, KC_T, COMBO_END};
const uint16_t PROGMEM combo54[] = {KC_D, KC_I, KC_D, KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo55[] = {KC_D, KC_I, KC_F, COMBO_END};
const uint16_t PROGMEM combo56[] = {KC_D, KC_O, COMBO_END};
const uint16_t PROGMEM combo57[] = {KC_D, KC_O, KC_E, KC_S, COMBO_END};
const uint16_t PROGMEM combo58[] = {KC_D, KC_O, KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo59[] = {KC_D, KC_O, KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM combo60[] = {KC_D, KC_O, KC_R, COMBO_END};
const uint16_t PROGMEM combo61[] = {KC_D, KC_O, KC_W, KC_N, COMBO_END};
const uint16_t PROGMEM combo62[] = {KC_D, KC_U, KC_R,     KC_I,
                                    KC_N, KC_G, COMBO_END};

const uint16_t PROGMEM combo63[] = {KC_E, KC_A, KC_C, KC_H, COMBO_END};
const uint16_t PROGMEM combo64[] = {KC_E, KC_A, KC_R, KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM combo65[] = {KC_E, KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo66[] = {KC_E, KC_N, KC_O,     KC_U,
                                    KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM combo67[] = {KC_E, KC_V, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM combo68[] = {KC_E, KC_V, KC_R, COMBO_END};
const uint16_t PROGMEM combo69[] = {KC_E, KC_V, KC_E, KC_R, KC_Y, COMBO_END};
const uint16_t PROGMEM combo70[] = {KC_E, KC_X, KC_P, COMBO_END};

const uint16_t PROGMEM combo71[] = {KC_F, KC_A, KC_C, KC_E, COMBO_END};
const uint16_t PROGMEM combo72[] = {KC_F, KC_A, KC_M, COMBO_END};
const uint16_t PROGMEM combo73[] = {KC_F, KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM combo74[] = {KC_F, KC_A, KC_T,     KC_H,
                                    KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo75[] = {KC_F, KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM combo76[] = {KC_F, KC_E, KC_W, COMBO_END};
const uint16_t PROGMEM combo77[] = {KC_F, KC_I, KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo78[] = {KC_F, KC_I, KC_R, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM combo79[] = {KC_F, KC_I, KC_S, KC_H, COMBO_END};
const uint16_t PROGMEM combo80[] = {KC_F, KC_I, KC_V, KC_E, COMBO_END};
const uint16_t PROGMEM combo81[] = {KC_F, KC_O, KC_D, COMBO_END};
const uint16_t PROGMEM combo82[] = {KC_F, KC_O, KC_R, COMBO_END};
const uint16_t PROGMEM combo83[] = {KC_F, KC_O, KC_R, KC_M, COMBO_END};
const uint16_t PROGMEM combo84[] = {KC_F, KC_O, KC_U, KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo85[] = {KC_F, KC_O, KC_U, KC_R, COMBO_END};
const uint16_t PROGMEM combo86[] = {KC_F, KC_R, KC_O, KC_M, COMBO_END};

const uint16_t PROGMEM combo87[] = {KC_G, KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM combo88[] = {KC_G, KC_I, KC_V, KC_E, COMBO_END};
const uint16_t PROGMEM combo89[] = {KC_G, KC_O, COMBO_END};
const uint16_t PROGMEM combo90[] = {KC_G, KC_O, KC_I, KC_N, KC_G, COMBO_END};
const uint16_t PROGMEM combo91[] = {KC_G, KC_O, KC_O, KC_D, COMBO_END};
const uint16_t PROGMEM combo92[] = {KC_G, KC_O, KC_T, COMBO_END};
const uint16_t PROGMEM combo93[] = {KC_G, KC_R, KC_E, KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM combo94[] = {KC_G, KC_R, KC_O, KC_U, KC_P, COMBO_END};

const uint16_t PROGMEM combo95[] = {KC_H, KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM combo96[] = {KC_H, KC_A, KC_L, KC_F, COMBO_END};
const uint16_t PROGMEM combo97[] = {KC_H, KC_A, KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo98[] = {KC_H, KC_A, KC_R, KC_D, COMBO_END};
const uint16_t PROGMEM combo99[] = {KC_H, KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo100[] = {KC_H, KC_A, KC_V, KC_E, COMBO_END};
const uint16_t PROGMEM combo101[] = {KC_H, KC_E, COMBO_END};
const uint16_t PROGMEM combo102[] = {KC_H, KC_E, KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM combo103[] = {KC_H, KC_E, KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM combo104[] = {KC_H, KC_E, KC_A, KC_R, KC_D, COMBO_END};
const uint16_t PROGMEM combo105[] = {KC_H, KC_E, KC_L, KC_P, COMBO_END};
const uint16_t PROGMEM combo106[] = {KC_H, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo107[] = {KC_H, KC_E, KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM combo108[] = {KC_H, KC_I, KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM combo109[] = {KC_H, KC_I, KC_M, COMBO_END};
const uint16_t PROGMEM combo110[] = {KC_H, KC_I, KC_M, KC_S,
                                     KC_E, KC_L, KC_F, COMBO_END};
const uint16_t PROGMEM combo111[] = {KC_H, KC_I, KC_S, COMBO_END};
const uint16_t PROGMEM combo112[] = {KC_H, KC_O, KC_M, KC_E, COMBO_END};
const uint16_t PROGMEM combo113[] = {KC_H, KC_O, KC_U, KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM combo114[] = {KC_H, KC_O, KC_W, COMBO_END};
const uint16_t PROGMEM combo115[] = {KC_H, KC_O, KC_V, KC_E, KC_R, COMBO_END};

const uint16_t PROGMEM combo116[] = {KC_I, KC_M, COMBO_END};
const uint16_t PROGMEM combo117[] = {KC_I, KC_F, COMBO_END};
const uint16_t PROGMEM combo118[] = {KC_I, KC_M, KC_P, KC_T, COMBO_END};
const uint16_t PROGMEM combo119[] = {KC_I, KC_N, COMBO_END};
const uint16_t PROGMEM combo120[] = {KC_I, KC_N, KC_T, KC_O, COMBO_END};
const uint16_t PROGMEM combo121[] = {KC_I, KC_T, COMBO_END};
const uint16_t PROGMEM combo122[] = {KC_I, KC_T, KC_S, COMBO_END};

const uint16_t PROGMEM combo123[] = {KC_J, KC_U, KC_S, KC_T, COMBO_END};

const uint16_t PROGMEM combo124[] = {KC_K, KC_E, KC_P, COMBO_END};
const uint16_t PROGMEM combo125[] = {KC_K, KC_I, KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo126[] = {KC_K, KC_N, KC_E, KC_W, COMBO_END};
const uint16_t PROGMEM combo127[] = {KC_K, KC_N, KC_O, KC_W, COMBO_END};

const uint16_t PROGMEM combo128[] = {KC_L, KC_A, KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo129[] = {KC_L, KC_A, KC_R, KC_G, KC_E, COMBO_END};
const uint16_t PROGMEM combo130[] = {KC_L, KC_A, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM combo131[] = {KC_L, KC_A, KC_T, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo132[] = {KC_L, KC_E, KC_A, KC_R, KC_N, COMBO_END};
const uint16_t PROGMEM combo133[] = {KC_L, KC_E, KC_F, KC_T, COMBO_END};
const uint16_t PROGMEM combo134[] = {KC_L, KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM combo135[] = {KC_L, KC_I, KC_F, KC_E, COMBO_END};
const uint16_t PROGMEM combo136[] = {KC_L, KC_I, KC_G, KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM combo137[] = {KC_L, KC_I, KC_K, KC_E, COMBO_END};
const uint16_t PROGMEM combo138[] = {KC_L, KC_I, KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM combo139[] = {KC_L, KC_I, KC_T,     KC_T,
                                     KC_L, KC_E, COMBO_END};
const uint16_t PROGMEM combo140[] = {KC_L, KC_I, KC_V, KC_E, COMBO_END};
const uint16_t PROGMEM combo141[] = {KC_L, KC_O, KC_N, KC_G, COMBO_END};
const uint16_t PROGMEM combo142[] = {KC_L, KC_O, KC_K, COMBO_END};

const uint16_t PROGMEM combo143[] = {KC_M, KC_A, KC_D, KC_E, COMBO_END};
const uint16_t PROGMEM combo144[] = {KC_M, KC_A, KC_K, KC_E, COMBO_END};
const uint16_t PROGMEM combo145[] = {KC_M, KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM combo146[] = {KC_M, KC_A, KC_N, KC_Y, COMBO_END};
const uint16_t PROGMEM combo147[] = {KC_M, KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM combo148[] = {KC_M, KC_E, COMBO_END};
const uint16_t PROGMEM combo149[] = {KC_M, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM combo150[] = {KC_M, KC_I, KC_G, KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM combo151[] = {KC_M, KC_O, KC_N, KC_E, KC_Y, COMBO_END};
const uint16_t PROGMEM combo152[] = {KC_M, KC_O, KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM combo153[] = {KC_M, KC_O, KC_R, KC_N,
                                     KC_I, KC_N, KC_G, COMBO_END};
const uint16_t PROGMEM combo154[] = {KC_M, KC_O, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM combo155[] = {KC_M, KC_O, KC_T,     KC_H,
                                     KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo156[] = {KC_M, KC_O, KC_V, KC_E, COMBO_END};
const uint16_t PROGMEM combo157[] = {KC_M, KC_U, KC_C, KC_H, COMBO_END};
const uint16_t PROGMEM combo158[] = {KC_M, KC_U, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM combo159[] = {KC_M, KC_Y, COMBO_END};

const uint16_t PROGMEM combo160[] = {KC_N, KC_A, KC_M, KC_E, COMBO_END};
const uint16_t PROGMEM combo161[] = {KC_N, KC_E, KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM combo162[] = {KC_N, KC_E, KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combo163[] = {KC_N, KC_V, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo164[] = {KC_N, KC_E, KC_W, COMBO_END};
const uint16_t PROGMEM combo165[] = {KC_N, KC_E, KC_X, KC_T, COMBO_END};
const uint16_t PROGMEM combo166[] = {KC_N, KC_I, KC_G, KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM combo167[] = {KC_N, KC_O, COMBO_END};
const uint16_t PROGMEM combo168[] = {KC_N, KC_O, KC_T, COMBO_END};
const uint16_t PROGMEM combo169[] = {KC_N, KC_O, KC_W, COMBO_END};
const uint16_t PROGMEM combo170[] = {KC_N, KC_U, KC_M,     KC_B,
                                     KC_E, KC_R, COMBO_END};

const uint16_t PROGMEM combo171[] = {KC_O, KC_F, COMBO_END};
const uint16_t PROGMEM combo172[] = {KC_O, KC_F, KC_Y, COMBO_END};
const uint16_t PROGMEM combo173[] = {KC_O, KC_F, KC_T, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM combo174[] = {KC_O, KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo175[] = {KC_O, KC_N, COMBO_END};
const uint16_t PROGMEM combo176[] = {KC_O, KC_N, KC_C, KC_E, COMBO_END};
const uint16_t PROGMEM combo177[] = {KC_O, KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM combo178[] = {KC_O, KC_N, KC_L, KC_Y, COMBO_END};
const uint16_t PROGMEM combo179[] = {KC_O, KC_R, COMBO_END};
const uint16_t PROGMEM combo180[] = {KC_O, KC_T, KC_H, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo181[] = {KC_O, KC_U, KC_R, COMBO_END};
const uint16_t PROGMEM combo182[] = {KC_O, KC_U, KC_T, COMBO_END};
const uint16_t PROGMEM combo183[] = {KC_O, KC_V, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo184[] = {KC_O, KC_W, KC_N, COMBO_END};

const uint16_t PROGMEM combo185[] = {KC_P, KC_A, KC_G, KC_E, COMBO_END};
const uint16_t PROGMEM combo186[] = {KC_P, KC_A, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo187[] = {KC_P, KC_A, KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM combo188[] = {KC_P, KC_E, KC_O,     KC_P,
                                     KC_L, KC_E, COMBO_END};
const uint16_t PROGMEM combo189[] = {KC_P, KC_I, KC_C, KC_T, COMBO_END};
const uint16_t PROGMEM combo190[] = {KC_P, KC_L, KC_A, KC_C, KC_E, COMBO_END};
const uint16_t PROGMEM combo191[] = {KC_P, KC_L, KC_A,     KC_N,
                                     KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM combo192[] = {KC_P, KC_L, KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM combo193[] = {KC_P, KC_O, KC_I, KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo194[] = {KC_P, KC_U, KC_T, COMBO_END};

const uint16_t PROGMEM combo195[] = {KC_R, KC_E, KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM combo196[] = {KC_R, KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combo197[] = {KC_R, KC_I, KC_G, KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM combo198[] = {KC_R, KC_O, KC_M, COMBO_END};

const uint16_t PROGMEM combo199[] = {KC_S, KC_A, KC_I, KC_D, COMBO_END};
const uint16_t PROGMEM combo200[] = {KC_S, KC_A, KC_M, KC_E, COMBO_END};
const uint16_t PROGMEM combo201[] = {KC_S, KC_A, KC_W, COMBO_END};
const uint16_t PROGMEM combo202[] = {KC_S, KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM combo203[] = {KC_S, KC_C, KC_H, KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM combo204[] = {KC_S, KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM combo205[] = {KC_S, KC_E, KC_C,     KC_O,
                                     KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo206[] = {KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM combo207[] = {KC_S, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM combo208[] = {KC_S, KC_E, KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo209[] = {KC_S, KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM combo210[] = {KC_S, KC_E, KC_V, KC_E,
                                     KC_R, KC_A, KC_L, COMBO_END};
const uint16_t PROGMEM combo211[] = {KC_S, KC_H, KC_E, COMBO_END};
const uint16_t PROGMEM combo212[] = {KC_S, KC_H, KC_O,     KC_U,
                                     KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo213[] = {KC_S, KC_H, KC_O, KC_W, COMBO_END};
const uint16_t PROGMEM combo214[] = {KC_S, KC_I, KC_D, KC_E, COMBO_END};
const uint16_t PROGMEM combo215[] = {KC_S, KC_I, KC_N, KC_C, KC_E, COMBO_END};
const uint16_t PROGMEM combo216[] = {KC_S, KC_M, KC_A, KC_L, COMBO_END};
const uint16_t PROGMEM combo217[] = {KC_S, KC_O, COMBO_END};
const uint16_t PROGMEM combo218[] = {KC_S, KC_O, KC_M, KC_E, COMBO_END};
const uint16_t PROGMEM combo219[] = {KC_S, KC_O, KC_M, KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM combo220[] = {KC_S, KC_O, KC_N, COMBO_END};
const uint16_t PROGMEM combo221[] = {KC_S, KC_O, KC_U, KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo222[] = {KC_S, KC_T, KC_I, KC_L, COMBO_END};
const uint16_t PROGMEM combo223[] = {KC_S, KC_T, KC_O, KC_R, KC_Y, COMBO_END};
const uint16_t PROGMEM combo224[] = {KC_S, KC_T, KC_U, KC_D, KC_Y, COMBO_END};
const uint16_t PROGMEM combo225[] = {KC_S, KC_U, KC_C, KC_H, COMBO_END};
const uint16_t PROGMEM combo226[] = {KC_S, KC_U, KC_N, COMBO_END};
const uint16_t PROGMEM combo227[] = {KC_S, KC_U, KC_R, KC_E, COMBO_END};

const uint16_t PROGMEM combo228[] = {KC_T, KC_A, KC_K, KC_E, COMBO_END};
const uint16_t PROGMEM combo229[] = {KC_T, KC_E, KC_L, COMBO_END};
const uint16_t PROGMEM combo230[] = {KC_T, KC_H, KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM combo231[] = {KC_T, KC_H, KC_A, COMBO_END};
const uint16_t PROGMEM combo232[] = {KC_T, KC_H, KC_E, COMBO_END};
const uint16_t PROGMEM combo233[] = {KC_T, KC_H, KC_E, KC_I, KC_R, COMBO_END};
const uint16_t PROGMEM combo234[] = {KC_T, KC_H, KC_E, KC_M, COMBO_END};
const uint16_t PROGMEM combo235[] = {KC_T, KC_H, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM combo236[] = {KC_T, KC_H, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo237[] = {KC_T, KC_H, KC_E, KC_S, COMBO_END};
const uint16_t PROGMEM combo238[] = {KC_T, KC_H, KC_E, KC_Y, COMBO_END};
const uint16_t PROGMEM combo239[] = {KC_T, KC_H, KC_I, KC_N, KC_G, COMBO_END};
const uint16_t PROGMEM combo240[] = {KC_T, KC_H, KC_I, KC_N, KC_K, COMBO_END};
const uint16_t PROGMEM combo241[] = {KC_T, KC_H, KC_I, KC_S, COMBO_END};
const uint16_t PROGMEM combo242[] = {KC_T, KC_H, KC_O, KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM combo243[] = {KC_T, KC_H, KC_O,     KC_U,
                                     KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM combo244[] = {KC_T, KC_H, KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM combo245[] = {KC_T, KC_H, KC_R, KC_O,
                                     KC_U, KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM combo246[] = {KC_T, KC_I, KC_M, KC_E, COMBO_END};
const uint16_t PROGMEM combo247[] = {KC_T, KC_O, COMBO_END};
const uint16_t PROGMEM combo248[] = {KC_T, KC_O, KC_D, KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM combo249[] = {KC_T, KC_O, KC_G, KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM combo250[] = {KC_T, KC_O, KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo251[] = {KC_T, KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM combo252[] = {KC_T, KC_O, KC_K, COMBO_END};
const uint16_t PROGMEM combo253[] = {KC_T, KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo254[] = {KC_T, KC_O, KC_W,     KC_A,
                                     KC_R, KC_D, COMBO_END};
const uint16_t PROGMEM combo255[] = {KC_T, KC_R, KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM combo256[] = {KC_T, KC_R, KC_Y, COMBO_END};
const uint16_t PROGMEM combo257[] = {KC_T, KC_U, KC_R, KC_N, COMBO_END};
const uint16_t PROGMEM combo258[] = {KC_T, KC_U, KC_R,     KC_N,
                                     KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combo259[] = {KC_T, KC_W, KC_O, COMBO_END};

const uint16_t PROGMEM combo260[] = {KC_U, KC_N, KC_D, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo261[] = {KC_U, KC_N, KC_T, KC_I, KC_L, COMBO_END};
const uint16_t PROGMEM combo262[] = {KC_U, KC_P, COMBO_END};
const uint16_t PROGMEM combo263[] = {KC_U, KC_P, KC_O, KC_N, COMBO_END};
const uint16_t PROGMEM combo264[] = {KC_U, KC_S, COMBO_END};
const uint16_t PROGMEM combo265[] = {KC_U, KC_S, KC_E, COMBO_END};
const uint16_t PROGMEM combo266[] = {KC_U, KC_S, KC_A, KC_L, KC_Y, COMBO_END};

const uint16_t PROGMEM combo267[] = {KC_V, KC_E, KC_R, KC_Y, COMBO_END};

const uint16_t PROGMEM combo268[] = {KC_W, KC_A, KC_T, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo269[] = {KC_W, KC_A, KC_Y, COMBO_END};
const uint16_t PROGMEM combo270[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo271[] = {KC_W, KC_E, KC_L, KC_L, COMBO_END};
const uint16_t PROGMEM combo272[] = {KC_W, KC_E, KC_N, KC_T, COMBO_END};
const uint16_t PROGMEM combo273[] = {KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo274[] = {KC_W, KC_H, KC_A, KC_T, COMBO_END};
const uint16_t PROGMEM combo275[] = {KC_W, KC_H, KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM combo276[] = {KC_W, KC_H, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo277[] = {KC_W, KC_H, KC_I, KC_C, KC_H, COMBO_END};
const uint16_t PROGMEM combo278[] = {KC_W, KC_H, KC_I, KC_L, KC_E, COMBO_END};
const uint16_t PROGMEM combo279[] = {KC_W, KC_H, KC_I, KC_T, KC_E, COMBO_END};
const uint16_t PROGMEM combo280[] = {KC_W, KC_H, KC_O, COMBO_END};
const uint16_t PROGMEM combo281[] = {KC_W, KC_H, KC_O, KC_L, KC_E, COMBO_END};
const uint16_t PROGMEM combo282[] = {KC_W, KC_H, KC_Y, COMBO_END};
const uint16_t PROGMEM combo283[] = {KC_W, KC_I, KC_L, COMBO_END};
const uint16_t PROGMEM combo284[] = {KC_W, KC_I, KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM combo285[] = {KC_W, KC_I, KC_T, KC_H,
                                     KC_O, KC_U, KC_T, COMBO_END};
const uint16_t PROGMEM combo286[] = {KC_W, KC_O, KC_R, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM combo287[] = {KC_W, KC_O, KC_R, KC_K, COMBO_END};
const uint16_t PROGMEM combo288[] = {KC_W, KC_O, KC_R, KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo289[] = {KC_W, KC_O, KC_U, KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo290[] = {KC_W, KC_R, KC_I, KC_T, KC_E, COMBO_END};

const uint16_t PROGMEM combo291[] = {KC_Y, KC_E, KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM combo292[] = {KC_Y, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo293[] = {KC_Y, KC_O, KC_U, KC_N, KC_G, COMBO_END};
const uint16_t PROGMEM combo294[] = {KC_Y, KC_O, KC_U, KC_R, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_WANT),        COMBO(combo1, ST_MACRO_IS),
    COMBO(combo2, ST_MACRO_WAS),

    COMBO(combo3, ST_MACRO_ABOUT),       COMBO(combo4, ST_MACRO_ABOVE),
    COMBO(combo5, ST_MACRO_ADD),         COMBO(combo6, ST_MACRO_AFTER),
    COMBO(combo7, ST_MACRO_AGAIN),       COMBO(combo8, ST_MACRO_AIR),
    COMBO(combo9, ST_MACRO_ALL),         COMBO(combo10, ST_MACRO_ALMOST),
    COMBO(combo11, ST_MACRO_ALONG),      COMBO(combo12, ST_MACRO_ALSO),
    COMBO(combo13, ST_MACRO_ALWAYS),     COMBO(combo14, ST_MACRO_AN),
    COMBO(combo15, ST_MACRO_AND),        COMBO(combo16, ST_MACRO_ANIMAL),
    COMBO(combo17, ST_MACRO_ANOTHER),    COMBO(combo18, ST_MACRO_ANSWER),
    COMBO(combo19, ST_MACRO_ANY),        COMBO(combo20, ST_MACRO_ARE),
    COMBO(combo21, ST_MACRO_AROUND),     COMBO(combo22, ST_MACRO_AS),
    COMBO(combo23, ST_MACRO_ASK),        COMBO(combo24, ST_MACRO_AT),
    COMBO(combo25, ST_MACRO_AWAY),

    COMBO(combo26, ST_MACRO_BY),         COMBO(combo27, ST_MACRO_BACK),
    COMBO(combo28, ST_MACRO_BE),         COMBO(combo29, ST_MACRO_BECAUSE),
    COMBO(combo30, ST_MACRO_BEEN),       COMBO(combo31, ST_MACRO_BEFORE),
    COMBO(combo32, ST_MACRO_BEGAN),      COMBO(combo33, ST_MACRO_BEGIN),
    COMBO(combo34, ST_MACRO_BELOW),      COMBO(combo35, ST_MACRO_BETWEEN),
    COMBO(combo36, ST_MACRO_BIG),        COMBO(combo37, ST_MACRO_BOOK),
    COMBO(combo38, ST_MACRO_BOTH),       COMBO(combo39, ST_MACRO_BOY),
    COMBO(combo40, ST_MACRO_BUT),

    COMBO(combo41, ST_MACRO_CALLED),     COMBO(combo42, ST_MACRO_CAME),
    COMBO(combo43, ST_MACRO_CAN),        COMBO(combo44, ST_MACRO_CAR),
    COMBO(combo45, ST_MACRO_CHANGE),     COMBO(combo46, ST_MACRO_CHILDREN),
    COMBO(combo47, ST_MACRO_CITY),       COMBO(combo48, ST_MACRO_COME),
    COMBO(combo49, ST_MACRO_COULD),      COMBO(combo50, ST_MACRO_COUNTRY),
    COMBO(combo51, ST_MACRO_CUT),

    COMBO(combo52, ST_MACRO_DAY),        COMBO(combo53, ST_MACRO_DID),
    COMBO(combo54, ST_MACRO_DIDNT),      COMBO(combo55, ST_MACRO_DIFFERENT),
    COMBO(combo56, ST_MACRO_DO),         COMBO(combo57, ST_MACRO_DOES),
    COMBO(combo58, ST_MACRO_DONT),       COMBO(combo59, ST_MACRO_DONE),
    COMBO(combo60, ST_MACRO_DOOR),       COMBO(combo61, ST_MACRO_DOWN),
    COMBO(combo62, ST_MACRO_DURING),

    COMBO(combo63, ST_MACRO_EACH),       COMBO(combo64, ST_MACRO_EARTH),
    COMBO(combo65, ST_MACRO_END),        COMBO(combo66, ST_MACRO_ENOUGH),
    COMBO(combo67, ST_MACRO_EVEN),       COMBO(combo68, ST_MACRO_EVER),
    COMBO(combo69, ST_MACRO_EVERY),      COMBO(combo70, ST_MACRO_EXAMPLE),

    COMBO(combo71, ST_MACRO_FACE),       COMBO(combo72, ST_MACRO_FAMILY),
    COMBO(combo73, ST_MACRO_FAR),        COMBO(combo74, ST_MACRO_FATHER),
    COMBO(combo75, ST_MACRO_FEET),       COMBO(combo76, ST_MACRO_FEW),
    COMBO(combo77, ST_MACRO_FIND),       COMBO(combo78, ST_MACRO_FIRST),
    COMBO(combo79, ST_MACRO_FISH),       COMBO(combo80, ST_MACRO_FIVE),
    COMBO(combo81, ST_MACRO_FOOD),       COMBO(combo82, ST_MACRO_FOR),
    COMBO(combo83, ST_MACRO_FORM),       COMBO(combo84, ST_MACRO_FOUND),
    COMBO(combo85, ST_MACRO_FOUR),       COMBO(combo86, ST_MACRO_FROM),

    COMBO(combo87, ST_MACRO_GET),        COMBO(combo88, ST_MACRO_GIVE),
    COMBO(combo89, ST_MACRO_GO),         COMBO(combo90, ST_MACRO_GOING),
    COMBO(combo91, ST_MACRO_GOOD),       COMBO(combo92, ST_MACRO_GOT),
    COMBO(combo93, ST_MACRO_GREAT),      COMBO(combo94, ST_MACRO_GROUP),

    COMBO(combo95, ST_MACRO_HAD),        COMBO(combo96, ST_MACRO_HALF),
    COMBO(combo97, ST_MACRO_HAND),       COMBO(combo98, ST_MACRO_HARD),
    COMBO(combo99, ST_MACRO_HAS),        COMBO(combo100, ST_MACRO_HAVE),
    COMBO(combo101, ST_MACRO_HE),        COMBO(combo102, ST_MACRO_HEAD),
    COMBO(combo103, ST_MACRO_HEAR),      COMBO(combo104, ST_MACRO_HEARD),
    COMBO(combo105, ST_MACRO_HELP),      COMBO(combo106, ST_MACRO_HER),
    COMBO(combo107, ST_MACRO_HERE),      COMBO(combo108, ST_MACRO_HIGH),
    COMBO(combo109, ST_MACRO_HIM),       COMBO(combo110, ST_MACRO_HIMSELF),
    COMBO(combo111, ST_MACRO_HIS),       COMBO(combo112, ST_MACRO_HOME),
    COMBO(combo113, ST_MACRO_HOUSE),     COMBO(combo114, ST_MACRO_HOW),
    COMBO(combo115, ST_MACRO_HOWEVER),

    COMBO(combo116, ST_MACRO_IM),        COMBO(combo117, ST_MACRO_IF),
    COMBO(combo118, ST_MACRO_IMPORTANT), COMBO(combo119, ST_MACRO_IN),
    COMBO(combo120, ST_MACRO_INTO),      COMBO(combo121, ST_MACRO_IT),
    COMBO(combo122, ST_MACRO_ITS),

    COMBO(combo123, ST_MACRO_JUST),

    COMBO(combo124, ST_MACRO_KEEP),      COMBO(combo125, ST_MACRO_KIND),
    COMBO(combo126, ST_MACRO_KNEW),      COMBO(combo127, ST_MACRO_KNOW),

    COMBO(combo128, ST_MACRO_LAND),      COMBO(combo129, ST_MACRO_LARGE),
    COMBO(combo130, ST_MACRO_LAST),      COMBO(combo131, ST_MACRO_LATER),
    COMBO(combo132, ST_MACRO_LEARN),     COMBO(combo133, ST_MACRO_LEFT),
    COMBO(combo134, ST_MACRO_LET),       COMBO(combo135, ST_MACRO_LIFE),
    COMBO(combo136, ST_MACRO_LIGHT),     COMBO(combo137, ST_MACRO_LIKE),
    COMBO(combo138, ST_MACRO_LINE),      COMBO(combo139, ST_MACRO_LITTLE),
    COMBO(combo140, ST_MACRO_LIVE),      COMBO(combo141, ST_MACRO_LONG),
    COMBO(combo142, ST_MACRO_LOOK),

    COMBO(combo143, ST_MACRO_MADE),      COMBO(combo144, ST_MACRO_MAKE),
    COMBO(combo145, ST_MACRO_MAN),       COMBO(combo146, ST_MACRO_MANY),
    COMBO(combo147, ST_MACRO_MAY),       COMBO(combo148, ST_MACRO_ME),
    COMBO(combo149, ST_MACRO_MEN),       COMBO(combo150, ST_MACRO_MIGHT),
    COMBO(combo151, ST_MACRO_MONEY),     COMBO(combo152, ST_MACRO_MORE),
    COMBO(combo153, ST_MACRO_MORNING),   COMBO(combo154, ST_MACRO_MOST),
    COMBO(combo155, ST_MACRO_MOTHER),    COMBO(combo156, ST_MACRO_MOVE),
    COMBO(combo157, ST_MACRO_MUCH),      COMBO(combo158, ST_MACRO_MUST),
    COMBO(combo159, ST_MACRO_MY),

    COMBO(combo160, ST_MACRO_NAME),      COMBO(combo161, ST_MACRO_NEAR),
    COMBO(combo162, ST_MACRO_NEED),      COMBO(combo163, ST_MACRO_NEVER),
    COMBO(combo164, ST_MACRO_NEW),       COMBO(combo165, ST_MACRO_NEXT),
    COMBO(combo166, ST_MACRO_NIGHT),     COMBO(combo167, ST_MACRO_NO),
    COMBO(combo168, ST_MACRO_NOT),       COMBO(combo169, ST_MACRO_NOW),
    COMBO(combo170, ST_MACRO_NUMBER),

    COMBO(combo171, ST_MACRO_OF),        COMBO(combo172, ST_MACRO_OFF),
    COMBO(combo173, ST_MACRO_OFTEN),     COMBO(combo174, ST_MACRO_OLD),
    COMBO(combo175, ST_MACRO_ON),        COMBO(combo176, ST_MACRO_ONCE),
    COMBO(combo177, ST_MACRO_ONE),       COMBO(combo178, ST_MACRO_ONLY),
    COMBO(combo179, ST_MACRO_OR),        COMBO(combo180, ST_MACRO_OTHER),
    COMBO(combo181, ST_MACRO_OUR),       COMBO(combo182, ST_MACRO_OUT),
    COMBO(combo183, ST_MACRO_OVER),      COMBO(combo184, ST_MACRO_OWN),

    COMBO(combo185, ST_MACRO_PAGE),      COMBO(combo186, ST_MACRO_PAPER),
    COMBO(combo187, ST_MACRO_PART),      COMBO(combo188, ST_MACRO_PEOPLE),
    COMBO(combo189, ST_MACRO_PICTURE),   COMBO(combo190, ST_MACRO_PLACE),
    COMBO(combo191, ST_MACRO_PLANTS),    COMBO(combo192, ST_MACRO_PLAY),
    COMBO(combo193, ST_MACRO_POINT),     COMBO(combo194, ST_MACRO_PUT),

    COMBO(combo195, ST_MACRO_READ),      COMBO(combo196, ST_MACRO_RED),
    COMBO(combo197, ST_MACRO_RIGHT),     COMBO(combo198, ST_MACRO_ROOM),

    COMBO(combo199, ST_MACRO_SAID),      COMBO(combo200, ST_MACRO_SAME),
    COMBO(combo201, ST_MACRO_SAW),       COMBO(combo202, ST_MACRO_SAY),
    COMBO(combo203, ST_MACRO_SCHOOL),    COMBO(combo204, ST_MACRO_SEA),
    COMBO(combo205, ST_MACRO_SECOND),    COMBO(combo206, ST_MACRO_SEE),
    COMBO(combo207, ST_MACRO_SEEN),      COMBO(combo208, ST_MACRO_SENTENCE),
    COMBO(combo209, ST_MACRO_SET),       COMBO(combo210, ST_MACRO_SEVERAL),
    COMBO(combo211, ST_MACRO_SHE),       COMBO(combo212, ST_MACRO_SHOULD),
    COMBO(combo213, ST_MACRO_SHOW),      COMBO(combo214, ST_MACRO_SIDE),
    COMBO(combo215, ST_MACRO_SINCE),     COMBO(combo216, ST_MACRO_SMALL),
    COMBO(combo217, ST_MACRO_SO),        COMBO(combo218, ST_MACRO_SOME),
    COMBO(combo219, ST_MACRO_SOMETHING), COMBO(combo220, ST_MACRO_SOON),
    COMBO(combo221, ST_MACRO_SOUND),     COMBO(combo222, ST_MACRO_STILL),
    COMBO(combo223, ST_MACRO_STORY),     COMBO(combo224, ST_MACRO_STUDY),
    COMBO(combo225, ST_MACRO_SUCH),      COMBO(combo226, ST_MACRO_SUN),
    COMBO(combo227, ST_MACRO_SURE),

    COMBO(combo228, ST_MACRO_TAKE),      COMBO(combo229, ST_MACRO_TELL),
    COMBO(combo230, ST_MACRO_THAN),      COMBO(combo231, ST_MACRO_THAT),
    COMBO(combo232, ST_MACRO_THE),       COMBO(combo233, ST_MACRO_THEIR),
    COMBO(combo234, ST_MACRO_THEM),      COMBO(combo235, ST_MACRO_THEN),
    COMBO(combo236, ST_MACRO_THERE),     COMBO(combo237, ST_MACRO_THESE),
    COMBO(combo238, ST_MACRO_THEY),      COMBO(combo239, ST_MACRO_THING),
    COMBO(combo240, ST_MACRO_THINK),     COMBO(combo241, ST_MACRO_THIS),
    COMBO(combo242, ST_MACRO_THOSE),     COMBO(combo243, ST_MACRO_THOUGHT),
    COMBO(combo244, ST_MACRO_THREE),     COMBO(combo245, ST_MACRO_THROUGH),
    COMBO(combo246, ST_MACRO_TIME),      COMBO(combo247, ST_MACRO_TO),
    COMBO(combo248, ST_MACRO_TODAY),     COMBO(combo249, ST_MACRO_TOGETHER),
    COMBO(combo250, ST_MACRO_TOLD),      COMBO(combo251, ST_MACRO_TOO),
    COMBO(combo252, ST_MACRO_TOOK),      COMBO(combo253, ST_MACRO_TOP),
    COMBO(combo254, ST_MACRO_TOWARD),    COMBO(combo255, ST_MACRO_TRUE),
    COMBO(combo256, ST_MACRO_TRY),       COMBO(combo257, ST_MACRO_TURN),
    COMBO(combo258, ST_MACRO_TURNED),    COMBO(combo259, ST_MACRO_TWO),

    COMBO(combo260, ST_MACRO_UNDER),     COMBO(combo261, ST_MACRO_UNTIL),
    COMBO(combo262, ST_MACRO_UP),        COMBO(combo263, ST_MACRO_UPON),
    COMBO(combo264, ST_MACRO_US),        COMBO(combo265, ST_MACRO_USE),
    COMBO(combo266, ST_MACRO_USUALLY),

    COMBO(combo267, ST_MACRO_VERY),

    COMBO(combo268, ST_MACRO_WATER),     COMBO(combo269, ST_MACRO_WAY),
    COMBO(combo270, ST_MACRO_WE),        COMBO(combo271, ST_MACRO_WELL),
    COMBO(combo272, ST_MACRO_WENT),      COMBO(combo273, ST_MACRO_WERE),
    COMBO(combo274, ST_MACRO_WHAT),      COMBO(combo275, ST_MACRO_WHEN),
    COMBO(combo276, ST_MACRO_WHERE),     COMBO(combo277, ST_MACRO_WHICH),
    COMBO(combo278, ST_MACRO_WHILE),     COMBO(combo279, ST_MACRO_WHITE),
    COMBO(combo280, ST_MACRO_WHO),       COMBO(combo281, ST_MACRO_WHOLE),
    COMBO(combo282, ST_MACRO_WHY),       COMBO(combo283, ST_MACRO_WILL),
    COMBO(combo284, ST_MACRO_WITH),      COMBO(combo285, ST_MACRO_WITHOUT),
    COMBO(combo286, ST_MACRO_WORDS),     COMBO(combo287, ST_MACRO_WORK),
    COMBO(combo288, ST_MACRO_WORLD),     COMBO(combo289, ST_MACRO_WOULD),
    COMBO(combo290, ST_MACRO_WRITE),

    COMBO(combo291, ST_MACRO_YEAR),      COMBO(combo292, ST_MACRO_YOU),
    COMBO(combo293, ST_MACRO_YOUNG),     COMBO(combo294, ST_MACRO_YOUR),
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
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_IS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_S));
    }
    break;
  case ST_MACRO_WAS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10)
                      SS_TAP(X_S));
    }
    break;
  case ST_MACRO_ABOUT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T));
    }
    break;
  case ST_MACRO_ABOVE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_B) SS_DELAY(10) SS_TAP(
          X_O) SS_DELAY(10) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ADD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_AFTER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_F) SS_DELAY(10) SS_TAP(
          X_T) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_AGAIN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10) SS_TAP(
          X_A) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_AIR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_ALL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_ALMOST:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_S)
                          SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ALONG:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(
          X_O) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ALSO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ALWAYS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_Y)
                          SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10));
    }
    break;
  case ST_MACRO_AN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_AND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_ANIMAL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_I)
                      SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_A)
                          SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ANOTHER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_ANSWER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ANY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_ARE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_AROUND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_N)
                          SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_AS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ASK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_K)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_AT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_AWAY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BACK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_K) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BECAUSE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_U)
                          SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_BEEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BEFORE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_F)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BEGAN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(
          X_G) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BEGIN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(
          X_G) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BELOW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(
          X_L) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BETWEEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_BIG:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_G)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_BOOK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_K) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BOTH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_BOY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_BUT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_BY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;

  case ST_MACRO_CALLED:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_CAME:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_CAN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_CAR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_CHANGE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_G)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_CHILDREN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_I)
                      SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_D)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E)
                              SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_CITY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_COME:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_COULD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_U) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_COUNTRY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_U)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_T)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_Y)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_CUT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;

  case ST_MACRO_DAY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_DID:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_DIDNT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(
          X_D) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_DIFFERENT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_F)
                      SS_DELAY(10) SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E)
                              SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_T)
                                  SS_DELAY(10));
    }
    break;
  case ST_MACRO_DO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10));
    }
    break;
  case ST_MACRO_DOES:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10));
    }
    break;
  case ST_MACRO_DONT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_DONE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_DOOR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_DOWN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_DURING:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N)
                          SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10));
    }
    break;

  case ST_MACRO_EACH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_EARTH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(
          X_R) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_END:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_ENOUGH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_G)
                          SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_EVEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_EVER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_EVERY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_V) SS_DELAY(10) SS_TAP(
          X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_EXAMPLE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_X) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_P)
                          SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_E)
                              SS_DELAY(10));
    }
    break;

  case ST_MACRO_FACE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FAMILY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_L)
                          SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FAR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_FATHER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FEET:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FEW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_FIND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FIRST:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(
          X_R) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FISH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FIVE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_V)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FOOD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FOR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_FORM:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FOUND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_U) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FOUR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_U)
                      SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_FROM:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10));
    }
    break;

  case ST_MACRO_GET:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_GIVE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_V)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_GO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10));
    }
    break;
  case ST_MACRO_GOING:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10));
    }
    break;
  case ST_MACRO_GOOD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_GOT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_GREAT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(
          X_E) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_GROUP:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(
          X_O) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10));
    }
    break;

  case ST_MACRO_HAD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_HALF:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_F) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HAND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HARD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HAS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_HAVE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_V)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HEAD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HEAR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HEARD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(
          X_A) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HELP:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_HERE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HIGH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_G)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HIM:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_HIMSELF:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_F)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_HIS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_HOME:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HOUSE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_U) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_HOW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_HOWEVER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_V)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                              SS_DELAY(10));
    }
    break;

  case ST_MACRO_IM:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_I)) SS_DELAY(10) SS_TAP(X_QUOTE) SS_DELAY(10)
                      SS_TAP(X_M) SS_DELAY(10));
    }
    break;
  case ST_MACRO_IF:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_F) SS_DELAY(10));
    }
    break;
  case ST_MACRO_IMPORTANT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_P)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R)
                          SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_A)
                              SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_T)
                                  SS_DELAY(10));
    }
    break;
  case ST_MACRO_IN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_INTO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10));
    }
    break;
  case ST_MACRO_IT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ITS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10));
    }
    break;

  case ST_MACRO_JUST:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_J) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;

  case ST_MACRO_KEEP:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10));
    }
    break;
  case ST_MACRO_KIND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_KNEW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10));
    }
    break;
  case ST_MACRO_KNOW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10));
    }
    break;

  case ST_MACRO_LAND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LARGE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(
          X_R) SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LAST:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LATER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(
          X_T) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LEARN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(
          X_A) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LEFT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_F)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LET:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_LIFE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_F)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LIGHT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(
          X_G) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LIKE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_K)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LINE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LITTLE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_L)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LIVE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_V)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LONG:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10));
    }
    break;
  case ST_MACRO_LOOK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_K) SS_DELAY(10));
    }
    break;

  case ST_MACRO_MADE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MAKE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_K)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MAN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_MANY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MAY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_ME:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_MIGHT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(
          X_G) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MONEY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_N) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MORE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MORNING:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_I)
                          SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_G)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_MOST:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MOTHER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MOVE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_V)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MUCH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MUST:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_S)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_MY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_M) SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;

  case ST_MACRO_NAME:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_NEAR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_NEED:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_NEVER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(
          X_V) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_NEW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_NEXT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_X)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_NIGHT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(
          X_G) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_NO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10));
    }
    break;
  case ST_MACRO_NOT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_NOW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_NUMBER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_B) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;

  case ST_MACRO_OF:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_F) SS_DELAY(10));
    }
    break;
  case ST_MACRO_OFF:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_F) SS_DELAY(10) SS_TAP(X_F)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_OFTEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_F) SS_DELAY(10) SS_TAP(
          X_T) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_OLD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_ON:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ONCE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ONE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_ONLY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_OR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_OTHER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(
          X_H) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_OUR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_OUT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_OVER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_OWN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10));
    }
    break;

  case ST_MACRO_PAGE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_G)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_PAPER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(
          X_P) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_PART:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_PEOPLE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_L)
                          SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_PICTURE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_U)
                          SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_PLACE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(
          X_A) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_PLANTS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_T)
                          SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10));
    }
    break;
  case ST_MACRO_PLAY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_POINT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_PUT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;

  case ST_MACRO_READ:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_RED:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_RIGHT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(
          X_G) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_ROOM:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10));
    }
    break;

  case ST_MACRO_SAID:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_I)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SAME:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SAW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_SAY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_SCHOOL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_H)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                          SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SEA:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_SECOND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_N)
                          SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SEE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_SEEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SENTENCE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_C)
                              SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SET:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_SEVERAL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_V)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                          SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_SHE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_SHOULD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_L)
                          SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SHOW:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SIDE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_D)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SINCE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(
          X_N) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SMALL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10) SS_TAP(
          X_A) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SOME:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SOMETHING:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_T)
                          SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_I)
                              SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_G)
                                  SS_DELAY(10));
    }
    break;
  case ST_MACRO_SOON:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SOUND:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_U) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_STILL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10));
    }
    break;
  case ST_MACRO_STORY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(
          X_O) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_STUDY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(
          X_U) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SUCH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_C)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_SUN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_SURE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;

  case ST_MACRO_TAKE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_K)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TELL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THAN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THAT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_THEIR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_E) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THEM:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_M) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THERE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THESE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_E) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THEY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THING:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THINK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_K) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THIS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_I)
                      SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THOSE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_O) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THOUGHT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_G)
                          SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_T)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_THREE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_R) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_THROUGH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_U)
                          SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10) SS_TAP(X_H)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_TIME:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_M)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TODAY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_D) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TOGETHER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_G)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_T)
                          SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                              SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TOLD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TOO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_TOOK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_K) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TOP:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_P)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_TOWARD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_W)
                      SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_R)
                          SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TRUE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_U)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TRY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_TURN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TURNED:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_E)
                          SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_TWO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10));
    }
    break;

  case ST_MACRO_UNDER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(
          X_D) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_UNTIL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(
          X_T) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10));
    }
    break;
  case ST_MACRO_UP:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10));
    }
    break;
  case ST_MACRO_UPON:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_P) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_US:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10));
    }
    break;
  case ST_MACRO_USE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_USUALLY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10) SS_TAP(X_U)
                      SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_L)
                          SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_Y)
                              SS_DELAY(10));
    }
    break;

  case ST_MACRO_VERY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_Y) SS_DELAY(10));
    }
    break;

  case ST_MACRO_WATER:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(
          X_T) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WAY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_A) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_WE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WELL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WENT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_N)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WERE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHAT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHEN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_E)
                      SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHERE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_E) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHICH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_C) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHILE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHITE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHO:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHOLE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(
          X_O) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WHY:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_Y)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_WILL:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_L)
                      SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WITH:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WITHOUT:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_I) SS_DELAY(10) SS_TAP(X_T)
                      SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_O)
                          SS_DELAY(10) SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T)
                              SS_DELAY(10));
    }
    break;
  case ST_MACRO_WORDS:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_R) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_S) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WORK:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_R)
                      SS_DELAY(10) SS_TAP(X_K) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WORLD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_R) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WOULD:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_U) SS_DELAY(10) SS_TAP(X_L) SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10));
    }
    break;
  case ST_MACRO_WRITE:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10) SS_TAP(
          X_I) SS_DELAY(10) SS_TAP(X_T) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10));
    }
    break;

  case ST_MACRO_YEAR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_A)
                      SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
    }
    break;
  case ST_MACRO_YOU:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_U)
                      SS_DELAY(10));
    }
    break;
  case ST_MACRO_YOUNG:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(
          X_U) SS_DELAY(10) SS_TAP(X_N) SS_DELAY(10) SS_TAP(X_G) SS_DELAY(10));
    }
    break;
  case ST_MACRO_YOUR:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10) SS_TAP(X_U)
                      SS_DELAY(10) SS_TAP(X_R) SS_DELAY(10));
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
