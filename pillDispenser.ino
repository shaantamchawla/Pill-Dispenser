#include <Servo.h> 
Servo servo1;
Servo servo2;
Servo servo3;
int dcPin = 3;
void setup() 
{ 
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  pinMode(dcPin, OUTPUT);
} 
void loop() {
  rotateCone1();
  rotateCone2();
  rotateCone3();
  //digitalWrite(dcPin, HIGH);
  //delay(1000);
  //digitalWrite(dcPin, LOW);
}
void rotateCone1() {
  servo1.write(165);
  delay(1000);
  servo1.write(180);
  delay(1000);
}
void rotateCone2() {
  servo2.write(165);
  delay(1000);
  servo2.write(180);
  delay(1000);
}
void rotateCone3() {
  servo3.write(165);
  delay(1000);
  servo3.write(180);
  delay(1000);
}

