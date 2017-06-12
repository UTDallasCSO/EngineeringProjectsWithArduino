![](https://github.com/UTDallasCSO/EngineeringProjectsWithArduino/blob/master/Codes/4%20Potentiometer/4.Potentiometer.jpg)

````
/* Analog Read */

void setup()  {
  Serial.begin(9600);   	// initialize console output at 9600 bits per second
}		    		// Press ctrl-shift-m to bring up the console

void loop()  {
  int sensorValue = analogRead(A0); 	// read the input on analog pin 0
  Serial.println(sensorValue);          // print out the value you read
  delay(10);                            // delay in between reads for stability
}
````
