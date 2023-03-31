
int led_pin = 8;

void setup() {
  // put your setup code here, to run once:

  pinMode(led_pin,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0; i<100; i++){

      
    //  digitalWrite(led_pin,HIGH);
    //  delay(1000);
     // digitalWrite(led_pin,LOW);
    //  delay(1000); 

      analogWrite(13,5);
      delay(1000);
   //  	 analogWrite(13,255);
	//delay(1000);
    }
}
