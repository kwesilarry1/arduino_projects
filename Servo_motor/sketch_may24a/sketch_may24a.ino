#include <Servo.h>
int buzzer = 8;
Servo myservo; 
float pos = 0; 
void setup() {
myservo.attach(9);
pinMode(buzzer, OUTPUT);
}

void loop() {
for (pos = 0; pos <= 180; pos += 1) {
myservo.write(pos);
digitalWrite(buzzer,HIGH);
delay(20);
}

for (pos = 180; pos >= 0; pos -= 1) { 
myservo.write(pos);
digitalWrite(buzzer,HIGH); 
delay(20);
}

}