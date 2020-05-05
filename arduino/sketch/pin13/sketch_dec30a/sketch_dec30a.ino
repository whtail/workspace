void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(13,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
