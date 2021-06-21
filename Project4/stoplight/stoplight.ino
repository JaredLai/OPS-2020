char byteRead;
const int green = 7;
const int red = 8;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() >0) {
    byteRead = Serial.read();
    Serial.println(byteRead);
    if (byteRead == 1) {
      
      digitalWrite(green, HIGH);
      delay(1);
      digitalWrite(green, LOW);
//      Serial.println("G");
    }
    if (byteRead == 2){
      
      digitalWrite(red, HIGH);
      delay(1);
      digitalWrite(red, LOW);
//      Serial.println("R");
    }
  }
  
}
