
int pin = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH); //pin will set to High means it will glow/ON
  delay(1000);
  digitalWrite(pin,LOW); //pin will set to low means it will not glow/OFF
  delay(1000);
  
  
}
