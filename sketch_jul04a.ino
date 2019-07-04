//W前进；S后退；A左转；D右转；J停止；
void setup()  
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}

void backward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}

void leftward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
}

void rightward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
}

void stop()
{
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
int income;
void loop()
{
 if(Serial.available()>0)
 {
   income=Serial.read();
 }
  switch(income)
  {
    case 'w':
    forward();
    break;
    case 's':
    backward();
    break;
    case 'a':
    leftward();
    break;
    case 'd':
    rightward();
    break;
    case 'j':
    stop();
    break;
}
}
