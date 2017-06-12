![](https://github.com/UTDallasCSO/EngineeringProjectsWithArduino/blob/master/Codes/11%20Seven%20Segment/11.Seven_Segment_1.png)

![](https://github.com/UTDallasCSO/EngineeringProjectsWithArduino/blob/master/Codes/11%20Seven%20Segment/11.Seven_Segment_2.png)

````
int a=3, b=4, c=8, d=6, e=5, f=2, g=7;
void setup()
{
  // define pin modes
  
 pinMode(a,OUTPUT);
 pinMode(b,OUTPUT);
 pinMode(c,OUTPUT);
 pinMode(d,OUTPUT);
 pinMode(e,OUTPUT);
 pinMode(f,OUTPUT);
 pinMode(g,OUTPUT);
 
}

void loop() 
{
  // loop to turn leds od seven seg ON
  //0
  digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(e,LOW); 
  digitalWrite(f,LOW);  
   digitalWrite(g,HIGH); 
  delay(1000);
  
//1
 digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(e,LOW); 
  digitalWrite(f,LOW);  
   digitalWrite(g,HIGH); 
  delay(1000);
//2
 digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,HIGH); 
  digitalWrite(d,LOW); 
  digitalWrite(e,LOW); 
  digitalWrite(f,HIGH);  
   digitalWrite(g,LOW); 
  delay(1000);
//3
 digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(e,HIGH); 
  digitalWrite(f,HIGH);  
   digitalWrite(g,LOW); 
  delay(1000);
//4
 digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(e,LOW); 
  digitalWrite(f,LOW);  
   digitalWrite(g,HIGH); 
  delay(1000);
//5
 digitalWrite(a,HIGH); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(e,HIGH); 
  digitalWrite(f,LOW);  
   digitalWrite(g,LOW); 
  delay(1000);
//6
 digitalWrite(a,LOW); 
  digitalWrite(b,HIGH); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(e,LOW); 
  digitalWrite(f,LOW);  
   digitalWrite(g,LOW); 
  delay(1000);
//7
 digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,HIGH); 
  digitalWrite(e,HIGH); 
  digitalWrite(f,HIGH);  
   digitalWrite(g,HIGH); 
  delay(1000);
//8
 digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(e,LOW); 
  digitalWrite(f,LOW);  
   digitalWrite(g,LOW); 
  delay(1000);
//9
 digitalWrite(a,LOW); 
  digitalWrite(b,LOW); 
  digitalWrite(c,LOW); 
  digitalWrite(d,LOW); 
  digitalWrite(e,HIGH); 
  digitalWrite(f,LOW);  
   digitalWrite(g,LOW); 
  delay(1000);

}
````
