#define GREENPIN 7
#define REDPIN 6
#define BLUEPIN 5

void setup () {

 pinMode(GREENPIN,OUTPUT);
 pinMode(REDPIN,OUTPUT);
 pinMode(BLUEPIN, OUTPUT);
}


void setColor(int REDVALUE, int GREENVALUE, int BLUEVALUE) {
analogWrite(REDPIN, REDVALUE);
analogWrite(GREENPIN, GREENVALUE);
analogWrite(BLUEPIN, BLUEVALUE);
}

void loop() { 
  
setColor(255,255,0); //White 
delay(1000);

setColor(10,250,250);  //cool green
delay(1000);

setColor(0,22,342); 
delay(1000);

setColor(38,121,250);
delay(1000);

setColor(100,0,0);
delay(1000);

setColor(250,0,50);
delay(1000);

setColor(0,234,100);
delay(1000);
}















































































































