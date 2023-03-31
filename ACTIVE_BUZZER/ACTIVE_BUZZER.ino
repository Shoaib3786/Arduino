
int buzPin = 5;

void setup() {
  // put your setup code here, to run once:

  pinMode(buzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(buzPin,HIGH);
  delay(140);
  digitalWrite(buzPin,LOW);
  delay(120);
}
