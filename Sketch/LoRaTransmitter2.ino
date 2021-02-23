#include <SPI.h>
#include <LoRa.h>

int device_id = 8642;

void setup() {
  pinMode(D4, INPUT_PULLDOWN);
  LoRa.setTxPower(20);
  Serial.begin(9600);
  if (!LoRa.begin(868100000)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
  LoRa.setSyncWord(0x34);
}

void loop() {
  if (digitalRead(D4) == HIGH) {
    LoRa.beginPacket();
    LoRa.print(device_id);
    LoRa.endPacket();
    delay(500);
  }
}
