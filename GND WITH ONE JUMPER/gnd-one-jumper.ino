int leds[] = {8,7,6,5,4,3};

void setup() {
  for(int i=0;i<6;i++) {
    pinMode(leds[i],OUTPUT);
  }
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<6;i++) {
    digitalWrite(leds[i],HIGH);
    delay(250);
    digitalWrite(leds[i],LOW);
  }
  for(int j=5;j>=0;j--) {
    digitalWrite(leds[j],HIGH);
    delay(250);
    digitalWrite(leds[j],LOW);
  }
}
