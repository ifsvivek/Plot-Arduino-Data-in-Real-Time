void setup() {
  Serial.begin(9600);
}

void loop() {
  float value = analogRead(A0) / 1023.0 * 5.0;
  Serial.println(value);
  delay(10);
}
