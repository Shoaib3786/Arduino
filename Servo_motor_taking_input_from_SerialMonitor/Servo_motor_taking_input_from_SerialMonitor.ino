  #include<Servo.h>
Servo s1;
int sPin = 2;
String msg = "Enter Angle: ";
void setup() {
  // put your setup code here, to run once:

  s1.attach(sPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print(msg);
//  int v = Serial.parseInt();
//  while(Serial.available()==0){
//    
//  }
//  for (int pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    s1.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//
//  for (int pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//    s1.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
  
  s1.write(90);

}
