

#include <Servo.h>

Servo myservo; 

void setup() {
 Serial.begin(9600);
 myservo.attach(2);  // attaches the servo on GIO2 to the servo object
 pinMode(5, INPUT);// set pin as input

}

void loop() {

    int pos;

  
  
  int detect = digitalRead(5);// read obstacle status and store it into "detect"
  if(detect == LOW){
    pos = 150;
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 30ms for the servo to reach the position
    
   Serial.println("Obastacle on the way"); 
  } else{
   pos = 0;
   myservo.write(pos); 
   Serial.println("All clear");  
  }
  delay(30);
}
