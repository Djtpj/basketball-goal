#include <TM1637Display.h>

// Variables for Display control
const int CLOCK = 4;
const int SIGNAL = 3;

// Delay between each update of the number on the display
const int TICK_SPEED_SECONDS = 2;

TM1637Display display = TM1637Display(CLOCK, SIGNAL);

void setup() {
  // Brightness is on a scale of 1-7
  const int BRIGHTNESS = 7;
  display.setBrightness(BRIGHTNESS);
}

void loop() {
  // We only want to generate four digit numbers because that's how many the display can support. No more, no less
  const int MAX_VAL = 9999, MIN_VAL = 1000;
  display.showNumberDec(random(MIN_VAL, MAX_VAL));

  delay(TICK_SPEED_SECONDS * 1000);
}