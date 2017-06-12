![](https://github.com/UTDallasCSO/EngineeringProjectsWithArduino/blob/master/Codes/7%20LDR%20LED/7.LDR_LED.png)

````
/* Analog Read */
int led=13;
void setup()  {
  Serial.begin(9600);   	// initialize console output at 9600 bits per second
  pinMode(led,OUTPUT);
}		    		

void loop()  {
  int sensorValue = analogRead(A0); 	// read the input on analog pin 0
  Serial.println(sensorValue);          // print out the value you read
  delay(10);                            // delay in between reads for stability
  led=analogWrite(sensorValue);         // write the potentiometer's value to led
  delay(10);
}
````
