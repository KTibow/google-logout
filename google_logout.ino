// From startup it takes 2.4 seconds to run

void setup() {
  // initialize control over the keyboard:
  Keyboard.begin();
  // initialize the led as out
  pinMode(13, OUTPUT);
  // blink to say waiting for machine
  digitalWrite(13, HIGH);
  delay(275);
  digitalWrite(13, LOW);
  delay(275);
  digitalWrite(13, HIGH);
  delay(275);
  digitalWrite(13, LOW);
  delay(275);
  // Open linux run dialog
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();
  delay(200);
  // Open spotlight
  // Press 3 times because on Windows this changes keybaord layout
  for (int i = 0; i < 3; i++){
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(' ');
    Keyboard.releaseAll();
    delay(200);
  }
  // Open run
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(200);
  // If on some other thing, delete characters (there could be "   r")
  Keyboard.write(KEY_BACKSPACE);
  Keyboard.write(KEY_BACKSPACE);
  Keyboard.write(KEY_BACKSPACE);
  Keyboard.write(KEY_BACKSPACE);
  // Open webpage. Comment out the google-logout url and uncomment the example.com url to make it not log you out.
  Keyboard.print("https://ktibow.github.io/google-logout/");
  //Keyboard.print("http://example.com/");
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
