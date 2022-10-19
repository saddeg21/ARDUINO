#define echoPin 6
#define trigPin 7
#define led 9

int max = 50;
int min = 0;

void setup() {  
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  int measure = distanceFunc(max,min);
  // put your main code here, to run repeatedly:
  int val = map(measure,0,50,0,5);
  analogWrite(led,val);
  Serial.println(val);
}

int distanceFunc(int max, int min) {
  long duration,distance;

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.034 /2 ;

  if(distance>max || distance <min)
  return 0;
  return distance;
}

