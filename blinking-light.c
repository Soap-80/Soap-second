const int x = 13;
void setup() {
  pinMode(x,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(x,HIGH);//makes the vltage high
  delay(700); //waits for 0.7 seconds
  digitalWrite(x,LOW);//
  delay(700);
}
/* 

*/