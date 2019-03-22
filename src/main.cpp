#include <Arduino.h>

uint16_t count = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(uint16_t i = 0; i < count; i++)
  {
    /* code */
    Serial.println(count);
  }
  Serial.println("v2.0");
  
}