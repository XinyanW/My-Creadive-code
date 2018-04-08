

//#include <Servo.h>
#include <VarSpeedServo.h>


//Servo myservo9;
VarSpeedServo myservo9;
int E18Pin=8;
char val;
int turnPage;
int shake;

void setup() {
  Serial.begin(9600);
  pinMode(E18Pin,INPUT);  
  myservo9.attach(9);
  myservo9.write(0,255, true);
  
}

void loop() {
  shake=analogRead(A5);
  
  turnPage=digitalRead(E18Pin);
  if(turnPage==1){
    turnPage=0;
    }else if (turnPage==0){
      turnPage=1;
      }
  
  if (Serial.available()) {
    val = Serial.read();
  }
  if(val==99&&turnPage==1){
    myservo9.write(90,255,true);
  }else{
    myservo9.write(0,100,true);
    }

    //Serial.print(shake);
    Serial.print(",");
    Serial.println(turnPage);
}

