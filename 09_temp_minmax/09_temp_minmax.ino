#include <DHT.h>
#define DHTPIN 2       
#define DHTTYPE DHT11  

DHT dht(DHTPIN, DHTTYPE);

float maxTemp = -1000;  
float minTemp = 1000;   

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  
  float temperatureC = dht.readTemperature();
  float temperatureF = temperatureC * 9.0 / 5.0 + 32.0;
   
  if (temperatureC > maxTemp) {
    maxTemp = temperatureC;
  }
  if (temperatureC < minTemp) {
    minTemp = temperatureC;
  }
 
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C, ");
  Serial.print(temperatureF);
  Serial.println(" °F");

  
  Serial.print("Max Temperature: ");
  Serial.print(maxTemp);
  Serial.print(" °C, Min Temperature: ");
  Serial.print(minTemp);
  Serial.println(" °C");
}
