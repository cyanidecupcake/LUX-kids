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
setColor (28,250,120);  //light blue/green
delay (1000);

setColor (00,20,16);  //dim blue   
delay (1000);

setColor (10,16,1);  //dim pink  
delay (1000);

setColor (3,6,100);    //purply blue
delay (1000);

setColor (7,16,1); //dim pink
delay (1000); 

setColor (78,23,69); //purple
delay (1000);

setColor (56,56,23);//pink
delay (1000);

setColor (67,39,90);//purple
delay (1000);

}



