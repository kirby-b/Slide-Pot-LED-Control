#define PIN_SLIDE_POT_A A0

int LED_RED_1 = 3;
int LED_RED_2 = 2;
int LED_YELLOW_1 = 5;
int LED_YELLOW_2 = 4;
int LED_GREEN_1 = 7;
int LED_GREEN_2 = 6;
int arr_len = 6;

int leds[] = {LED_GREEN_1,LED_GREEN_2,LED_YELLOW_1,LED_YELLOW_2,LED_RED_1,LED_RED_2};
String values[] = {"170","340","510","680","850","1020"};

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
  for ( int i = 0; i < arr_len; ++i ){
    if (slide_value > values[i].toInt()){
      digitalWrite(leds[i], HIGH);
    }
    else{
      digitalWrite(leds[i], LOW);
    } 
  }
}