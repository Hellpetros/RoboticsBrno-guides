#include <Arduino.h>
#include "LearningKit.h"

HardwareSerial Serial2(1);

void setup() {
    Serial.begin(115200);
    Serial2.begin(115200, SERIAL_8N1, 18, 19);

}

void loop() {

    if( Serial2.available() ) {
        Serial.write(Serial2.read());

    } 


}