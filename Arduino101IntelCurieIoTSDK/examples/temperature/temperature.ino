#include <Bridge.h>
#include "Countly.h"
IPAddress ipAddress(192, 168, 1, 177);
Countly countly = Countly("SERVER_URL", "APP_KEY",ipAddress);

void setup() {
	Serial.begin(9600);
	countly.init();
}

void loop() {
	countly.event("Temperature", 25);
	delay(2000);
}
