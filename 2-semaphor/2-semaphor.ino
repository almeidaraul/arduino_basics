//red, yellow and green LEDs; RED pedestrian LED, GREEN pedestrian LED:
#define RED 12
#define YEL 11
#define GRE 10
#define REP 9
#define GRP 8

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YEL, OUTPUT);
  pinMode(GRE, OUTPUT);
  pinMode(REP, OUTPUT);
  pinMode(GRP, OUTPUT);  
}

void loop() {
  //states (oriented by vehicle movement)
  int states[3][6] = {
    //{GRP, REP, GRE, YEL, RED, wait}
    {1, 0, 0, 0, 1, 1500}, //go
    {0, 1, 0, 1, 0, 1000}, //attention
    {0, 1, 1, 0, 0, 2000}  //halt
  };
  for (int state = 0; state < 3; state++) {
    for (int led = 0; led < 5; led++) {
      digitalWrite(led+8, states[state][led]);
    }
    delay(states[state][5]);
  }
}
