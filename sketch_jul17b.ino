#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int state=0;

void setup() {

motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);

  // put your setup code here, to run once:
Serial.begin(9600);

while(!Serial);


}

void loop() {
  // put your main code here, to run repeatedly:


 
  
  motor1.run(FORWARD);
  
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  
  motor4.run(FORWARD);
delay(100);
          
 motor1.run(BACKWARD);
  
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  
  motor4.run(BACKWARD);
}
