#define GREENPIN 7
#define REDPIN 6
#define BLUEPIN 5 


void setup() {
  // put your setup code here, to run once:
pinMode(GREENPIN, OUTPUT) ;
pinMode(REDPIN, OUTPUT) ;
pinMode(BLUEPIN, OUTPUT) ;

}

void setColor (int REDVALUE, int GREENVALUE, int BLUEVALUE) {
  analogWrite(REDPIN, REDVALUE);
  analogWrite(GREENPIN, GREENVALUE);
  analogWrite(BLUEPIN, BLUEVALUE);
}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(27, 134, 3); //(red, pink, blue) numbers can be 0 to 255
  delay(100); //change number for longer or shorter delay
  setColor(254, 45, 1) ; //(red, orange, blue) numbers can be 0 to 255
  delay(100); 
  setColor(40, 20, 120) ; //(orange, purple, turquoise) numbers can be 0 to 255
  delay(100);
  setColor(50, 100, 150) ; //(blue, orange, pink) numbers can be 0 to 255
  delay(100);
  setColor(89, 60, 200) ;  //(orange, blue, red) numbers can be 0 to 255
  delay(100);
}
