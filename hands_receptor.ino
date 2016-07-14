int analogEsq = A0;
int analogDir = A1;
int randomDelay;

void setup() {
  Serial.begin(9600);
}

void loop() {
  randomDelay = random(100, 1000);
  
  //Serial.print("Esq: ");
  Serial.println(analogRead(analogEsq));

  delay(randomDelay);
  
  //Serial.print("Dir: ");
  Serial.println(analogRead(analogDir));
  
  delay(randomDelay);
}
