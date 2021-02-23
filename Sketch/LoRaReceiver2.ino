#include <SPI.h>
#include <LoRa.h>
char rec[8];
int i = 0;

void setup() {
  pinMode(D4, OUTPUT);
  digitalWrite(D4, LOW);
  LoRa.setTxPower(20);
  Serial.begin(9600);
  if (!LoRa.begin(868100000)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
  LoRa.setSyncWord(0x34);
}

void loop() {
  i = 0;
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    while (LoRa.available()) {
      rec[i] = (char)LoRa.read();
      i++;
    }
    Serial.print("RSSI ");
    Serial.println(LoRa.packetRssi());
    Serial.println(String(rec));
  }
  if (String(rec) == "8642") {
    digitalWrite(D4, HIGH);
  }
}
