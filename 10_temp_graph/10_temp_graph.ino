 #include "dht.h"
#define dataPin 2


dht DHT;
int temp;
int hum;


void setup() {
  Serial.begin(9600);
  delay(2000); 
}


void loop() {
  int readData = DHT.read11(dataPin);
  hum = DHT.humidity;
  temp = DHT.temperature;


 
  Serial.print(hum);  
  Serial.print(",");  
  Serial.println(temp);  


  delay(1000); 
}
