
 /*
 * This is the Arduino code Infrared Obstacle Avoidance module
 * watch the video for details and demo https://youtu.be/T3Li128GBlM
 *  * 
 * Written by Ahmad Nejrabi for Robojax Video channel www.Robojax.com
 * Date: Dec 28, 2017, in Ajax, Ontario, Canada
 * Permission granted to share this code given that this
 * note is kept with the code.
 * Disclaimer: this code is "AS IS" and for educational purpose only.
 * this code has been downloaded from http://robojax.com/learn/arduino/ */
#include <Servo.h>

Servo myservo; 

void setup() {
 Serial.begin(9600);
 myservo.attach(2);  // attaches the servo on GIO2 to the servo object
 pinMode(5, INPUT);// set pin as input

}

void loop() {
  //Written for Robojax on Dec 28, 2017

    int pos;

  
  
  int detect = digitalRead(5);// read obstacle status and store it into "detect"
  if(detect == LOW){
    pos = 150;
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(30);                       // waits 15ms for the servo to reach the position
    
   Serial.println("Obastacle on the way"); 
  } else{
   pos = 0;
   myservo.write(pos); 
   Serial.println("All clear");  
  }
  delay(30);
}
