#include <Servo.h> 
 
Servo s1;
Servo s2;
Servo s3;
 
void setup() 
{ 
  s1.attach(8);
  s2.attach(9);
  s3.attach(10);
} 
 
 
void loop() { 
  rotate1();
  delay(500);
  s1.write(180);
  
  rotate2();
  delay(500);
  s2.write(180);
  
  rotate3();
  s3.write(180);
}

void rotate1() {
  delay(500);
  s1.write(165);
}

void rotate2() {
  s2.write(165);
}

void rotate3() {
  s3.write(165);
}
