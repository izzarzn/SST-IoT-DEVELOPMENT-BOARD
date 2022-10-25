void setup() {
  // put your setup code here, to run once:
    pinMode(14,OUTPUT); // Buzzer
    pinMode(2,OUTPUT);  //LED
    pinMode(35,INPUT);
    pinMode(18,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

    if(digitalRead(35)== HIGH)
       {
        digitalWrite(14,HIGH);
        digitalWrite(2,HIGH);      
        digitalWrite(18,HIGH);        
       }
    else
       {
        digitalWrite(14,LOW);
        digitalWrite(2,LOW);  
        digitalWrite(18,LOW);         
       }

}
