void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(36,INPUT);  //LDR
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println(analogRead(36));
    delay(1000);
}
