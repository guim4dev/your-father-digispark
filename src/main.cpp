// This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
#include "Arduino.h"
#include "DigiKeyboard.h"

// choose your keyboard layout:
#define LAYOUT_US_ENGLISH
// #define LAYOUT_PORTUGUESE_BRAZILIAN

void openLinuxChrome()
{
  // Press CTRL + ALT + T to OPEN TERMINAL
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(500);

  // OPEN CHROME
  DigiKeyboard.print("google-chrome-stable");
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // OPEN NEW TAB
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
}

void openNewTabWithUrl(const char *url)
{
  // OPEN NEW TAB
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT);
  // OPEN URL
  DigiKeyboard.print(url);
  DigiKeyboard.delay(250);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void toggleFullscreen()
{
  DigiKeyboard.sendKeyStroke(KEY_F11);
}

void setup()
{
  // empty
}
void loop()
{
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyPress(0);

  openLinuxChrome();
  DigiKeyboard.delay(1000);

  openNewTabWithUrl("https://youtu.be/dQw4w9WgXcQ?t=43s");
  DigiKeyboard.delay(1000);

  openNewTabWithUrl("https://fakeupdate.net/win10ue");
  DigiKeyboard.delay(250);
  toggleFullscreen();
  for (;;)
  { /*empty*/
  }
}