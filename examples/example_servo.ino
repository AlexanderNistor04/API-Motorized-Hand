#include <Servo.h>

Servo servo1;

void setup() {
  pinMode(INPUT, A0);
  Serial.begin(9600);
  servo1.attach(32);
}

void loop() {
  int x = analogRead(A0);
  Serial.println(x);
  if (x > 400){
    servo1.write(180);
  } else {
    servo1.write(0);
  }
  delay(50);
}
