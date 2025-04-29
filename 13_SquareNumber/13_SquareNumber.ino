#include <LiquidCrystal.h>


int num;
String s;

LiquidCrystal lcd1(6,7,2,3,4,5);     
   
void setup()
{
  lcd1.begin(16, 2);        
  lcd1.print("Enter the Number");
  Serial.begin(9600);


}
void loop()
{
  if(Serial.available()){
    num = Serial.parseInt();
    lcd1.clear();
    delay(500);
                
    lcd1.setCursor(0, 0);
    s="Square of "+ String(num)+" : "+(num*num);
    lcd1.print(s);
    lcd1.setCursor(0, 1);
    lcd1.print(num*num);
    delay(10000);  
    lcd1.clear();
    lcd1.setCursor(0, 0);
    lcd1.print("Enter the Number");
 }


}
