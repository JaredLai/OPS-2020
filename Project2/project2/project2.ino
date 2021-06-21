#define SPEAKER 3
#include "pitches.h"
#define POTENTIOMETER A4
//#include "Despacito.h"

#define LED1 4
#define LED2 5
#define LED3 6

int NOTE_DUR = 20;



void play(int note, int dur){
  tone(SPEAKER, note);
  delay(dur * NOTE_DUR);
  noTone(SPEAKER);
  delay(dur * NOTE_DUR/3);
}

void Song1(){
  play(NOTE_E5, 8);
  play(NOTE_E5, 8);
  delay(NOTE_DUR*8);
  play(NOTE_E5, 8);
  delay(NOTE_DUR*8);
  play(NOTE_C5, 8);
  play(NOTE_E5, 16);
  play(NOTE_G5, 16);
  delay(NOTE_DUR*16);
  play(NOTE_G4, 16);
  delay(NOTE_DUR*30);
  
}

void Song2(){
  play(NOTE_C5, 24);
  play(NOTE_G4, 8);
  delay(NOTE_DUR*16);
  play(NOTE_E4, 24);
  play(NOTE_A4, 16);
  play(NOTE_B4, 16);
  play(NOTE_AS4, 8);
  play(NOTE_A4, 16);
  play(NOTE_G4, 11);
  play(NOTE_E5, 11);
  play(NOTE_G5, 11);
  play(NOTE_A5, 16);
  play(NOTE_F5, 8);
  play(NOTE_G5, 8);
  delay(NOTE_DUR*8);
  play(NOTE_E5, 16);
  play(NOTE_C5, 8);
  play(NOTE_D5, 8);
  play(NOTE_B4, 16);
  delay(NOTE_DUR*30);
}

void Song3(){
  play(NOTE_G5, 8);
  play(NOTE_FS5, 8);
  play(NOTE_F5, 8);
  play(NOTE_D5, 16);
  play(NOTE_E5, 8);
  delay(NOTE_DUR*8);
  play(NOTE_G4, 8);
  play(NOTE_A4, 8);
  play(NOTE_C5, 8);
  delay(NOTE_DUR*8);
  play(NOTE_A4, 8);
  play(NOTE_C5, 8);
  play(NOTE_D5, 8);
  delay(NOTE_DUR*16);
  play(NOTE_G5, 8);
  play(NOTE_FS5, 8);
  play(NOTE_F5, 8);
  play(NOTE_D5, 16);
  play(NOTE_E5, 8);
  delay(NOTE_DUR*8);
  play(NOTE_C6, 8);
  play(NOTE_C6, 16);
  play(NOTE_C6, 16);
  delay(NOTE_DUR*16);
  play(NOTE_G5, 8);
  play(NOTE_FS5, 8);
  play(NOTE_F5, 8);
  play(NOTE_D5, 16);
  play(NOTE_E5, 8);
  delay(NOTE_DUR*8);
  play(NOTE_G4, 8);
  play(NOTE_A4, 8);
  play(NOTE_C5, 8);
  delay(NOTE_DUR*8);
  play(NOTE_A4, 8);
  play(NOTE_C5, 8);
  play(NOTE_D5, 8);
  delay(NOTE_DUR*12);
  play(NOTE_DS5, 16);
  delay(NOTE_DUR*8);
  play(NOTE_D5, 20);
  play(NOTE_C5, 32);
  delay(NOTE_DUR*30);
  
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SPEAKER, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  int analog_val = analogRead(POTENTIOMETER);
  Serial.println(analog_val);
  if (analog_val < 341){
    digitalWrite(LED1, HIGH);
    delay(10);
    Song1();
    digitalWrite(LED1, LOW);
    Serial.println("1");
  }else if (341 <= analog_val && analog_val <682){
    digitalWrite(LED2, HIGH);
    delay(10);
    Song2();
    digitalWrite(LED2, LOW);
    Serial.println("2");
  }else{
    digitalWrite(LED3, HIGH);
    delay(10);
    Song3();
    digitalWrite(LED3, LOW);
    Serial.println("3");
  }
}

void loop(){
  // put your main code here, to run repeatedly
//  int analog_val = analogRead(POTENTIOMETER);
//  Serial.println(analog_val);
//  if (analog_val < 341){
//    digitalWrite(LED1, HIGH);
//    Song1();
//    digitalWrite(LED1, LOW);
//    Serial.println("1");
//  }else if (341 <= analog_val && analog_val <682){
//    digitalWrite(LED2, HIGH);
//    Song2();
//    digitalWrite(LED2, LOW);
//    Serial.println("2");
//  }else{
//    digitalWrite(LED3, HIGH);
//    Song3();
//    digitalWrite(LED3, LOW);
//    Serial.println("3");
  }
