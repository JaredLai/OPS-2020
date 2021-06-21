#define LED 6

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i<= 2500; i++){
    digitalWrite(LED, HIGH);
    delayMicroseconds(500);
    digitalWrite(LED, LOW);
    delayMicroseconds(500);
  }

  delay(500);

  //dimmest
  for (int i = 0; i<= 1250; i++){
    digitalWrite(LED, HIGH);
    delayMicroseconds(1000);
    digitalWrite(LED, LOW);
    delayMicroseconds(1000);
  }

  delay(500);

  //brightest 
  for (int i = 0; i<= 12500; i++){
    digitalWrite(LED, HIGH);
    delayMicroseconds(100);
    digitalWrite(LED, LOW);
    delayMicroseconds(100);
  }

  delay(500);
}
