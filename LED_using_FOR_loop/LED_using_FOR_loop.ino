
int yPin = 2;
int gPin = 7;

void setup(){
  // put your setup code here, to run once:

  pinMode(yPin,OUTPUT);
  pinMode(gPin,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0; i<4; i++){
      digitalWrite(yPin,HIGH);
      delay(250);
      digitalWrite(yPin,LOW);
      delay(250);
    }
  
  delay(150);  
  
  for(int j=0; j<5; j++){
      digitalWrite(gPin,HIGH);
      delay(250);
      digitalWrite(gPin,LOW);
      delay(250);
    }
}
