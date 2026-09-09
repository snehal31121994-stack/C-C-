#include<stdio.h>
#include <string.h>

int main()
{
   char name1[] = "SNEHAL";
   char name2[] = "Nikam";

  if(strcmp(name1, name2)==0)
  {
    printf("Strings are Same");
  }
  else{
    printf("Strings are Different");
  }

}