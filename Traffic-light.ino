int green = 13;
int yellow = 12;
int red = 11;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  digitalWrite(green, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(green, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(1500); // Wait for 1000 millisecond(s)
  digitalWrite(yellow, LOW);
  
  digitalWrite(red, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(red, LOW);
