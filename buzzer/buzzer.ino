#include <cvzone.h>
#include <Arduino.h>


SerialData serialData(1,1);
int valsRec[0];

int buzzer = 13;


void setup() {
  serialData.begin();
  pinMode(buzzer, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
   serialData.Get(valsRec);
   digitalWrite(buzzer,valsRec[0]);
}
