const int red = 8;
const int yellow = 9;
const int green = 10;
const int red1 = 5;
const int yellow1 = 6;
const int green1 = 7;
int time1 = 7000;
int time2 = 3000;
int time3 = 1000;
int time4 = 800;
int multiple = 2;
void setup() {
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(yellow1, OUTPUT);
pinMode(red1, OUTPUT);
pinMode(green1, OUTPUT);
}
void loop() {
digitalWrite(green1, HIGH); // green1
digitalWrite(red, HIGH); // red
delay(time1);
digitalWrite(yellow, HIGH); // yellow
digitalWrite(green1, LOW); // green1
digitalWrite(yellow1, HIGH); // yellow1


}
