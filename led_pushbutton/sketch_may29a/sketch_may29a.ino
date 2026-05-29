int myLED=4;
int pushbutton=7;
int pinstate;

void setup() {
pinMode(myLED,OUTPUT);
pinMode(pushbutton, INPUT);
digitalWrite(myLED, LOW);//
}

void loop() {
pinstate=digitalRead(pushbutton);

if(pinstate==1){
  digitalWrite(myLED,HIGH);
  }

else digitalWrite(myLED,LOW);


}