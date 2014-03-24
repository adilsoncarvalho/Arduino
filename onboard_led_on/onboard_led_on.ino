// onboard_led_on.ino

const int LED = 13; // the pin that the LED is attached to

// the setup routine runs once when you press reset:
void setup()  {
  pinMode(LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()  {
  digitalWrite(LED, HIGH);
}
