#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int state=0;

void setup() {

 
  // put your setup code here, to run once:
Serial.begin(9600);

//while(!Serial);


}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
    {     
    state = Serial.read();
     }


if(state == 1){
  
  
  motor1.run(FORWARD);
  
  motor2.run(FORWARD);

          
}
}
