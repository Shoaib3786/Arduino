#include <Servo.h>


Servo s1;
int xPin = A0;
int yPin = A1;
int sPin = 4;
int s1Pin = 12;   //servo(s1) pin 


void setup() {
  // put your setup code here, to run once:

  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(sPin,INPUT);    
//  pinMode(13,OUTPUT);
  pinMode(s1Pin,OUTPUT);

  digitalWrite(sPin,HIGH);  //for joystick switch to work
 
  s1.attach(s1Pin);  //servo pin
  
  Serial.begin(9600);  //serial monitor


}

void loop() {
  // put your main code here, to run repeatedly:

  int xVal = analogRead(xPin);
  //analog read takes value from 0 to 1023 but sevo takes value from 0 to 180 so we have to map it just like dimmable led.
  int Xval = map(xVal,0,1023,0,180);  
  
  int yVal = analogRead(yPin);
  int Yval = map(yVal,0,1023,0,180); 
  
  int sVal = digitalRead(sPin);

  delay(200);
  
  Serial.print(" switch = ");
  Serial.print(sVal);
  
  Serial.print(" Xval = ");
  Serial.print(Xval);
  
  Serial.print(" Yval = ");
  Serial.println(Yval);

//if using joystick for one servo chose either of the xaxis(either xval or yval)
  s1.write(Xval);
//  s1.write(Yval);

}
