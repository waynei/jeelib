// 
//   FILE:  dht11_test.pde
// PURPOSE: DHT11 library test sketch for Arduino
//

#include <Ports.h>
#include <PortsDHT.h>
#include <RF12.h>

#define DHT22_PORT  1

DHT dht22(DHT22_PORT);

void setup()
{
  Serial.begin(57600);
  Serial.println("DHT22 TEST PROGRAM ");
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT_LIB_VERSION);
  Serial.println();

}

void loop()
{
  
  int chk = dht22.read22();

  Serial.print("Read DHT22: ");
  switch (chk)
  {
    case 0: Serial.print("OK"); break;
    case -1: Serial.println("Checksum error"); break;
    case -2: Serial.println("Time out error"); break;
    default: Serial.println("Unknown error"); break;
  }

  Serial.print(" Humidity (%): ");
  Serial.print(dht22.humidity, 2);

  Serial.print(" Temperature (oC): ");
  Serial.println(dht22.temperature, 2);
  
  delay(2000);
}
//
// END OF FILE
//
