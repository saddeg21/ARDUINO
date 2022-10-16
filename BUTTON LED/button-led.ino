#define BUTTON 8
#define LED 10
int buttonState=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(BUTTON);
  
  if(buttonState == 1) {
    digitalWrite(LED,HIGH);
  } else {
digitalWrite(LED,LOW);
  }
}
