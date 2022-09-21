#define LED_PIN 7
int toggle;

void setup() {
 pinMode(LED_PIN, OUTPUT);
 toggle = 0;
}

void loop() {
  digitalWrite(LED_PIN, 0);
  delay(1000);

  for (int i = 0; i < 11; i++) {
    toggle = toggle_state(toggle);
    digitalWrite(LED_PIN, toggle);
    delay(100);
  }
  
  while(1) {}
}

int toggle_state(int toggle) {
  return !toggle;
}
