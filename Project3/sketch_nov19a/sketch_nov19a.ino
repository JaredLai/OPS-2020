#define IR 17
#define LED 5
long zero = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
  for (int i = 0; i < 100; i++) {
    zero += analogRead(IR);
  }
  zero /= 100;
}

void loop() {
  // put your main code here, to run repeatedly:

  raw = analogRead(IR);
  int adjusted = constrain(raw, zero, 1023);
  mapped_value = map(adjusted, zero, 1023, 0, 255);
  digitalWrite(LED, mapped_value)
}
