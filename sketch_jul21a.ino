#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int state=0;



void setup() {


// put your setup code here, to run once:
// initialize serial communication at 9600 bits per second:

       motor1.setSpeed(255);
       motor2.setSpeed(255);
       motor3.setSpeed(255);
       motor4.setSpeed(255);
    
    Serial.begin(9600);
    //Wait for initialization!
    while(!Serial);
}

void loop() {
  // put your main code here, to run repeatedly:

    if(Serial.available())
    {     
      state = Serial.read();
    }
    
    delay(100);
    // if the state is '1' the DC motor will go forward
    
    if (state == '1') // forward
    {      

    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
    
    //delay(100);
    }
    else if(state=='2'){//left
   
    motor4.run(RELEASE);
    motor1.run(RELEASE);
    motor2.run(FORWARD);
    motor3.run(FORWARD); 
   
   // delay(100);  
    }
    else if(state=='3'){//right
    
    motor3.run(RELEASE);
    motor2.run(RELEASE);
    motor1.run(FORWARD);
    motor4.run(FORWARD); 
    
    //delay(100);  
    }
    
    else if(state=='4'){//Reverse
      
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);
   
   // delay(100);
    }

    
    else if(state=='5'){//Stop
    
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
    
    //delay(100);
    }
    
    else if(state==6){//Fwd + right
    
    motor3.run(RELEASE);
    motor2.run(FORWARD);
    motor1.run(FORWARD);
    motor4.run(FORWARD); 
        
    }
    else if(state==7){//FWD + Left
    
    motor4.run(RELEASE);
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD); 
  
    }
    
    
    
}
