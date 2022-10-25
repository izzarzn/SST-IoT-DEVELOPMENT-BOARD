void setup() {
  // put your setup code here, to run once:
   pinMode(13,OUTPUT); //Relay
   pinMode(35,INPUT);  //Button
   pinMode(2,OUTPUT);  //LED
}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(35))
       {
        digitalWrite(2,HIGH);
        digitalWrite(13,HIGH);
       }
       else
       {
        digitalWrite(2,LOW);
        digitalWrite(13,LOW);
        
       }
}
