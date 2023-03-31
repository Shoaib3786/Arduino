
int potPin = A4;
int ledPin = 9;



int v = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(potPin,INPUT);
  
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

//reading the value from potentio meter ranges from 0 to 1023 bcz potentiometer is connected to analogPin A4.
  v = analogRead(potPin);

//now converting the value from potentiometer to the range of 0 to 255 as the led pin is connected to PWM whose range is 0 to 255.
// PWM is used to convert the analog values to digital values
  analogWrite(ledPin,v/4);


    

}
