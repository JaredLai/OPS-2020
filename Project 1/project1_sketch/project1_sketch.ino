#define LED_PIN 7
#define POTENTIOMETER A4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(POTENTIOMETER, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analog_val = analogRead(POTENTIOMETER);
  Serial.println(analog_val);
//  Serial.println(analogRead(A4)) ;
  digitalWrite(LED_PIN, HIGH);
  delay(analog_val);
  digitalWrite(LED_PIN, LOW);
  delay(analog_val);
}

  
