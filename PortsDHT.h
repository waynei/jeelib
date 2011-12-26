//
//    FILE: PortsDHT.h
// VERSION: 0.1
// PURPOSE: Temperature & Humidity Sensor library for Arduino
// LICENSE: GPL v3 (http://www.gnu.org/licenses/gpl.html)
//
//     URL: http://arduino.cc/playground/Main/DHT11Lib


#include <Ports.h>

#define DHT_LIB_VERSION "0.1"

class DHT : public Port {
public:
	DHT (int num) : Port (num) {}
	void connReset() const;
	int read11();
    int read22();
	double humidity;
	double temperature;

private:
	uint8_t bits[5];  // buffer to receive data
	int read();
};

//
// END OF FILE
//
