#include <dmoscillator.h>

DMOscillator *osc;
float frequency = 10;

void setup() {
  // put your setup code here, to run once:
  osc = new DMOscillator(13,  OscillationMode::infinite);
  //pinMode(13, OUTPUT);
  osc->oscillateHz(frequency);

}

void loop() {
  osc->update();
  /*int half_period_ms = 500 / frequency;

  digitalWrite(13, HIGH);
  delay(half_period_ms);

  digitalWrite(13, LOW);
  delay(half_period_ms);*/
}
