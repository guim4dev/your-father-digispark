#include <DigiKeyboardPtBr.h>

size_t DigiKeyboardDevicePtBr::write(uint8_t chr)
{
  // çÇ
  if (chr == 195)
  {
    sendKeyStroke(0x33);
    // sendKeyStroke(0x33, MOD_SHIFT_LEFT);
  }
  else
  {
    unsigned int temp = pgm_read_word_near(_ascii_de_map + chr);
    unsigned char low = temp & 0xFF;
    unsigned char high = (temp >> 8) & 0xFF;
    sendKeyStroke(low, high);
  }

  return 1;
}

void DigiKeyboardDevicePtBr::sendKeyReport(uchar *array, const unsigned int size)
{
  while (!usbInterruptIsReady())
  {
    // Note: We wait until we can send keyPress
    //       so we know the previous keyPress was
    //       sent.
    usbPoll();
    _delay_ms(5);
  }

  usbSetInterrupt(array, size);
}