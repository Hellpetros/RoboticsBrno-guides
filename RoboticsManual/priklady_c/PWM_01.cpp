 #include "LearningKit.h"

 void setup() 
 {
	pinMode( L_Y, OUTPUT );
	 ledcSetup(0, 1000, 10); 
	    // ledcSetup(channel, freq, resolution)
	    // channel = 0 - 15
	    // resolution = 10 => 2^10 => 1024
	 ledcAttachPin(L_Y, 0);  // ledcAttachPin(pin, channel)
 }
 
 void loop() 
 {
	 ledcWrite(0, analogRead(POT1)/4);  // potentiometer connected to analog pin POT1
 }