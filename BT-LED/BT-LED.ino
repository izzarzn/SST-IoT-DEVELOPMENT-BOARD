#include <SoftwareSerial.h>
 SoftwareSerial mySerial(16,17); // RX(16),TX(17)
 void setup() {
  // Open serial communications and wait for port to open:
     Serial.begin(9600);
     mySerial.begin(9600);
     pinMode(14,OUTPUT);
    }
 void loop() { // run over and over
  char  val;
   if (mySerial.available()) 
    {
      Serial.println("Data received!");
        val=mySerial.read();
        if(val=='1')
         digitalWrite(14,HIGH);
        if(val=='0')
         digitalWrite(14,LOW);
    }
 }
