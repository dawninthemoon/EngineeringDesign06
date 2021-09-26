#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  int count = 0;
  while (1) {
    Blink(1000);
    if (++count >= 5) {
      digitalWrite(PIN_LED, 1);
      break;
    }
  }
}

void loop() {

}

void Blink(int blinkDelay) {
  digitalWrite(PIN_LED, 0);
  delay(blinkDelay);
  digitalWrite(PIN_LED, 1);
  delay(blinkDelay); 
}
