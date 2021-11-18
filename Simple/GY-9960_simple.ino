#include "Adafruit_APDS9960.h"
Adafruit_APDS9960 apds;

void setup() {
  Serial.begin(115200);

  if(!apds.begin()) Serial.println("failed to initialize device! Please check your wiring.");
  apds.enableProximity(true);
  apds.enableGesture(true);
}

void loop() {
    uint8_t gesture = apds.readGesture();
    if(gesture == APDS9960_DOWN) Serial.println("DOWN");
    if(gesture == APDS9960_UP) Serial.println("UP");
    if(gesture == APDS9960_LEFT) Serial.println("LEFT");
    if(gesture == APDS9960_RIGHT) Serial.println("RIGHT");
}
