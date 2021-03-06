// includes IR sensor libary
#include <SparkFunMLX90614.h>

// sets the IR module to object 'therm'
IRTherm therm

void setup() {
  // starts serial monitor
  serial.begin(9600);
  delay(500);

  // starts temperature reading
  therm.begin();
}

void loop() {
  Serial.print(therm.readObjectTempC());
  Serial.print(" C");
  // wait 5 seconds before accessing sensor again
  // should response every 2 seconds
  delay(1500);
}
