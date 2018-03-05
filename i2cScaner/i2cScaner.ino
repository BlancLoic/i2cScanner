#include "i2cScan.h"   
#include <Wire.h>
     //version 1.00
     
void setup(){
    Wire.begin();
    Serial.begin(9600);
    //while (!Serial);             // Leonardo: wait for serial monitor
}
 

  
     
void loop(){
   i2cScan();
   delay(5000);           // wait 5 seconds for next scan
}

