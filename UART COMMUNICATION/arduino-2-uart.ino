#include <SoftwareSerial.h>

#include <Servo.h>

SoftwareSerial serialTwo(8,9);
Servo myServo;
int dist;

void setup()
{
  myServo.attach(5);
  Serial.begin(9600);
  serialTwo.begin(10);
}

void loop()
{
  dist = serialTwo.read();
  Serial.println(dist);
  if(dist>120){
    myServo.write(90);
  } else {
  myServo.write(0);
  }
}

