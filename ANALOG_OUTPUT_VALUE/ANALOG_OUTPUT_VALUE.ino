
int anlogPin = A3; 
int ledPin = 3;

float volt;
float potentInVal;

float v = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(anlogPin,INPUT);
  
  //Serial.begin(9600);
  
  pinMode(ledPin,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:

  potentInVal = analogRead(anlogPin);

//  volt = map(potentInVal, 0, 1023, 0, 255);
  
  volt = (1024./255.) * potentInVal;
  
  analogWrite(ledPin,volt);
  
  //Serial.println(readValue);
  //Serial.println(v);
  
  delay(100);
}
