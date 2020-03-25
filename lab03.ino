char val;
const byte LED=7;
void setup()
{
  Serial.begin(9600);
  Serial.println("Hello");
  Serial.println("World");
  pinMode(LED,OUTPUT);
  
}
void loop() 
{
  if(Serial.available())
  {
    val = Serial.read();
    if(val  == '1')
    {
      digitalWrite(LED,HIGH);
      Serial.println("LED7 ON");
    }
    else if(val == '0')
    {
      digitalWrite(LED,LOW);
      Serial.println("LED7 OFF");
    }
  }
}
