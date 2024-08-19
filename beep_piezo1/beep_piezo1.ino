// C++ code
// Iasmin Angel

int beep = 3
  
  ; 

void setup()
{
	pinMode(beep,OUTPUT); 
}

void loop()
{
  digitalWrite (beep,HIGH);
  delay(500); 
  
  digitalWrite (beep,LOW);
  delay(500);
}