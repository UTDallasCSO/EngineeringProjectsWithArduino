const int IR=8;


void setup() {
  // put your setup code here, to run once:
  pinMode(IR,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int prox=digitalRead(IR);
  
  Serial.println(prox);
}
