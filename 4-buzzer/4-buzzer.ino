#define BUZZER_PIN 9

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

int freq = 1900;
void loop() {
  int freq = (freq+100)%2500;
  tone(BUZZER_PIN, freq);
  delay(1000);
  noTone(BUZZER_PIN);
  delay(1000);
}
