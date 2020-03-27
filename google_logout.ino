// Takes only 1.5 seconds to run! Works on Mac OS (untested) and Windows!
// Comment out google-logout and uncomment example.com to just open example.com
//String url = "http://example.com/";
String url = "https://ktibow.github.io/google-logout/"
void setup() {
  // Start Keyboard
  Keyboard.begin();
  // initialize the led as out
  pinMode(13, OUTPUT);
  // wait for it to load
  delay(695);
  // Minimize all Mac windows so anything doesn't get typed in
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('h');
  Keyboard.press('m');
  Keyboard.releaseAll();
  delay(120);
  // Open the Windows Run dialog
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(170);
  // Type in the URL
  Keyboard.print(url);
  delay(95);
  Keyboard.write(KEY_RETURN);
  delay(45);
  // Open Spotlight Search
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();
  delay(170);
  // Type in the URL
  Keyboard.print(url);
  delay(95);
  Keyboard.write(KEY_RETURN);
  delay(45);
  // Let know that it's done
  digitalWrite(13, HIGH);
}

void loop() {
}
