// Copyright 2023 Ahmad Anshori (@anz507)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral

// Define options
#define TAPPING_TERM 135
#define PERMISSIVE_HOLD

// Vial
// #define VIAL_KEYBOARD_UID {0x2C, 0x68, 0x60, 0x44, 0xA7, 0x6C, 0x63, 0x32}
// #define VIAL_UNLOCK_COMBO_ROWS { 3, 3 }
// #define VIAL_UNLOCK_COMBO_COLS { 2, 7 }

#define ANALOG_JOYSTICK_X_AXIS_PIN      GP29
#define ANALOG_JOYSTICK_Y_AXIS_PIN      GP28
#define ANALOG_JOYSTICK_AXIS_MIN        0
#define ANALOG_JOYSTICK_AXIS_MAX        1023
#define ANALOG_JOYSTICK_SPEED_REGULATOR 40
#define ANALOG_JOYSTICK_READ_INTERVAL   10
#define ANALOG_JOYSTICK_SPEED_MAX       6
#define AUTO_MOUSE_DEFAULT_LAYER        1
// #define ANALOG_JOYSTICK_CLICK_PIN       GP23

#define WS2812_DI_PIN GP6   // See readme.md for wiring your led's
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLED_NUM 16         // Number of LEDs. Change this to match your use case.
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
