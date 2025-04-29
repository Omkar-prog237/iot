#include <DHT.h>
#define DHTPIN 2     // Pin where the DHT11 sensor is connected
#define DHTTYPE DHT11   // Type of sensor (DHT11 or DHT22)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
 
  float temperature = dht.readTemperature(); 
  float humidity = dht.readHumidity();       
 
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}
