int i=0;
int n=1;
  
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i=i+2)
  {
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
    for(n=1;n<8;n=n+2)
  {
  digitalWrite(n, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(n, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
}
