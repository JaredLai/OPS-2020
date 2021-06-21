const int redBtn = 6;
const int greenBtn = 5;

int greenBtnState = 0;
int redBtnState = 0;

unsigned long lastDebounceTimeGreen = 0;  
unsigned long lastDebounceTimeRed = 0;
unsigned long debounceDelayGreen = 50;
unsigned long debounceDelayRed = 50;

int lastGreen = LOW;
int lastRed = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redBtn, INPUT);
  pinMode(greenBtn, INPUT);

  
}


void loop() {
  // put your main code here, to run repeatedly:
  greenBtnState = digitalRead(greenBtn);

  if (greenBtnState != lastGreen){
    lastDebounceTimeGreen = millis();
  }
  if ((millis() - lastDebounceTimeGreen) > debounceDelayGreen){
    if (greenButtonState
  }

  
  redBtnState = digitalRead(redBtn);

  if (greenBtnState == HIGH) {
    Serial.write(1);
  }
  if (redBtnState == HIGH) {
    Serial.write(2);
  }
}
