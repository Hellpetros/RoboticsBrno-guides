#include <Arduino.h>
#include "vnh2sp30.h"

void setup()
{
    motorSetup();

    Serial.begin(115200);              // Initiates the serial to do the monitoring 
    Serial.println("Begin motor control");
    Serial.println(); //Print function list for user selection
    Serial.println("Enter number for control option:");
    Serial.println("1. STOP");
    Serial.println("2. FORWARD");
    Serial.println("3. REVERSE");
    Serial.println("4. READ CURRENT");
    Serial.println("+. INCREASE SPEED");
    Serial.println("-. DECREASE SPEED");
    Serial.println();
}
void loop() 
{
  char user_input;     
  while(Serial.available())
  {
    user_input = Serial.read(); //Read user input and trigger appropriate function
    digitalWrite(EN_PIN_1, HIGH);
    digitalWrite(EN_PIN_2, HIGH); 
     
    if (user_input =='1')
    {
       Stop();
    }
    else if(user_input =='2')
    {
      Forward();
    }
    else if(user_input =='3')
    {
      Reverse();
    }
    else if(user_input =='+')
    {
      IncreaseSpeed();
    }
    else if(user_input =='-')
    {
      DecreaseSpeed();
    }
    else
    {
      Serial.println("Invalid option entered.");
    }
      
  }
}