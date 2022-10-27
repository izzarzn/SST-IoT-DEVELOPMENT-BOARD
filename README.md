<h2 align="center"> SST-IoT-DEVELOPMENT-BOARD</h2>

|Arduino IDE| 
|:------|
 | [Click Here](https://www.arduino.cc/en/software) |
 
 ------
   
| Arduino IDE Installation Guide |
|:------|
|   [Click Here](Arduino_Installation.md)|
   
   -----------
   
| ESP32 Setup Guide |
|:------|
 |  [Click Here](Esp32.md) |
    
  -------
  
| Blynk Account Setup Guide |
|:------|
 |  [Click Here](Blynk_Setup.md) |
   
   -------

| Libraries Riquired |
|:------|
 |  [Click Here](Libraries) | 
 
 -----------

### About the Board
The SST IoT Devlopment Board is a Node MCU ESP-32 Module mounted on a custom PCB and integrated with different Sensors and Accuators, using which strong Embedded and IoT fundamentals are developed by deploying and implementing various projects involving cloud, ML and various other industry stacks.

--------------

## SST IoT Development Board Pin Description

| **Components** | **GPIO PIN DESCRIPTION** |
|:----:|:----:|
|Buzzer | 14 |
|Bluetooth| RX - 16, TX - 17 |
| DHT 11| 32 |
| DC Motor | M1 - 25/33, M2 - 26/27|
| LCD | SCL - 22, SDA - 21 |
| ON Board LED | O2 |
| OLED | SCL - 22, SDA - 21 |
| RGB LED | 4 |
| RELAY | 13 |
| Servo Motor | S1 - 12, S2 - 2, S3 - 15|
| SD CARD | CS - 5, SCK - 18, MOSI - 23, MISO - 19 | 
| UART 0 | TX0 - 01, RX0 - 03 |

| **Components** | **GPIN PIN DESCRIPTION** |
|:----:|:----:|
|POT | 34 |
|PUSH BUTTON | 35 |
|LDR | 36 |
|Thermister | 39 |

|**ISOLATED IO PINS** | GPIO1 | GPIO2 | GPIO3 | GPIO4 |GPIO5 |
|:----:|:----:| :-----: | :------: | :-----: | :---------: |
| | GPIO12 |GPIO13 | GPIO14 |GPIO15 |GPIO16 |
| |GPIO17 |GPIO18 |GPIO19 |GPIO23 |GPIO25 |
| |GPIO26 |GPIO27 |GPIO32 |GPIO33 |GPIO34 |
| |GPIO36 | GPIO39| - | - | -|

| **Analog Inputs (ADC)** | GPIO4 |GPIO2 | GPIO15 |GPIO13 | GPIO12 |
|:----:|:----:| :-----: | :------: | :-----: | :---------: |
| |GPIO14 |GPIO27 | GPIO26 | GPIO25 | GPIO33 |
| |GPIO32 |GPIO35 |GPIO34 |GPIO39 | GPIO36 |

---------

### List of Programs

| **No** | **Program Name** | 
| :---: | :---       |
|1|Program to Blink On Board LED |
|2|Program for RGB LED |
|3|Program for Toggle Switch|
|4|Program for LDR Interface|
|5|Program for Relay Interface|
|6|Program for Thermistor|
|7|Program for Bluetooth Interface|
|8|Program for I2C OLED Interface|
|9|Program for I2C LCD Interface|
|10|Program for DHT11 Sensor using Serial Monitor |
|11|Program for LED using Blynk Server |
|12|Program for DHT11 Sensor using Blynk Server |
|13|Program for SD Card Interface |

*******

|  **Program-1** |
| :---- |
|Program for On Board LED |
|[Source Code](Blink_LED/Blink_LED.ino)|

  -----------

|  **Program-2** |
| :---- |
|Program for RGB LED |
|Libraries Required : [NeoPixel](Libraries/Adafruit_NeoPixel-master.zip)|
|[Source Code](rgb1/rgb1.ino)|

  -----------

|  **Program-3** |
| :---- |
|Program for Toggle Switch|
|[Source Code](Button-Buzzer-Led/Button-Buzzer-Led.ino)|

  -----------

|  **Program-4** |
| :---- |
|Program for LDR Interface|
|[Source Code](LDR-Serial/LDR-Serial.ino)|

  -----------

|  **Program-5** |
| :---- |
|Program for Relay Interface|
|[Source Code](Relay/Relay.ino)|

  -----------

|  **Program-6** |
| :---- |
|Program for Thermistor|
|[Source Code](NTC-Serial/NTC-Serial.ino)|

  -----------

|  **Program-7** |
| :---- |
|Program for Bluetooth Interface|
|[Setup Guide](https://github.com/izzarzn/RVCE-Manual/blob/8c35d088e2966602eee8186a694751c35ca45c0d/Bluetooth.md)|
|Libraries Required : [SoftwareSerial](Libraries/espsoftwareserial-main.zip)|
|[Source Code](BT-LED/BT-LED.ino)|

  -----------

|  **Program-8** |
| :---- |
|Program for I2C OLED Interface|
|Libraries Required : [U8g2](Libraries/U8g2.zip)|
|[Source Code](HelloWorld-OLED/HelloWorld-OLED.ino)|

  -----------

|  **Program-9** |
| :---- |
|Program for I2C LCD Interface|
|Libraries Required : [Wire](Libraries/Wire.zip), [LiquidCristal](Libraries/LiquidCrystal_I2C.zip)|
|[Source Code](HelloWorld_-_LCD/HelloWorld_-_LCD.ino)|

  -----------

|  **Program-10** |
| :---- |
|Program for DHT11 Sensor using Serial Monitor |
|Libraries Required : [Adafruit](Libraries/Adafruit_Sensor-master.zip), [DHT Sensor](Libraries/DHT-sensor-library-master.zip) |
|[Source Code](DHT11-Serial/DHT11-Serial.ino)|

  -----------

|  **Program-11** |
| :---- |
|Program for LED using Blynk Server |
|Libraries Required : [Blynk](Libraries/blynk-library-master.zip) |
 [Click Here For Setup Guide](Blynk_Led.md)
|[Source Code](LED-Blynk/LED-Blynk.ino)|

  -----------

|  **Program-12** |
| :---- |
|Program for DHT11 Sensor using Blynk Server |
[Click Here For Setup Guide](Blynk_DHT.md)
|Libraries Required : [Blynk](Libraries/blynk-library-master.zip), [DHT Sensor](Libraries/DHT-sensor-library-master.zip) |
|[Source Code](DHT11-Blynk/DHT11-Blynk.ino)|

  -----------

|  **Program-13** |
| :---- |
|Program for SD Card Interface |
|[Source Code](SD_card/SD_card.ino)|

--------------

#### In Case of `PORT Error` Download and Install the following Drivers. 

|**External Drivers**| **Links** |
|:-------:|:-------: |
|CP210x Driver | [Click Here](CP210x_Windows_Drivers.zip)|
|CH340 Driver (Windows) | [Click Here](CH341SER.zip)|
|CH340 Driver (Mac) |[Click Here](CH341SER-MAC.zip) 

------------

<h3 align = "center">Don't forget to ⭐ this repo<h3>


<h2 align = "center"> 😻 BE INSPIRED, BUT DONT COPY ! FORK IT !!😻 <h2>


------------

