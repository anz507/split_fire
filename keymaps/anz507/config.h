// Copyright 2023 Ahmad Anshori (@anz507)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once


// Define options
#define TAPPING_TERM 135
#define PERMISSIVE_HOLD


#define ANALOG_JOYSTICK_X_AXIS_PIN      GP29
#define ANALOG_JOYSTICK_Y_AXIS_PIN      GP28
#define ANALOG_JOYSTICK_AXIS_MIN        0
#define ANALOG_JOYSTICK_AXIS_MAX        1023
#define ANALOG_JOYSTICK_SPEED_REGULATOR 40
#define ANALOG_JOYSTICK_READ_INTERVAL   10
#define ANALOG_JOYSTICK_SPEED_MAX       6
#define AUTO_MOUSE_DEFAULT_LAYER        1

// somehow enabling this pin will make top parts of the screen is unclickable
// #define ANALOG_JOYSTICK_CLICK_PIN       GP23
