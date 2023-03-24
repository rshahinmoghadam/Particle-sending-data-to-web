// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>



#define DHTPIN A5


#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {
    
dht.begin();

}

void loop() {

delay(30s);

float temp = dht.getTempCelcius();


Particle.publish("temp", String(temp), PRIVATE);


}