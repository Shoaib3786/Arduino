
int anlPin = A3;
int v=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(anlPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  v = analogRead(anlPin);
  Serial.println(v);
  delay(500);
  
 
}
