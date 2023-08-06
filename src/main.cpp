#include "Arduino.h"
#include "YourFatherDigispark.h"

void setup()
{
  // empty
}
void loop()
{
  // TODO: discover layout the correct one automatically
  // Use DigiKeyboardPtBr for PT-BR keyboard layout; Use DigiKeyboard for US keyboard layout
  DigiKeyboardDevice keyboard = DigiKeyboardPtBr;
  // DigiKeyboardDevice keyboard = DigiKeyboard;

  keyboard.delay(2000);
  // Press CTRL + ALT + T to OPEN TERMINAL
  keyboard.sendKeyStroke(MOD_CONTROL_LEFT, MOD_ALT_LEFT | KEY_T);
  keyboard.delay(3000);
  // OPEN CHROME
  keyboard.print("google-chrome-stable");
  keyboard.sendKeyStroke(KEY_ENTER);

  keyboard.delay(3000);
  // OPEN YOUTUBE
  keyboard.print("https://youtu.be/dQw4w9WgXcQ?t=43s");
  keyboard.sendKeyStroke(KEY_ENTER);

  keyboard.delay(3000);
  // OPEN NEW TAB
  keyboard.sendKeyStroke(MOD_CONTROL_LEFT, KEY_T);

  // OPEN FAKE WINDOWS UPDATE
  keyboard.delay(3000);
  keyboard.print("https://fakeupdate.net/win10ue");
  keyboard.sendKeyStroke(KEY_ENTER);
  keyboard.delay(3000);
  keyboard.sendKeyStroke(KEY_F11);
  for (;;)
  { /*empty*/
  }
}