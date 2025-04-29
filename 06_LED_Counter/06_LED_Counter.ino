#define GREEN_LED 4
#define YELLOW_LED 2
#define RED_LED 3

int counter = 0;

void setup() {
 
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);

  if (counter <= 100) {
    digitalWrite(GREEN_LED, HIGH);
  } else if (counter > 100 && counter <= 200) {
    digitalWrite(YELLOW_LED, HIGH);
  } else if (counter > 200) {
    digitalWrite(RED_LED, HIGH);
  }

  counter++;

  if (counter > 300) {
    counter = 0;
  }
  
  delay(100);
}
