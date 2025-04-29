#define TRIG_PIN 8  
#define ECHO_PIN 9 

void setup() { 
Serial.begin(9600);       

 
pinMode(TRIG_PIN, OUTPUT);  
pinMode(ECHO_PIN, INPUT);  
} 
void loop() { 
long duration; 
float distance; 

digitalWrite(TRIG_PIN, LOW); 
delayMicroseconds(2); 
digitalWrite(TRIG_PIN, HIGH); 
delayMicroseconds(10); 
digitalWrite(TRIG_PIN, LOW); 
 
duration = pulseIn(ECHO_PIN, HIGH); 
 
distance = duration * 0.034 / 2; 
 
Serial.print("Distance: "); 
Serial.print(distance); 
Serial.println(" cm"); 
delay(500); 
} 
