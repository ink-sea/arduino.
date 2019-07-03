#include <Morse.h>

 
Morse morse(13);
 
void setup()
{
}

void loop()
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
      case 'a':morse.dot();morse.dash();morse.c_space();
      case 'b':morse.dash();morse.dot();morse.dot();morse.c_space();
      case 'c':morse.dash();morse.dot();morse.dot();morse.dot();morse.c_space();
      case 'd':morse.dash();morse.dot();morse.dot();morse.c_space();
      case 'e':morse.dot();morse.c_space();
      case 'f':morse.dot(),morse.dot(),morse.dash(),morse.dot(),morse.c_space();
      case 'g':morse.dash();morse.dash();morse.dot();morse.c_space();
      case 'h':morse.dot();morse.dot();morse.dot();morse.dot();morse.c_space();
      case 'i':morse.dot();morse.dot();morse.c_space();
      case 'j':morse.dot();morse.dash();morse.dash();morse.dash();morse.c_space();
      case 'k':morse.dash();morse.dot();morse.dash();morse.c_space();
      case 'l':morse.dot();morse.dash();morse.dot();morse.dot();morse.c_space();
      case 'm':morse.dash();morse.dash();morse.c_space();
      case 'n':morse.dash();morse.dash();morse.c_space();
      case 'o':morse.dash();morse.dash();morse.dash();morse.c_space();
      case 'p':morse.dot();morse.dash();morse.dash();morse.dot();morse.c_space();
      case 'q':morse.dash();morse.dash();morse.dot();morse.dash();morse.c_space();
      case 'r':morse.dot();morse.dash();morse.dot();morse.c_space();
      case 's':morse.dot();morse.dot();morse.dot();morse.c_space();
      case 't':morse.dash();morse.c_space();
      case 'u':morse.dot();morse.dot();morse.dash();morse.c_space();
      case 'v':morse.dot();morse.dot();morse.dot();morse.dash();morse.c_space();
      case 'w':morse.dot();morse.dash();morse.dash();morse.c_space();
      case 'x':morse.dash();morse.dot();morse.dot();morse.dash();morse.c_space();
      case 'y':morse.dash();morse.dot();morse.dash();morse.dash();morse.c_space();
      case 'z':morse.dash();morse.dash();morse.dot();morse.dot();morse.c_space();
      case 32:morse.w_space();

    }
  }

}
