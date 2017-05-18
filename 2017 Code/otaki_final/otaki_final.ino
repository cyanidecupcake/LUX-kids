#define GREENPIN 7
#define REDPIN 6
#define BLUEPIN 5

void setup() {
  // put your setup code here, to run once:
 pinMode(GREENPIN, OUTPUT);
 pinMode(REDPIN, OUTPUT);
 pinMode(BLUEPIN, OUTPUT);
}


void setColor (int REDVALUE, int GREENVALUE, int BLUEVALUE) {
analogWrite (REDPIN, REDVALUE);
analogWrite (GREENPIN, GREENVALUE);
analogWrite (BLUEPIN, BLUEVALUE);


}
void loop() {
  // put your main code here, to run repeatedly:
setColor (150,100,87);
delay(1000);

setColor (0,250,150);
delay(1000);

setColor (111,111,80);
delay(998);

setColor (212,99,153);
delay(1020);

setColor (115,45,9);
delay(1045);

setColor (4,51,21);
delay(1999);

setColor (0,150, 200);
delay(1000);

setColor (94,76,120);
delay(1999);
setColor (199,88,0);
delay(1566);

setColor (120,3,53);
delay(1567);

setColor (98,67,49);
delay(1432);

setColor (213,67,1);
delay(1423);
}
