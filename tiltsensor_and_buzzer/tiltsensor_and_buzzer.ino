int tiltPin = 2;
int Buzzer = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(tiltPin, INPUT_PULLUP);
  pinMode(Buzzer, OUTPUT);

}

void loop() { 
  // put your main code here, to run repeatedly:
int state = digitalRead(tiltPin);

if (state == LOW){
  digitalWrite(Buzzer, HIGH);

}
else {
  digitalWrite(Buzzer, LOW);
}
}
