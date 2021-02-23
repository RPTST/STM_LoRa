In this project I will show you how to build a small LoRa transmitter and receiver with the help of STM32 development boards and RFM95 LoRa modules. This LoRa System can basically transmit an alarm signal from my garage to my apartment wirelessly through the air. The transmitter and receiver feature a distance of around 600m to one another.

<img src="https://www.youtube.com/watch?v=ItZwa1AdrpU">


https://www.instructables.com/DIY-LoRa-System/

The video gives you all the information you need to create your own LoRa system. During the next steps though, I will present you some additional information. 

Here you can find a parts list with example seller:

RFM95 Break-out Board – https://www.amazon.com/Sunhokey-Transceiver-Compatible-Technical-Green-RFM95W/dp/B07VWQY6GG/ref=sr_1_2?dchild=1&keywords=RFM95W+915Mhz&qid=1614110103&s=electronics&sr=1-2

RFM95 Ultra LoRa Transceiver Module (868/915 MHz): https://www.elektor.com/rfm95-ultra-lora-transceiv...

STM32 Nucleo L476RG Board: https://www.amazon.com/STM32-Nucleo-64-development-STM32L476RG-NUCLEO-L476RG/dp/B01IO3N646

Dragino LG02 Dual Channels LoRa IoT Gateway: https://www.amazon.com/Dragino-Channels-Distance-Wireless-Transmit/dp/B07JBDDP63

5V Buzzer: https://www.amazon.com/uxcell-3-24V-Sound-Electronic-Buzzer/dp/B00OK5Y12Y/ref=sr_1_2?crid=3UFZARG1JAJ89&dchild=1&keywords=5v+buzzer&m=A1THAZDOWP300U&qid=1614110435&refinements=p_6%3AA1THAZDOWP300U&rnid=303116011&s=electronics&sprefix=5V+Buzzer%2Celectronics%2C151&sr=1-2

irlml6344trpbf MOSFET: https://s.click.aliexpress.com/e/_d8ocEHJ

PCB Terminal: https://www.amazon.com/uxcell-Screw-Terminal-Block-3-5mm/dp/B01C3DGIBQ/ref=sr_1_18?dchild=1&keywords=pcb+screw+terminal+2+pin&qid=1614111090&sr=8-18

10 ohm Resistor: https://www.amazon.com/uxcell-Resistor-Resistors-Tolerance-300pcs/dp/B07QGQ5XHM/ref=sr_1_1_sspa?crid=2ZSS64CZKETU1&dchild=1&keywords=10+ohm+resistor+smd&qid=1614110777&sprefix=10+ohm+Resistor+s%2Caps%2C141&sr=8-1-spons&psc=1&smid=A1THAZDOWP300U&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFDUDc3SkxRSkxVNjQmZW5jcnlwdGVkSWQ9QTA2MTYxMjgxNjAyNDNUS0IwTUcyJmVuY3J5cHRlZEFkSWQ9QTA2OTUzODkzU1c3UERLT1lSMDRNJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==

Files in the schematic folder for the receiver and transmitter. Use them along with the reference pictures of my finished circuits in order to create your own. 

Here you can find the codes that I created for the project. Upload them using the Arduino IDE. But make sure to include/download those libraries:

https://github.com/stm32duino/Arduino_Core_STM32 or https://github.com/RPTST/Arduino_Core_STM32

https://github.com/sandeepmistry/arduino-LoRa or https://github.com/RPTST/arduino-LoRa

Files in the Sketch folder

LoRaReceiver2.ino

LoRaTransmitter2.ino
