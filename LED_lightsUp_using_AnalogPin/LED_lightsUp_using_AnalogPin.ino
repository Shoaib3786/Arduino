
int algPin = 3;

void setup() {
  // put your setup code here, to run once:

  pinMode(algPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(algPin,225);
  
}
