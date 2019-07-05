int income;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
 {
   income=Serial.read()-'0';
 }
  switch(income)
  {
    case 0:
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    break;
    case 1:
    digitalWrite(10, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(5, HIGH);
    break;
    case 2:
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    break;
    case 3:
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    break;
    case 4:
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    break;
    case 5:
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    break;
    case 6:
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    break;
    case 7:
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    break;
    case 8:
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    break;
    case 9:
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    break;
}
  
  digitalWrite(11, LOW);
  delay(1000);
}
