#define potpin A0
int val = 0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  Serial.println("Pot değer okuma");
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potpin);
  float gerilim = (5.00/1024.00)*val;
  Serial.println(gerilim);
  delay(300);
}
