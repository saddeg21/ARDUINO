#define led 10
#define pot A0

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int val = analogRead(pot);
  val = map(val,0,1023,0,255);
  analogWrite(led,val);
  // put your main code here, to run repeatedly:

}
