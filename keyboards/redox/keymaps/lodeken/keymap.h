#pragma once

#include QMK_KEYBOARD_H

// // Tap Dance stuff
#ifdef TAP_DANCE_ENABLE
enum {
    DOT_TD = 0,
};

#define TD_DOT TD(DOT_TD)
#else
#define TD_DOT KC_DOT
#endif

// Initialize variable holding the binary
// representation of active modifiers.
// static uint8_t mod_state;
// static uint8_t oneshot_mod_state;
// static uint16_t last_keycode;

// bool caps_word_on;
// void caps_word_enable(void);
// void caps_word_disable(void);

bool num_word_on;
void num_word_enable(void);
void num_word_disable(void);

// Four letter keycodes so formatting doesn't move around
// Aliases to match the string length to standard 7 char length
#define KC_0000 KC_0
#define KC_0001 KC_1
#define KC_0002 KC_2
#define KC_0003 KC_3
#define KC_0004 KC_4
#define KC_0005 KC_5
#define KC_0006 KC_6
#define KC_0007 KC_7
#define KC_0008 KC_8
#define KC_0009 KC_9

#define KC_F1XX KC_F1
#define KC_F2XX KC_F2
#define KC_F3XX KC_F3
#define KC_F4XX KC_F4
#define KC_F5XX KC_F5
#define KC_F6XX KC_F6
#define KC_F7XX KC_F7
#define KC_F8XX KC_F8
#define KC_F9XX KC_F9
#define KC_F10X KC_F10
#define KC_F11X KC_F11
#define KC_F12X KC_F12

#define KC_EQLX KC_EQL
#define KC_DOTX KC_DOT
#define KC_DLRX KC_DLR
#define KC_ATXX KC_AT

#define KC_ENDX KC_END
#define KC_UPXX KC_UP

#define KC_ENTX KC_ENT


// Each layer gets a name for readability, which is then used in the keymap matrix below.
enum layers {
//   _COLEMAKDH,
  _QWERTY,
  _NUM,
//   _NUM2,
//   _SYM,
  _NAV_L,
  _NAV_R,
//   _FUN,
//   _TEST,
};

// Custom keycodes
enum custom_keycodes {
//   KC_COMMDOT = SAFE_RANGE,
//   KC_HCOMM,
//   KC_KH,
//   CAPS_WORD,
  NUM_WORD = SAFE_RANGE,
  KC_SLS2,
  KC_REDO,
};
