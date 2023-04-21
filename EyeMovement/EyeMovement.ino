#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int pos1 = 0;
int pos2 = 0;
int pos3 = 0;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
}

void loop() {
 
  for (pos1 = 0; pos1 <= 180; pos1 += 1) {
    servo1.write(pos1);
    delay(15);
  }
  for (pos1 = 180; pos1 >= 0; pos1 -= 1) {
    servo1.write(pos1);
    delay(15);
  }
  for (pos2 = 0; pos2 <= 180; pos2 += 1) {
    servo2.write(pos2);
    delay(15);
  }
  for (pos2 = 180; pos2 >= 0; pos2 -= 1) {
    servo2.write(pos2);
    delay(15);
  }
  for (pos3 = 0; pos3 <=180; pos3 += 1) {
    servo3.write(pos3);
    delay(15);
  }
  for (pos3 = 180; pos3 >= 0; pos3 -= 1) {
    servo3.write(pos3);
    delay(15);
  }
}
