#define REDPIN 5
#define GREENPIN 6
#define BLUEPIN 7

void setup() {
  // put your setup code here, to run once:

  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN,OUTPUT);
}


void setColor(int REDVALUE, int GREENVALUE, int BLUEVALUE) {
  analogWrite(REDPIN, REDVALUE);
  analogWrite(GREENPIN, GREENVALUE);
  analogWrite(BLUEPIN, BLUEVALUE);
}


void loop() {
  // put your main code here, to run repeatedly:
  setColor (255, 0, 0); //red
  delay (5000); //red for 5000 milliseconds
  setColor (0, 255, 0); //green
  delay (5000); //green for 5000 milliseconds
  setColor (0, 0, 255); //blue
  delay (5000); //blue for 5000 milliseconds
}
