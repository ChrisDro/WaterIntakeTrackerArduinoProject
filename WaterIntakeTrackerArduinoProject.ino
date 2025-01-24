#include "modules/BluetoothModule.h"
#include "modules/BluetoothModule.cpp"

void setup() {
  Serial.begin(115200);
  setupBluetooth();
}

void loop() {
  transmitValue("Hello World");
  delay(2000);
}