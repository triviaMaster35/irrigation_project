// Input
#define TEMP
#define HUMID
#define MOIST
#define H2O_SIGNAL
#define DIAL_1
#define DIAL_2
#define DIAL_3
#define DIAL_4
#define DIAL_5
#define DIAL_6
#define DIAL_7

// Output
#define DHT_SWITCH
#define H2O_SWITCH
#define LED

void setup() {
  // Input
  pinMode(TEMP, INPUT);
  pinMode(HUMID, INPUT);
  pinMode(MOIST, INPUT);
  pinMode(DIAL_1, INPUT);
  pinMode(DIAL_2, INPUT);
  pinMode(DIAL_3, INPUT);
  pinMode(DIAL_4, INPUT);
  pinMode(DIAL_5, INPUT);
  pinMode(DIAL_6, INPUT);
  pinMode(DIAL_7, INPUT);

  // Output
  pinMode(DHT_SWITCH, OUTPUT);
  pinMode(H2O_SWITCH, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
  delay(500);
}
