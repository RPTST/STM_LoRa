In this project I will show you how to build a small LoRa transmitter and receiver with the help of STM32 development boards and RFM95 LoRa modules. This LoRa System can basically transmit an alarm signal from my garage to my apartment wirelessly through the air. The transmitter and receiver feature a distance of around 600m to one another.

https://www.youtube.com/watch?v=ItZwa1AdrpU

https://www.instructables.com/DIY-LoRa-System/

The video gives you all the information you need to create your own LoRa system. During the next steps though, I will present you some additional information. 

Here you can find a parts list with example seller:

RFM95 Break-out Board – 
https://www.elektor.com/rfm95-break-out-board-bar...
https://www.amazon.com/Sunhokey-Transceiver-Compatible-Technical-Green-RFM95W/dp/B07VWQY6GG/ref=sr_1_2?dchild=1&keywords=RFM95W+915Mhz&qid=1614110103&s=electronics&sr=1-2

RFM95 Ultra LoRa Transceiver Module (868/915 MHz): https://www.elektor.com/rfm95-ultra-lora-transceiv...

STM32 Nucleo L476RG Board: https://www.elektor.com/stm32-nucleo-l476rg-board

Dragino LG02 Dual Channels LoRa IoT Gateway: https://www.elektor.com/dragino-lg02-dual-channels...

5V Buzzer: https://s.click.aliexpress.com/e/_Bf6g8HUZ

MOSFET: https://s.click.aliexpress.com/e/_d8ocEHJ

PCB Terminal: https://s.click.aliexpress.com/e/_dX5BMK1

10 ohm Resistor: https://s.click.aliexpress.com/e/_dTPpXjt

Files in the schematic folder for the receiver and transmitter. Use them along with the reference pictures of my finished circuits in order to create your own. 

Here you can find the codes that I created for the project. Upload them using the Arduino IDE. But make sure to include/download those libraries:
https://github.com/stm32duino/Arduino_Core_STM32
https://github.com/sandeepmistry/arduino-LoRa

Files in the Sketch folder
LoRaReceiver2.ino
LoRaTransmitter2.ino
