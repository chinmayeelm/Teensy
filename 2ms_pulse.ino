int bluePin =12;

void setup()
{                
  Serial.begin(38400);
  pinMode(bluePin, OUTPUT);
}

int val;

void loop()                     
{
  val = analogRead(0);
  Serial.print("analog 0 is: ");
  Serial.println(val);
  delay(250);

  if (val != 1023){
    digitalWrite(bluePin, HIGH);
    delay(2);
    digitalWrite(bluePin, LOW);
//    delay(2);
  }    
}
