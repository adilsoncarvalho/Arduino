// onboard_led_blink.ino

const int DELAY = 3000 / 2; // 1,500ms each time
const int LED   = 13;       // the pin that the LED is attached to

// the setup routine runs once when you press reset:
void setup()  {
  pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()  {
  digitalWrite(LED, HIGH);
  delay(DELAY);
  digitalWrite(LED, LOW);
  delay(DELAY);
}
