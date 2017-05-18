#define GREENPIN 7
#define REDPIN 6
#define BLUEPIN 5

#define GREENPINL 4
#define REDPINL 3
#define BLUEPINL 2

void setup() {

  pinMode(GREENPIN, OUTPUT);
  pinMode(REDPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);

  pinMode(GREENPINL, OUTPUT);
  pinMode(REDPINL, OUTPUT);
  pinMode(BLUEPINL, OUTPUT);
  
}



void setColor(int REDVALUE, int GREENVALUE, int BLUEVALUE) {
  analogWrite(REDPIN, REDVALUE);
  analogWrite(GREENPIN, GREENVALUE);
  analogWrite(BLUEPIN, BLUEVALUE);
}



void setColorL(int REDVALUE, int GREENVALUE, int BLUEVALUE) {
  analogWrite(REDPINL, REDVALUE);
  analogWrite(GREENPINL, GREENVALUE);
  analogWrite(BLUEPINL, BLUEVALUE);
}



void loop() {
//LION CODE
   setColorL(250, 200, 0); //yellow
   delay(1000);
setColorL(200, 125, 0);    //red (i need oringe)
delay(1000);


  //PIN CODE
  setColor(250, 250, 250);  //white
  delay(1000);
  setColor(250, 100, 0);
  delay(1000);
  setColor(0, 250, 0);
  delay(1000);
  setColor(0, 0, 250);
  delay(1000);             
  }
  
  

