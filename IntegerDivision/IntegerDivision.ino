
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  int ii = 5;
  int ij = 3;
  float result;
  
  result = (float)ii / ij;
  
  Serial.println(result);
  delay(10000);
}
