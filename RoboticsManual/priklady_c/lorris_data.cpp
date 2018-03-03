#include "LearningKit_nano.h"

char a = '0';
int stav_tlac_2 = 0;
int stav_tlac_3 = 0;
int stav_tlac_4 = 0;
int stav_vsech_tlac = 0;

void setup() {
    Serial.begin(115200);
    setup_alks();
    

}

void loop() {
    delay(100); // nezahltit lorris 
    Serial.write(0x80); // hlavicka - zacatek posilani dat 
    Serial.write(0x0A); // ID_RGB
    Serial.write(0x03); // delka paketu RGB v bytech
    Serial.write(analogRead(POT_LEFT)/4); // posila binarne R
    Serial.write(analogRead(POT_RIGHT)/4); // posila binarne G
    Serial.write(0x70); // simulace treti barvy B

    Serial.write(0x80); // hlavicka - zacatek posilani dat 
    Serial.write(0x0B); // ID_POT
    Serial.write(0x01); // delka paketu POT v bytech
    Serial.write(analogRead(POT_LEFT)/4); // posila binarne POT

    stav_tlac_2 = digitalRead(2);
    stav_tlac_3 = digitalRead(3);
    stav_tlac_4 = digitalRead(4);
    stav_vsech_tlac = stav_tlac_2 | ( stav_tlac_3 << 1 ) | ( stav_tlac_4 << 2 ); 
    
    Serial.write(0x80); // hlavicka - zacatek posilani dat
    Serial.write(0x0C); // ID_TL
    Serial.write(0x01); // delka paketu TL v bytech
    Serial.write(stav_vsech_tlac); // posila binarne vsechny tlacitka

    Serial.write(0x80); // hlavicka - zacatek posilani dat
    Serial.write(0x0D); // ID_TL_bytove
    Serial.write(0x03); // delka paketu TL v bytech
    Serial.write(stav_tlac_2); // posila tlacitko 2 jako byte
    Serial.write(stav_tlac_3);
    Serial.write(stav_tlac_4);


    
    analogWrite(LED_Y, analogRead(POT_LEFT)/4); // kontrola na ALKS, ze to funguje 
      
}