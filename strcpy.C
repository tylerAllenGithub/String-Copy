/*Tyler Allen
CS111
4/23/2015
Copy a string*/


#include <iostream>
using namespace std;

void myStrCpy(char dest[], const char source[]);

int main()
{
  char str1[20] = "Hello"; // = "Hello CS111";
  cout<<str1<<endl;//Hello CS111
  myStrCpy(str1, "Hi" ); //"Oh PHYS302");
  cout<<str1<<endl;//Oh PHYS302

  return 0;
}

void myStrCpy(char dest[], const char source[])
{
  int i;

  for(i=0;i < 20 && source[i]!='\0';i++)
    {
      dest[i]=source[i];
    }

    dest[i] = '\0';
}
