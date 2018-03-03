// You must install the toneAC library to your Arduino developer tools (e. g. Arduino IDE)
// https://bitbucket.org/teckel12/arduino-toneac/wiki/Home
// #include <toneAC.h>

// You must install the DHT library to your Arduino developer tools 
// In Arduino IDE - open in Menu "Project" -> "Add library" -> "Library manager" ->
// -> write "DHT" to searching field
// -> and install the DHT library "DHT sensor library by Adafruit..." 
// (switch the version from the latest to 1.2.3)
// https://github.com/adafruit/DHT-sensor-library
// #include <DHT.h>

#pragma once

#include "Arduino.h"

#define LED_RGB_R      5
#define LED_RGB_G     11
#define LED_RGB_B      6
  
#define LED_RED       12
#define LED_YELLOW    13
#define LED_GREEN      7
#define LED_BLUE       8

#define LED_R         12
#define LED_Y         13
#define LED_G          7
#define LED_B          8

#define BUTTON_LEFT    2 // sw1
#define BUTTON_MIDDLE  3 // sw2
#define BUTTON_RIGHT   4 // sw3

#define PIN_PIEZO_A    9
#define PIN_PIEZO_B   10

#define POT_RIGHT     A0 // RV1
#define POT_LEFT      A1 // RV2

#define LIGHT_SENSOR  A2

#define SERVO_1  5
#define SERVO_2  6
#define SERVO_3  9
#define SERVO_4 10
#define SERVO_5 11

#define DHTPIN     A3
#define DHTTYPE DHT11

void setup_leds() {
    pinMode(LED_R, OUTPUT);
    pinMode(LED_Y, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);
}

void setup_rgb_led() {
    pinMode(LED_RGB_R, OUTPUT);
    pinMode(LED_RGB_G, OUTPUT);
    pinMode(LED_RGB_B, OUTPUT);
}

void setup_piezo() {
	pinMode(PIN_PIEZO_A, OUTPUT);
	pinMode(PIN_PIEZO_B, OUTPUT);
}

void setup_buttons() {
    pinMode(BUTTON_LEFT  , INPUT_PULLUP);
    pinMode(BUTTON_MIDDLE, INPUT_PULLUP);
    pinMode(BUTTON_RIGHT , INPUT_PULLUP);
}

void setup_alks() {
    setup_leds();
    setup_rgb_led();
    setup_piezo();
    setup_buttons();
}

void setupLeds();
void setupRgbLed();
void setupButtons();