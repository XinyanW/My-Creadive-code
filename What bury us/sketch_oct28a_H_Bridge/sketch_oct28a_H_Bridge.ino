/*  Arduino DC Motor Control - PWM | H-Bridge | L298N  -  Example 01

    by Dejan Nedelkovski, www.HowToMechatronics.com
*/

#define enA 11
#define in1 10
#define in2 9


#define in3 6
#define in4 5
#define enB 3
#define button 4
#define button2 13

int count = 0;
char val;
boolean b = false;
String state1="1";


int infrared = 12 ;
int infrared2 = 7 ;

int rotDirection = 0;
int pressed = false;

void setup() {
  Serial.begin(9600);

  pinMode(infrared, INPUT);

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(button, INPUT);
  // Set initial rotation direction
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
}

void loop() {
  analogWrite(enA, 255); // Send PWM signal to L298N Enable pin
  analogWrite(enB, 255);

  //  Serial.println(infrared);
  //  Serial.print("\t");
  //  Serial.println(rotDirection);

  if (digitalRead(infrared) == HIGH && digitalRead(infrared2) == HIGH ) {  // If switch is ON,
    Serial.write(1);  // send 1 to Processing
    b = false;
  } else {                               // If the switch is not ON,
    Serial.write(0);               // send 0 to Processing
    b = true;
    count++;
    Serial.println(count);

  }

/////////////////////////////////////////////shop: have time to go inside
  if (b == true) {
    delay(1000);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    //count = 0;

  }

  else if (b == false) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    count = 0;

  }
  //////////////////////////////////////////////going down
  if(count>=2&&count<45&&b==true){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    String state1="1";
    }
////////////////////////////////////////////////////stop
  if (count >= 45 && count <= 47 && state1=="1") {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

    
  }
  /////////////////////////////////////////////going up
  if  (count > 47 && count <= 90 && state1 == "1") {
    
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    String state1 = "2";

  }
 //////////////////////////////////////////////stop
  if (count > 90 && state1 == "2") {

    digitalWrite(in1, HIGH);
    digitalWrite(in2, HIGH);

    digitalWrite(in3, HIGH);
    digitalWrite(in4, HIGH);
  }



  // Read button  going up
  if (digitalRead(button) == true) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
 // Read button  going down
  if (digitalRead(button2) == true) {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }
  
    
  
}
