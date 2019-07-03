
void setup() 
{
  pinMode(13,OUTPUT);

}

void defer()
{
  delay(3000);
}

void space()
{
  delay(7000);
}

void dot()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}

void dash()
{
  digitalWrite(13,HIGH);
  delay(4000);
  digitalWrite(13,LOW);
  delay(1000);
}


int main()
{
  char str[1000];
  int i;

  for(i=0;i<1000;i++)
  {
    scanf("%c",&str[i]);
    if(str[i]=="\n")
    break;
  }
  for(i=0;str[i]!="\0";i++)
  {
    switch(str[i])
    {
      case 'a':dot;dash;defer;
      case 'b':dash;dot;dot;defer;
      case 'c':dash;dot;dot;dot;defer;
      case 'd':dash;dot;dot;defer;
      case 'e':dot;defer;
      case 'f':dot,dot,dash,dot,defer;
      case 'g':dash;dash;dot;defer;
      case 'h':dot;dot;dot;dot;defer;
      case 'i':dot;dot;defer;
      case 'j':dot;dash;dash;dash;defer;
      case 'k':dash;dot;dash;defer;
      case 'l':dot;dash;dot;dot;defer;
      case 'm':dash;dash;defer;
      case 'n':dash;dash;defer;
      case 'o':dash;dash;dash;defer;
      case 'p':dot;dash;dash;dot;defer;
      case 'q':dash;dash;dot;dash;defer;
      case 'r':dot;dash;dot;defer;
      case 's':dot;dot;dot;defer;
      case 't':dash;defer;
      case 'u':dot;dot;dash;defer;
      case 'v':dot;dot;dot;dash;defer;
      case 'w':dot;dash;dash;defer;
      case 'x':dash;dot;dot;dash;defer;
      case 'y':dash;dot;dash;dash;defer;
      case 'z':dash;dash;dot;dot;defer;
      case 32:space;
    }
  }

  return 0;
}
