const int MOTOR1 = 2;
const int MOTOR2= 3;
const int LED= 4;

void setup() {
pinMode(MOTOR1, OUTPUT);
pinMode(MOTOR2, OUTPUT);
pinMode(LED, OUTPUT);

digitalWrite(MOTOR1, HIGH);
delay(3500);
digitalWrite(MOTOR1, LOW);
delay(1000);
digitalWrite(MOTOR2, HIGH);
delay(700);
digitalWrite (MOTOR2, LOW);
delay(1500);
digitalWrite (LED, HIGH);
delay(650);
digitalWrite (LED, LOW);
delay(650);
digitalWrite (LED, HIGH);
delay(650);
digitalWrite (LED, LOW);
delay(1000);
}
void loop() {
  
digitalWrite (LED, HIGH);
}

