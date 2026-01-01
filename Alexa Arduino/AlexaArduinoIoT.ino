
#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

#define led1 13  
#define led2 12  
#define wifiLed   2   

#define SECRET_DEVICE_KEY "Bi5zHvn?#g1vxIEZ!3W4xS@ty"  //Enter Secret Key
const char THING_ID[]           = "9f150f66-4e64-43d0-aa3a-4654aee22235";  //Enter THING ID
const char DEVICE_LOGIN_NAME[]  = "9f150f66-4e64-43d0-aa3a-4654aee22235"; //Enter DEVICE ID

const char SSID[]               = "abcd";    // Network SSID (name)
const char PASS[]               = "ZXCV@098";    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onSwitch1Change();
void onSwitch2Change();
CloudSwitch switch1;
CloudSwitch switch2;

void initProperties(){
  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.setThingId(THING_ID);
  ArduinoCloud.addProperty(switch1, READWRITE, ON_CHANGE, onSwitch1Change);
  ArduinoCloud.addProperty(switch2, READWRITE, ON_CHANGE, onSwitch2Change);
  }
WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);

void setup() {
  // Initialize serial and wait for port to open:
  Serial.begin(9600);
  // This delay gives the chance to wait for a Serial Monitor without blocking if none is found
  delay(1500);
  // Defined in thingProperties.h
  initProperties();
  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(wifiLed,OUTPUT);
  //During Starting LEDs should TURN OFF
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(wifiLed, LOW);  //Turn OFF WiFi LED
}

void loop() {
  ArduinoCloud.update();

  if (WiFi.status() != WL_CONNECTED)
  {
    digitalWrite(wifiLed, LOW); //Turn OFF WiFi LED
  }
  else{
    digitalWrite(wifiLed, HIGH); //Turn ON WiFi LED
  }
}

void onSwitch1Change() {
  if (switch1 == 0)
  {
    digitalWrite(led1, LOW);
    Serial.println("Device1 OFF");
   }
  if (switch1 == 1)
  {
    digitalWrite(led1, HIGH);
    Serial.println("Device1 ON");
   }
}
void onSwitch2Change() {
  if (switch2 == 0)
  {
    digitalWrite(led2, LOW);
    Serial.println("Device2 OFF");
   }
  if (switch2 == 1)
  {
    digitalWrite(led2, HIGH);
    Serial.println("Device2 ON");
   }
}

