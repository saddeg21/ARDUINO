#define ldr 8
#define led 9
int val = 0;
void setup() {

  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
}
void loop() {
  int val = digitalRead(ldr);
  if(val==1) {
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
}
