#include <SoftwareSerial.h>

SoftwareSerial serialOne(8,9);

int trig = 3;
int echo = 2;
int diff = 0;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  serialOne.begin(10);
}

void loop() {
  diff = ultrasonicSensor();
  Serial.println(diff);
  serialOne.write(diff);
  delay(1000);
}

int ultrasonicSensor() {
  int duration,distance;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  duration = pulseIn(echo,HIGH);
  distance = duration*0.034/2;
  
  if(distance>255 || distance<0) {
    return 0;
  }
  
  return distance;
}
