const int buzzer = 9; 
 
void setup(){
  pinMode(buzzer, OUTPUT); 
}
 
void loop(){
  tone(buzzer, 500); 
  delay(5000);      
  noTone(buzzer);    
  delay(5000);      
}
