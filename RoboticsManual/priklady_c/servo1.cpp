
#include "LearningKit.h"
#include <Servo.h>

static const int servoPin = S1;
static const int PotPin = 32;

Servo servo1;

void setup() {
    servo1.attach(servoPin);
}
void loop() {
    int servoPosition = map(analogRead(PotPin), 0, 4096, 0, 180);
    servo1.write(servoPosition);
    delay(20);
}