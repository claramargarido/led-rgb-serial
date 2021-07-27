#include <Arduino.h>

int red = 8;
int green = 9;
int blue = 10;
char color;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}
void Red() {
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(1000);
}
void Green() {
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue,LOW);
  delay(1000);
}
void Blue () {
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(1000);
}
void White () {
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
}
void Magenta () {
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(1000);
}
void Yellow () {
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  delay(1000);
}
void Cyan () {
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
}
void Off () {
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
}
void loop() {
  if (Serial.available()) {
    color = Serial.read();
    Serial.println(color);
  }
  switch (color) {
    case '1':
      Red();
      break;
    case '2':
      Green();
      break;
    case '3':
      Blue();
      break;
    case '4':
      White();
      break;
    case '5':
      Magenta();
      break;
    case '6':
      Yellow();
      break;
    case '7':
      Cyan();
      break;
    
    default:
      Off();
      break;
  }
}
