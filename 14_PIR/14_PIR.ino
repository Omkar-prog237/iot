int pirPin = 7;      
int ledPin = 13;     
void setup() { 

pinMode(pirPin, INPUT);  
pinMode(ledPin, OUTPUT);  
Serial.begin(9600);      

} 
void loop() { 
int motion = digitalRead(pirPin);  
if (motion == HIGH) { 

digitalWrite(ledPin, HIGH);   
Serial.println("PIR Motion Detected !"); 
} else { 
 
digitalWrite(ledPin, LOW);    
Serial.println("PIR not detected any motion"); 
} 
delay(1000);  
} 
