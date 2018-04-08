#include <VarSpeedServo.h>
VarSpeedServo myservo4;
VarSpeedServo myservo5;
VarSpeedServo myservo6;
VarSpeedServo myservo11;
VarSpeedServo myservo12;
VarSpeedServo myservo13;
char val4;

void setup() {
  Serial.begin(9600);
  myservo4.attach(4);
  myservo5.attach(5);
  myservo6.attach(6);
  myservo11.attach(11);
  myservo12.attach(12);
  myservo13.attach(13);

  myservo4.write(0, 255, true);
  myservo5.write(0, 255, true);
  myservo6.write(0, 255, true);
  myservo11.write(0, 255, true);
  myservo12.write(0, 255, true);
  myservo13.write(0, 255, true);
}

void loop() {
  if (Serial.available()) {
    val4 = Serial.read();
  }
  if (val4 >= 1) {
    /////////////////////////////////////////////section 1
    delay(50);
    myservo4.write(90, 200, true);
    delay(100);
    myservo5.write(90, 230, true);
    delay(100);
    myservo6.write(90, 255, true);
    delay(100);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(2200);
    myservo4.write(0, 200, true);
    delay(100);
    myservo5.write(0, 230, true);
    delay(100);
    myservo6.write(0, 255, true);
    delay(100);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(3000);

    ///////////////////////////////////////////////section 2
    myservo4.write(90, 180, true);
    delay(100);
    myservo6.write(90, 180, true);
    delay(100);
    myservo12.write(90, 180, true);
    delay(100);

    myservo4.write(0, 180, true);
    delay(100);
    myservo5.write(90, 180, true);
    delay(100);
    myservo6.write(0, 180, true);
    delay(100);
    myservo11.write(90, 180, true);
    delay(100);
    myservo12.write(0, 180, true);
    delay(100);
    myservo13.write(90, 180, true);
    delay(100);

    myservo5.write(0, 180, true);
    delay(100);
    myservo11.write(0, 180, true);
    delay(100);
    myservo13.write(0, 180, true);
    delay(100);
    ///////////////////////////////
    myservo4.write(90, 200, true);
    delay(100);
    myservo6.write(90, 200, true);
    delay(100);
    myservo12.write(90, 200, true);
    delay(100);

    myservo4.write(0, 200, true);
    delay(100);
    myservo5.write(90, 200, true);
    delay(100);
    myservo6.write(0, 200, true);
    delay(100);
    myservo11.write(90, 200, true);
    delay(100);
    myservo12.write(0, 200, true);
    delay(100);
    myservo13.write(90, 200, true);
    delay(100);

    myservo5.write(0, 200, true);
    delay(100);
    myservo11.write(0, 200, true);
    delay(100);
    myservo13.write(0, 200, true);
    delay(100);
    ///////////////////////////////////////// section 3
    myservo4.write(120, 255, false);
    myservo5.write(120, 255, false);
    myservo6.write(120, 255, false);
    myservo11.write(120, 255, false);
    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    delay(600);
    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(600);
    myservo4.write(120, 255, false);
    myservo5.write(120, 255, false);
    myservo6.write(120, 255, false);
    myservo11.write(120, 255, false);
    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    delay(600);
    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);

    //millis
    ///////////////////////////////////////// knock
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(15);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(15);
    ////////////////////////////////////////Section 4
    delay(40);
    myservo4.write(0, 200, true);
    delay(100);
    myservo5.write(0, 230, true);
    delay(100);
    myservo6.write(0, 255, true);
    delay(100);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(3000);
    ////////////////////////////////////////////Setion4
    //////  1
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, true);

    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, true);

    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, true);

    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, true);

    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, true);

    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, true);
    ///////// 2
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, true);

    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, true);

    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, true);

    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, true);

    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, true);

    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, true);
    ///////// 3
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);

    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);

    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);

    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);

    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);

    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    /////////////////////////222222222222222222
    //////  1
    myservo4.write(120, 255, false);
    myservo5.write(120, 255, true);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);

    myservo4.write(120, 255, false);
    myservo5.write(120, 255, true);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);

    myservo4.write(120, 255, false);
    myservo5.write(120, 255, true);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);

    myservo4.write(120, 255, false);
    myservo5.write(120, 255, true);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);

    myservo4.write(120, 255, false);
    myservo5.write(120, 255, true);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, true);

    myservo4.write(120, 255, false);
    myservo5.write(120, 255, true);

    ///////// 2
    myservo6.write(120, 255, false);
    myservo11.write(120, 255, true);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);

    myservo6.write(120, 255, false);
    myservo11.write(120, 255, true);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);

    myservo6.write(120, 255, false);
    myservo11.write(120, 255, true);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);

    myservo6.write(120, 255, false);
    myservo11.write(120, 255, true);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);

    myservo6.write(120, 255, false);
    myservo11.write(120, 255, true);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, true);

    myservo6.write(120, 255, false);
    myservo11.write(120, 255, true);

    //////////3
    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);

    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);

    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);

    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);

    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);

    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);

    /////////////////////////////////////////////////Section 5
    ////111111
    myservo4.write(50, 255, false);
    myservo5.write(50, 255, false);
    myservo6.write(50, 255, true);
    myservo4.write(10, 255, false);
    myservo5.write(10, 255, false);
    myservo6.write(10, 255, true);

    myservo4.write(50, 255, false);
    myservo5.write(50, 255, false);
    myservo6.write(50, 255, true);
    myservo4.write(10, 255, false);
    myservo5.write(10, 255, false);
    myservo6.write(10, 255, true);

    myservo4.write(50, 255, false);
    myservo5.write(50, 255, false);
    myservo6.write(50, 255, true);
    myservo4.write(10, 255, false);
    myservo5.write(10, 255, false);
    myservo6.write(10, 255, true);

    myservo4.write(50, 255, false);
    myservo5.write(50, 255, false);
    myservo6.write(50, 255, true);
    myservo4.write(10, 255, false);
    myservo5.write(10, 255, false);
    myservo6.write(10, 255, true);

    myservo4.write(50, 255, false);
    myservo5.write(50, 255, false);
    myservo6.write(50, 255, true);
    myservo4.write(10, 255, false);
    myservo5.write(10, 255, false);
    myservo6.write(10, 255, true);

    myservo4.write(50, 255, false);
    myservo5.write(50, 255, false);
    myservo6.write(50, 255, true);
    myservo4.write(10, 255, false);
    myservo5.write(10, 255, false);
    myservo6.write(10, 255, true);

    myservo4.write(50, 255, false);
    myservo5.write(50, 255, false);
    myservo6.write(50, 255, true);
    myservo4.write(10, 255, false);
    myservo5.write(10, 255, false);
    myservo6.write(10, 255, true);

    myservo4.write(50, 255, false);
    myservo5.write(50, 255, false);
    myservo6.write(50, 255, true);
    myservo4.write(10, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, true);

    ////222222
    myservo11.write(50, 255, false);
    myservo12.write(50, 255, false);
    myservo13.write(50, 255, true);
    myservo11.write(10, 255, false);
    myservo12.write(10, 255, false);
    myservo13.write(10, 255, true);

    myservo11.write(50, 255, false);
    myservo12.write(50, 255, false);
    myservo13.write(50, 255, true);
    myservo11.write(10, 255, false);
    myservo12.write(10, 255, false);
    myservo13.write(10, 255, true);

    myservo11.write(50, 255, false);
    myservo12.write(50, 255, false);
    myservo13.write(50, 255, true);
    myservo11.write(10, 255, false);
    myservo12.write(10, 255, false);
    myservo13.write(10, 255, true);
    myservo11.write(50, 255, false);
    myservo12.write(50, 255, false);
    myservo13.write(50, 255, true);
    myservo11.write(10, 255, false);
    myservo12.write(10, 255, false);
    myservo13.write(10, 255, true);

    myservo11.write(50, 255, false);
    myservo12.write(50, 255, false);
    myservo13.write(50, 255, true);
    myservo11.write(10, 255, false);
    myservo12.write(10, 255, false);
    myservo13.write(10, 255, true);

    myservo11.write(50, 255, false);
    myservo12.write(50, 255, false);
    myservo13.write(50, 255, true);
    myservo11.write(10, 255, false);
    myservo12.write(10, 255, false);
    myservo13.write(10, 255, true);

    myservo11.write(50, 255, false);
    myservo12.write(50, 255, false);
    myservo13.write(50, 255, true);
    myservo11.write(10, 255, false);
    myservo12.write(10, 255, false);
    myservo13.write(10, 255, true);



    myservo11.write(50, 255, false);
    myservo12.write(50, 255, false);
    myservo13.write(50, 255, true);
    myservo11.write(10, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(150);
    ///////////////////////////////////////////Section 6
    myservo4.write(20, 255, false);
    myservo5.write(20, 255, false);
    myservo6.write(20, 255, false);
    myservo11.write(20, 255, false);
    myservo12.write(20, 255, false);
    myservo13.write(20, 255, true);
    delay(500);
    myservo4.write(40, 255, false);
    myservo5.write(40, 255, false);
    myservo6.write(40, 255, false);
    myservo11.write(40, 255, false);
    myservo12.write(40, 255, false);
    myservo13.write(40, 255, true);
    delay(500);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(500);
    myservo4.write(80, 255, false);
    myservo5.write(80, 255, false);
    myservo6.write(80, 255, false);
    myservo11.write(80, 255, false);
    myservo12.write(80, 255, false);
    myservo13.write(80, 255, true);
    delay(500);
    myservo4.write(100, 255, false);
    myservo5.write(100, 255, false);
    myservo6.write(100, 255, false);
    myservo11.write(100, 255, false);
    myservo12.write(100, 255, false);
    myservo13.write(100, 255, true);
    delay(500);
    myservo4.write(120, 255, false);
    myservo5.write(120, 255, false);
    myservo6.write(120, 255, false);
    myservo11.write(120, 255, false);
    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    delay(500);
    myservo4.write(150, 255, false);
    myservo5.write(150, 255, false);
    myservo6.write(150, 255, false);
    myservo11.write(150, 255, false);
    myservo12.write(150, 255, false);
    myservo13.write(150, 255, true);
    delay(500);
    myservo4.write(170, 255, false);
    myservo5.write(170, 255, false);
    myservo6.write(170, 255, false);
    myservo11.write(170, 255, false);
    myservo12.write(170, 255, false);
    myservo13.write(170, 255, true);
    ///////////////////////////////////////////Section 7
    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(10);

    myservo4.write(90, 80, true);
    myservo5.write(90, 80, true);
    myservo6.write(90, 80, true);
    myservo11.write(90, 80, true);
    myservo12.write(90, 80, true);
    myservo13.write(90, 80, true);
    delay(100);
    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(10);
    myservo4.write(90, 100, true);
    myservo5.write(90, 100, true);
    myservo6.write(90, 100, true);
    myservo11.write(90, 100, true);
    myservo12.write(90, 100, true);
    myservo13.write(90, 100, true);

    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);

    myservo4.write(90, 120, true);
    myservo5.write(90, 120, true);
    myservo6.write(90, 120, true);
    myservo11.write(90, 120, true);
    myservo12.write(90, 120, true);
    myservo13.write(90, 120, true);

    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);

    myservo4.write(90, 200, true);
    myservo5.write(90, 200, true);
    myservo6.write(90, 200, true);
    myservo11.write(90, 200, true);
    myservo12.write(90, 200, true);
    myservo13.write(90, 200, true);
    delay(1000);
    myservo4.write(0, 180, false);
    myservo5.write(0, 180, false);
    myservo6.write(0, 180, false);
    myservo11.write(0, 180, false);
    myservo12.write(0, 180, false);
    myservo13.write(0, 180, true);
    ///////////////////////////////////////////
    delay(680);
    myservo4.write(40, 220, false);
    myservo5.write(40, 220, false);
    myservo6.write(40, 220, false);
    myservo11.write(40, 220, false);
    myservo12.write(40, 220, false);
    myservo13.write(40, 220, true);
    delay(805);
    myservo4.write(80, 220, false);
    myservo5.write(80, 220, false);
    myservo6.write(80, 220, false);
    myservo11.write(80, 220, false);
    myservo12.write(80, 220, false);
    myservo13.write(80, 220, true);
    delay(855);
    myservo4.write(120, 220, false);
    myservo5.write(120, 220, false);
    myservo6.write(120, 220, false);
    myservo11.write(120, 220, false);
    myservo12.write(120, 220, false);
    myservo13.write(120, 220, true);
    delay(750);
    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(50);
    //////////////////////////////////////////////////Section 8  wave
    myservo4.write(100, 140, true);
    myservo5.write(100, 140, true);
    myservo6.write(100, 140, true);
    myservo11.write(100, 140, false);
    myservo4.write(0, 140, true);
    myservo12.write(100, 140, false);
    myservo5.write(0, 140, true);
    myservo13.write(100, 140, false);
    myservo6.write(0, 140, true);
    myservo11.write(0, 140, true);
    myservo12.write(0, 140, true);
    myservo13.write(0, 140, true);

    myservo4.write(100, 140, true);
    myservo5.write(100, 140, true);
    myservo6.write(100, 140, true);
    myservo11.write(100, 140, false);
    myservo4.write(0, 140, true);
    myservo12.write(100, 140, false);
    myservo5.write(0, 140, true);
    myservo13.write(100, 140, false);
    myservo6.write(0, 140, true);
    myservo11.write(0, 140, true);
    myservo12.write(0, 140, true);
    myservo13.write(0, 140, true);

    myservo4.write(100, 160, true);
    myservo5.write(100, 160, true);
    myservo6.write(100, 160, true);
    myservo11.write(100, 160, false);
    myservo4.write(0, 160, true);
    myservo12.write(100, 160, false);
    myservo5.write(0, 160, true);
    myservo13.write(100, 160, false);
    myservo6.write(0, 160, true);
    myservo11.write(0, 160, true);
    myservo12.write(0, 160, true);
    myservo13.write(0, 160, true);

    myservo4.write(100, 160, true);
    myservo5.write(100, 160, true);
    myservo6.write(100, 160, true);
    myservo11.write(100, 160, false);
    myservo4.write(0, 160, true);
    myservo12.write(100, 160, false);
    myservo5.write(0, 160, true);
    myservo13.write(100, 160, false);
    myservo6.write(0, 160, true);
    myservo11.write(0, 160, true);
    myservo12.write(0, 160, true);
    myservo13.write(0, 160, true);

    myservo4.write(100, 180, true);
    myservo5.write(100, 180, true);
    myservo6.write(100, 180, true);
    myservo11.write(100, 180, false);
    myservo4.write(0, 180, true);
    myservo12.write(100, 180, false);
    myservo5.write(0, 180, true);
    myservo13.write(100, 180, false);
    myservo6.write(0, 180, true);
    myservo11.write(0, 180, true);
    myservo12.write(0, 180, true);
    myservo13.write(0, 180, true);

    myservo4.write(100, 180, true);
    myservo5.write(100, 180, true);
    myservo6.write(100, 180, true);
    myservo11.write(100, 180, false);
    myservo4.write(0, 180, true);
    myservo12.write(100, 180, false);
    myservo5.write(0, 180, true);
    myservo13.write(100, 180, false);
    myservo6.write(0, 180, true);
    myservo11.write(0, 180, true);
    myservo12.write(0, 180, true);
    myservo13.write(0, 180, true);
    ////////////////////////////////////////////
    myservo4.write(100, 180, true);
    myservo5.write(100, 180, true);
    myservo6.write(100, 180, true);
    myservo11.write(100, 180, false);
    myservo4.write(20, 180, true);
    myservo12.write(100, 180, false);
    myservo5.write(20, 180, true);
    myservo13.write(100, 180, false);
    myservo6.write(20, 180, true);
    myservo11.write(20, 180, true);
    myservo12.write(20, 180, true);
    myservo13.write(20, 180, true);

    myservo4.write(120, 220, true);
    myservo5.write(120, 220, true);
    myservo6.write(120, 220, true);
    myservo11.write(120, 220, false);
    myservo4.write(40, 220, true);
    myservo12.write(120, 220, false);
    myservo5.write(40, 220, true);
    myservo13.write(120, 220, false);
    myservo6.write(40, 220, true);
    myservo11.write(40, 220, true);
    myservo12.write(40, 220, true);
    myservo13.write(40, 220, true);

    myservo4.write(140, 240, true);
    myservo5.write(140, 240, true);
    myservo6.write(140, 240, true);
    myservo11.write(140, 240, false);
    myservo4.write(60, 240, true);
    myservo12.write(140, 240, false);
    myservo5.write(60, 240, true);
    myservo13.write(140, 240, false);
    myservo6.write(60, 240, true);
    myservo11.write(60, 240, true);
    myservo12.write(60, 240, true);
    myservo13.write(60, 240, true);

    myservo4.write(140, 255, true);
    myservo5.write(140, 255, true);
    myservo6.write(140, 255, true);
    myservo11.write(140, 255, false);
    myservo4.write(60, 255, true);
    myservo12.write(140, 255, false);
    myservo5.write(60, 255, true);
    myservo13.write(140, 255, false);
    myservo6.write(60, 255, true);
    myservo11.write(60, 255, true);
    myservo12.write(60, 255, true);
    myservo13.write(60, 255, true);

    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(800);
    //////////////////////////////////////////// Section 9
    myservo4.write(20, 200, false);
    myservo5.write(40, 200, false);
    myservo6.write(60, 200, false);
    myservo11.write(80, 200, false);
    myservo12.write(100, 200, false);
    myservo13.write(120, 200, true);
    delay(300);
    myservo4.write(120, 200, false);
    myservo5.write(100, 200, false);
    myservo6.write(80, 200, false);
    myservo11.write(60, 200, false);
    myservo12.write(40, 200, false);
    myservo13.write(20, 200, true);
    delay(300);
    myservo4.write(20, 200, false);
    myservo5.write(40, 200, false);
    myservo6.write(60, 200, false);
    myservo11.write(80, 200, false);
    myservo12.write(100, 200, false);
    myservo13.write(120, 200, true);
    delay(300);
    myservo4.write(120, 200, false);
    myservo5.write(100, 200, false);
    myservo6.write(80, 200, false);
    myservo11.write(60, 200, false);
    myservo12.write(40, 200, false);
    myservo13.write(20, 200, true);
    delay(400);
    myservo4.write(20, 200, false);
    myservo5.write(40, 200, false);
    myservo6.write(60, 200, false);
    myservo11.write(80, 200, false);
    myservo12.write(100, 200, false);
    myservo13.write(120, 200, true);
    delay(100);
    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);

    ////////////////////////////////////Section 10: one wave +section 9

    myservo4.write(100, 200, true);
    myservo5.write(100, 200, true);
    myservo6.write(100, 200, true);
    myservo11.write(100, 200, false);
    myservo4.write(0, 200, true);
    myservo12.write(100, 200, false);
    myservo5.write(0, 200, true);
    myservo13.write(100, 200, false);
    myservo6.write(0, 200, true);
    myservo11.write(0, 200, true);
    myservo12.write(0, 200, true);
    myservo13.write(0, 200, true);
    delay(10);
    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);

    delay(300);
    myservo4.write(20, 180, false);
    myservo5.write(40, 180, false);
    myservo6.write(60, 180, false);
    myservo11.write(80, 180, false);
    myservo12.write(100, 180, false);
    myservo13.write(120, 180, true);
    delay(300);
    myservo4.write(120, 180, false);
    myservo5.write(100, 180, false);
    myservo6.write(80, 180, false);
    myservo11.write(60, 180, false);
    myservo12.write(40, 180, false);
    myservo13.write(20, 180, true);
    delay(300);
    myservo4.write(20, 180, false);
    myservo5.write(40, 180, false);
    myservo6.write(60, 180, false);
    myservo11.write(80, 180, false);
    myservo12.write(100, 180, false);
    myservo13.write(120, 180, true);
    delay(300);
    myservo4.write(120, 180, false);
    myservo5.write(100, 180, false);
    myservo6.write(80, 180, false);
    myservo11.write(60, 180, false);
    myservo12.write(40, 180, false);
    myservo13.write(20, 180, true);
    delay(300);
    myservo4.write(20, 180, false);
    myservo5.write(40, 180, false);
    myservo6.write(60, 180, false);
    myservo11.write(80, 180, false);
    myservo12.write(100, 180, false);
    myservo13.write(120, 180, true);
    delay(300);
    myservo4.write(120, 180, false);
    myservo5.write(100, 180, false);
    myservo6.write(80, 180, false);
    myservo11.write(60, 180, false);
    myservo12.write(40, 180, false);
    myservo13.write(20, 180, true);

    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(500);
    ////////////////////////////////////////Section 10

    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);
    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);
    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);
    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);
    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);
    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);

    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);
    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);
    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);
    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);
    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);
    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);

    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);
    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);
    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);
    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);
    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);
    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);

    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);
    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);
    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);
    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);
    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);
    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);

    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);
    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);
    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);
    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);
    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);
    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);

    myservo13.write(120, 255, true);
    myservo13.write(140, 255, true);
    myservo13.write(120, 255, true);
    myservo13.write(140, 255, true);
    myservo13.write(120, 255, true);
    myservo13.write(140, 255, true);
    myservo13.write(120, 255, true);
    myservo13.write(140, 255, true);

    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);

    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);
    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);
    myservo4.write(20, 255, true);
    myservo4.write(40, 255, true);

    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);
    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);
    myservo5.write(40, 255, true);
    myservo5.write(60, 255, true);



    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);
    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);
    myservo6.write(60, 255, true);
    myservo6.write(80, 255, true);



    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);
    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);
    myservo11.write(80, 255, true);
    myservo11.write(100, 255, true);


    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);
    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);
    myservo12.write(100, 255, true);
    myservo12.write(120, 255, true);

    myservo13.write(120, 255, true);
    myservo13.write(140, 255, true);
    myservo13.write(120, 255, true);
    myservo13.write(140, 255, true);
    myservo13.write(120, 255, true);
    myservo13.write(140, 255, true);

    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(100);
    /////////////////////////////////////////////////// Section 11
    /////////////////////////////////////////11111
    myservo4.write(30, 255, false);
    myservo5.write(30, 255, false);
    myservo6.write(30, 255, false);
    myservo11.write(30, 255, false);
    myservo12.write(30, 255, false);
    myservo13.write(30, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);

    myservo4.write(30, 255, false);
    myservo5.write(30, 255, false);
    myservo6.write(30, 255, false);
    myservo11.write(30, 255, false);
    myservo12.write(30, 255, false);
    myservo13.write(30, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);

    myservo4.write(30, 255, false);
    myservo5.write(30, 255, false);
    myservo6.write(30, 255, false);
    myservo11.write(30, 255, false);
    myservo12.write(30, 255, false);
    myservo13.write(30, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);

    myservo4.write(30, 255, false);
    myservo5.write(30, 255, false);
    myservo6.write(30, 255, false);
    myservo11.write(30, 255, false);
    myservo12.write(30, 255, false);
    myservo13.write(30, 255, true);
    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    delay(900);
    /////////////////////////////////////////222222222
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);

    myservo4.write(60, 255, false);
    myservo5.write(60, 255, false);
    myservo6.write(60, 255, false);
    myservo11.write(60, 255, false);
    myservo12.write(60, 255, false);
    myservo13.write(60, 255, true);
    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    delay(1000);
    ///////////////////////////////////////////3333333333
    myservo4.write(120, 255, false);
    myservo5.write(120, 255, false);
    myservo6.write(120, 255, false);
    myservo11.write(120, 255, false);
    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);

    myservo4.write(90, 255, false);
    myservo5.write(90, 255, false);
    myservo6.write(90, 255, false);
    myservo11.write(90, 255, false);
    myservo12.write(90, 255, false);
    myservo13.write(90, 255, true);
    myservo4.write(120, 255, false);
    myservo5.write(120, 255, false);
    myservo6.write(120, 255, false);
    myservo11.write(120, 255, false);
    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);

    myservo4.write(120, 255, false);
    myservo5.write(120, 255, false);
    myservo6.write(120, 255, false);
    myservo11.write(120, 255, false);
    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);

    myservo4.write(120, 255, false);
    myservo5.write(120, 255, false);
    myservo6.write(120, 255, false);
    myservo11.write(120, 255, false);
    myservo12.write(120, 255, false);
    myservo13.write(120, 255, true);
    delay(1000);
    
    myservo4.write(0, 255, false);
    myservo5.write(0, 255, false);
    myservo6.write(0, 255, false);
    myservo11.write(0, 255, false);
    myservo12.write(0, 255, false);
    myservo13.write(0, 255, true);
    delay(600);


    //} else if (val4 < 1) {

  }















  //Serial.println(val4,val5,val6);
  //Serial.println(buttonState);
  //delay(1);

}
