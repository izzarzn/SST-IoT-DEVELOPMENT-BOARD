# Installation of ESP32 board support package in Arduino IDE
## Installing with Boards Manager

Starting with 1.8.9, Arduino allows installation of third-party platform packages using Boards Manager. We have packages available for Windows, Mac OS, and Linux (32 and 64 bit).

- Install the current upstream Arduino IDE at the 1.8.9 level or later. The current version is on the [Arduino website](https://www.arduino.cc/en/main/software).
- Start Arduino and open the Preferences window.
 ![1](https://user-images.githubusercontent.com/65058286/198346957-d7a56af2-0f33-4590-b67c-8f0ca5da566d.jpg)

- Enter ```https://dl.espressif.com/dl/package_esp32_index.json``` into the *File>Preferences>Additional Boards Manager URLs* field of the Arduino IDE. You can add multiple URLs, separating them with commas.
![2](https://user-images.githubusercontent.com/65058286/198346965-93b3e243-0662-41b6-934a-7612289e2a68.png)
- Click on "OK"

- Open Boards Manager from Tools > Board menu
![3](https://user-images.githubusercontent.com/65058286/198346974-58ebafd8-5781-477b-8532-4ebce5c8042b.jpg)

- And install *esp8266* platform 
![4](https://user-images.githubusercontent.com/65058286/198346978-fcdc0b03-66bb-4281-a860-b23cffe9f350.jpg)

- Once esp8266 board support is installed click on "Close"
![5](https://user-images.githubusercontent.com/65058286/198346979-95e0213c-217a-4275-924d-2c9eec9d70b7.jpg)

- (And don't forget to select your ESP32 DEVMODULE board from Tools > Board menu after installation).

