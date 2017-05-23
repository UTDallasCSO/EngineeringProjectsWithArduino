const int TRIGGER=13;
const int ECHO=11;

float pingTime;
float distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(TRIGGER,OUTPUT);
  pinMode(ECHO,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIGGER,LOW);
  delayMicroseconds(2000);
  digitalWrite(TRIGGER,HIGH);
  delayMicroseconds(15);
  digitalWrite(TRIGGER,LOW);
  
  pingTime=pulseIn(ECHO,HIGH);
  
  
  pingTime=pingTime/1000000.;  //pingTime is in uS to S
  pingTime=pingTime/3600.;     //convert S to hrs
  
  distance=pingTime*776.5;      //776 miles/hr is the speed of sound
  distance=distance/2;          //since it travelled 2d we divide it by 2
  
  distance=distance*63360;      //63360 inchs in a mile(convert miles into inchs
  //distance=pingTime*17000.;  
  Serial.println(distance);
  delay(5000);
}
