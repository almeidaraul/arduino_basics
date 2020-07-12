#define CURRENT_LED 12

void setup() {
  pinMode(CURRENT_LED, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(CURRENT_LED, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(CURRENT_LED, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
}
