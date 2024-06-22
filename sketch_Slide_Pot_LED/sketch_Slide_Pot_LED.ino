#define PIN_SLIDE_POT_A A0

int LED_RED_1 = 2;
int LED_RED_2 = 3;
int LED_YELLOW_1 = 4;
int LED_YELLOW_2 = 5;
int LED_GREEN_1 = 6;
int LED_GREEN_2 = 7;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_SLIDE_POT_A, INPUT );
  pinMode(LED_RED_1, OUTPUT);
  pinMode(LED_RED_2, OUTPUT);
  pinMode(LED_YELLOW_1, OUTPUT);
  pinMode(LED_YELLOW_2, OUTPUT);
  pinMode(LED_GREEN_1, OUTPUT);
  pinMode(LED_GREEN_2, OUTPUT);
}

void loop() {
  int slide_value = analogRead(PIN_SLIDE_POT_A);
  Serial.print("Slide Pot value: ");
  Serial.println(slide_value);
  if (slide_value > 170){
    digitalWrite(LED_GREEN_2, HIGH);
  }
  else{
    digitalWrite(LED_GREEN_2, LOW);
  }  
  if (slide_value > 340){
    digitalWrite(LED_GREEN_1, HIGH);
  }
  
  else{
    digitalWrite(LED_GREEN_1, LOW);
  } 
  if (slide_value > 510){
    digitalWrite(LED_YELLOW_2, HIGH);
  }
  else{
    digitalWrite(LED_YELLOW_2, LOW);
  } 
  if (slide_value > 680){
    digitalWrite(LED_YELLOW_1, HIGH);
  }
  else{
    digitalWrite(LED_YELLOW_1, LOW);
  }
  if (slide_value > 850){
    digitalWrite(LED_RED_2, HIGH);
  }
  else{
    digitalWrite(LED_RED_2, LOW);
  }
  if (slide_value > 1020){
    digitalWrite(LED_RED_1, HIGH);
  }
  else{
    digitalWrite(LED_RED_1, LOW);
  }
}