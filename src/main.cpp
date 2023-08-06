// This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
#include "Arduino.h"
#include "DigiKeyboard.h"

// choose your keyboard layout: 
// #define LAYOUT_US_INTERNATIONAL
#define LAYOUT_PORTUGUESE_BRAZILIAN

void setup()
{
  // empty
}
void loop()
{
  DigiKeyboard.delay(2000);
  // Press CTRL + ALT + T to OPEN TERMINAL
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, MOD_ALT_LEFT | KEY_T);
  DigiKeyboard.delay(3000);
  // OPEN CHROME
  DigiKeyboard.print("google-chrome-stable");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(3000);
  // OPEN YOUTUBE
  DigiKeyboard.print("https://youtu.be/dQw4w9WgXcQ?t=43s");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(3000);
  // OPEN NEW TAB
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_T);

  // OPEN FAKE WINDOWS UPDATE
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("https://fakeupdate.net/win10ue");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for (;;)
  { /*empty*/
  }
}