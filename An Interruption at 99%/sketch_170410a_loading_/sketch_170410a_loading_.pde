import processing.serial.*;
import ddf.minim.*;
Serial Port;

Minim minim;
AudioPlayer gun;

float val;
float val2;

PImage windows;
PFont welcome; 
float counter=0;
float counter2=0;
String page="1";
float loadingNum;

void setup() {
  size(1920, 1200);
  frameRate(2);

  windows = loadImage("windows.jpg");
  welcome = createFont("Microsoft Sans Serif.ttf", 16); 
  minim = new Minim(this);
  //gun = minim.loadFile("gun shot2.mov", 2048);
  //gun.loop();
  //gun.mute();

  //println(Serial.list());
  Port=new Serial(this, Serial.list()[5], 9600);
  Port.bufferUntil('\n');
}

void draw() {
  //printArray(Serial.list());  
  ///////////////////////////////////////////Page1: Welcome 
  if (page=="1") {
    background(0);
    image(windows, (width-(windows.width*2))/2, 60, windows.width*2, windows.height*2);
    textAlign(CENTER);
    textFont(welcome, 80);
    fill(200);
    text("Welcome", width/2, windows.width*2+180);
    textFont(welcome, 25);
    fill(200);
    text("Click to start up your Windows", width/2, windows.height*2+height/3.5);
    if (mousePressed) {
      page="2";
    }
  }

  ///////////////////////////////////////////Page2: Loading 
  if (page=="2") {
    background(0);
    float accelrator=random(0, 6);
    counter=counter+accelrator;
    counter2=counter2+accelrator;
    if(counter>1700){
      accelrator=1;
    }
    loadingNum=map(counter, 0, width-220, 0, 99);
    counter=constrain(counter, 0, width-220);
    counter2=constrain(counter2, 0, width-200);

    //// loading bar
    noStroke();
    fill(255);
    rect(100, height-height/4, counter, 30);
    // grey bar
    
    fill(100);
    rect(100+counter, height-height/4, width-200-counter, 30);

    ////////////////// gun shot
    if (loadingNum>=99&&counter2>=1719) {
      //gun.unmute();
      //if (counter2>=1719) {
        float back =random(50, 300);
        counter= back;
        counter2=back;
     // }
    } 
     else if (loadingNum<99) {
      ////gun.mute();
    }

    ///// text: windows is loading files      
    textFont(welcome, 25);
    fill(255);
    text("Windows is loading files...", width/2, height-height/4-70);
    //// loadinng number
    textFont(welcome, 20);
    fill(200);
    text(int(loadingNum)+" %", counter+80, height-height/4+70);
    //println(int(loadingNum));
  }

  //// when people leave
  if (val2==0&&loadingNum>20) {
    //gun.mute();
    page="1";
    counter=0;
    counter2=0;
  }

  Port.write(int(loadingNum));
  println(int(loadingNum), int(counter), int(counter2),val2);
}



void serialEvent(Serial myPort) {
  String inString = myPort.readStringUntil('\n');
  if (inString != null) {
    inString = trim(inString);
    float[] data = float(split(inString, ","));
    if (data.length >=2) {
      val=data[0];
      val2=data[1];
    }
  }
  //println(val, val2);
}