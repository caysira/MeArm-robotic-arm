// Basic test code, to work with HC-05 Bluetooth board and Smartphone Bluetooth apps
// All data received via the Bluetooth should be printed on the Serial-Debug Interface

#include <SoftwareSerial.h>

SoftwareSerial HC05(10, 11); // RX | TX

void setup()
{
  Serial.begin(9600);
  HC05.begin(38400);
  Serial.println("The bluetooth gates are open.\n Connect to HC-05 from any other bluetooth device with 1234 as pairing key!.");
}
 
void loop()
{
  // Feed any data from bluetooth to Terminal.
  if (HC05.available())
    Serial.write(HC05.read());
}
