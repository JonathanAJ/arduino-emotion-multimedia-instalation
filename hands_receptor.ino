int analog = A0;
int numValor = 0;
char buffer[50];

void setup() {
  Serial.begin(9600);
}

void loop() {
  sprintf(buffer, "%d", analogRead(analog));
  Serial.println(buffer);
  delay(200);
}
