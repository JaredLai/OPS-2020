#define IR A4
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

  int raw = analogRead(IR);
  Serial.println(raw);
  int adjusted = constrain(raw, zero, 1023);
  int mapped_value = map(adjusted, zero, 1023, 0, 255);
  Serial.println(mapped_value);
  analogWrite(LED, mapped_value);
}
