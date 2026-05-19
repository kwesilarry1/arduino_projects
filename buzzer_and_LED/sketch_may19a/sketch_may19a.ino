int buzzer=2;
int myLed=3;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(myLed, OUTPUT);
}

void loop() {
digitalWrite(myLed,HIGH);
digitalWrite(buzzer, HIGH);
delay(1000);
digitalWrite(myLed,LOW);
digitalWrite(buzzer, LOW);
delay(1000);





}