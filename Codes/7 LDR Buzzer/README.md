![](https://github.com/UTDallasCSO/EngineeringProjectsWithArduino/blob/master/Codes/7%20LDR%20Buzzer/7.LDR_Buzzer.png)

````
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorReading = analogRead(A0);
  Serial.println(sensorReading);
    // map the analog input range (in this case, ~80 - 310 from the photo resistor)
    // to the output pitch range (100 - 1000Hz)
  int thisPitch = map(sensorReading, 80, 310, 100, 1000);

  tone(9, thisPitch); // play the pitch on pin 9
  delay(1);     
}
````
