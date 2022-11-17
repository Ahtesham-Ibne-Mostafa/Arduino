// C++ code
//
int Time = 0;

int Blink = 0;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  Blink = 1000;
  Time = 5000;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(Blink); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(Time); 
  digitalWrite(12, HIGH);
  delay(Blink); 
  digitalWrite(12, LOW);
  delay(Time); 
  digitalWrite(11, HIGH);
  delay(Blink);
  digitalWrite(11, LOW);
  delay(Time); 
  digitalWrite(12, HIGH);
  delay(Blink);
  digitalWrite(12, LOW);
  delay(Time); 
  digitalWrite(13, HIGH);
  delay(Blink); 
  digitalWrite(13, LOW);
  delay(Time); 
}