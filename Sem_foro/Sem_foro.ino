// Semáforo
void setup()
{
  pinMode(11, OUTPUT); // ledGreen
  pinMode(13,OUTPUT); // LedRed
  pinMode(12, OUTPUT); //LedYellow
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  delay(1500); // Wait for 1500 1isecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(1500); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
}
