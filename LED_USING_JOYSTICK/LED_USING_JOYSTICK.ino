#include <Servo.h>


Servo s1;
int xPin = A0;
int yPin = A1;
int sPin = 4;
int s1Pin = 9;


void setup() {
  // put your setup code here, to run once:

  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);
  pinMode(sPin,INPUT);    
//  pinMode(13,OUTPUT);
  pinMode(s1Pin,OUTPUT);

//  digitalWrite(sPin,HIGH);  //for switch to work
  s1.attach(s1Pin);  //servo pin
  
  Serial.begin(9600);  //serial monitor


}

void loop() {
  // put your main code here, to run repeatedly:

  int xVal = analogRead(xPin);
  int Xval = map(xVal,0,1023,0,255);
  
  int yVal = analogRead(yPin);
  int Yval = map(yVal,0,1023,0,255); 
  
  int sVal = digitalRead(sPin);

  delay(200);
  
  Serial.print(" switch = ");
  Serial.print(sVal);
  
  Serial.print(" Xval = ");
  Serial.print(Xval);
  
  Serial.print(" Yval = ");
  Serial.println(Yval);

  s1.write(Xval);
  s1.write(Yval);

}
