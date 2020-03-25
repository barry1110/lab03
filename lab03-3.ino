int val,val1;
float sensorValue,sensorVoltage;
const byte potPin = 15;
const byte potPin1 = 16;
int i;
float Analogin,Vin;
void setup()

{
  Serial.begin(9600);
}
void loop() 
{
  val = analogRead(potPin);
  Serial.print(val);
  Serial.print(",");
  val1 = analogRead(potPin1);
  Serial.print(val1);
  Serial.print(",");
  delay(500);
  for (i=0;i<=5;i++)
  {
  Analogin = 0.7* Analogin + 0.3* analogRead(15);
  Vin = Analogin * 2.5 / 4095;
  
  }
  Serial.println(Vin);
  delay(500);
}
