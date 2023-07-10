#include <Servo.h>
Servo servo;
int angle = 10;
void setup() {
  servo.attach(8);
  servo.write(angle);
}
void loop() 
{ 
 // scan from 0 to 50 degrees
  for(angle = 10; angle < 190; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 190; angle > 10; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
}
