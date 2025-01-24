#include "modules/BluetoothModule.h"
#include "modules/BluetoothModule.cpp"

void setup() {
  Serial.begin(115200);

  setupBluetooth();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
}