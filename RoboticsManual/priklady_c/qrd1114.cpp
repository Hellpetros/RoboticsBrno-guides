#include <Arduino.h>

void setup() 
{
  Serial.begin(115200);
  pinMode(A0, INPUT);
}

void loop() 
{ 
  Serial.write(analogRead(A0)/4); 
  delay(100);
} 
