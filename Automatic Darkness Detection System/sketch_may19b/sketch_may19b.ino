int LDR = A2;
int LED = 4;
int buzzer = 2;
float LDR_value;
bool LED_state;
bool change_in_LED_state;

void setup() {
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  LDR_value= analogRead(LDR);
  Serial.println(LDR_value);
  if (LDR_value> 600) {
    digitalWrite(LED, HIGH);
    LED_state = true;
  }
  if (LDR_value< 500) {
    digitalWrite(LED, LOW);
    LED_state = false;
  }


  if (change_in_LED_state != LED_state) {
    digitalWrite(buzzer, HIGH);
    delay(100);
  }
  if (change_in_LED_state == LED_state) {
    digitalWrite(buzzer, LOW);
    delay(100);
  }

  
  change_in_LED_state = LED_state;