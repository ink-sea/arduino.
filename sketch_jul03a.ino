
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
      case 'a':dot;dash;defer;break;
      case 'b':dash;dot;dot;defer;break;
      case 'c':dash;dot;dot;dot;defer;break;
      case 'd':dash;dot;dot;defer;break;
      case 'e':dot;defer;break;
      case 'f':dot,dot,dash,dot,defer;break;
      case 'g':dash;dash;dot;defer;break;
      case 'h':dot;dot;dot;dot;defer;break;
      case 'i':dot;dot;defer;break;
      case 'j':dot;dash;dash;dash;defer;break;
      case 'k':dash;dot;dash;defer;break;
      case 'l':dot;dash;dot;dot;defer;break;
      case 'm':dash;dash;defer;break;
      case 'n':dash;dash;defer;break;
      case 'o':dash;dash;dash;defer;break;
      case 'p':dot;dash;dash;dot;defer;break;
      case 'q':dash;dash;dot;dash;defer;break;
      case 'r':dot;dash;dot;defer;break;
      case 's':dot;dot;dot;defer;break;
      case 't':dash;defer;break;
      case 'u':dot;dot;dash;defer;break;
      case 'v':dot;dot;dot;dash;defer;break;
      case 'w':dot;dash;dash;defer;break;
      case 'x':dash;dot;dot;dash;defer;break;
      case 'y':dash;dot;dash;dash;defer;break;
      case 'z':dash;dash;dot;dot;defer;break;
      case 32:space;break;
    }
  }

  return 0;
}
