void setup() {
  // initialize control over the keyboard:
  Keyboard.begin();
  // initialize the led as out
  pinMode(13, OUTPUT);
  delay(1100);
  // Open run
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(300);
  // Open webpage
  Keyboard.print("https://ktibow.github.io/google-logout/");
  delay(200);
  Keyboard.write(KEY_RETURN);
  // Blink the LED to indicate done
  while(true) {
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
  }
  Keyboard.end();
}

void loop() {
}
