#define BTN_A_PIN 7
#define BTN_B_PIN 8
#define BTN_C_PIN 9
#define BZR_PIN 10
#define LED_A_PIN 11
#define LED_B_PIN 12
#define LED_C_PIN 13

const int freq[8] = {0, 261, 293, 329, 349, 391, 440, 493};

void setup(){
  for (int out_pin=10; out_pin < 14; out_pin++) {
    pinMode(out_pin, OUTPUT);
  }
  for (int in=7; in < 10; in++) {
    pinMode(in, INPUT_PULLUP);
  }
}

void loop(){
  int st[3] = {!digitalRead(BTN_A_PIN), !digitalRead(BTN_B_PIN), !digitalRead(BTN_C_PIN)};

  int cur_freq = (st[0]<<2) + (st[1]<<1) + st[2];
  if (cur_freq) {
    tone(BZR_PIN, freq[cur_freq]);
  } else {
    noTone(BZR_PIN);
  }
  digitalWrite(LED_A_PIN, st[0]);
  digitalWrite(LED_B_PIN, st[1]);
  digitalWrite(LED_C_PIN, st[2]);
}
