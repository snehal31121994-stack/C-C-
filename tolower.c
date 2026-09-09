#include<stdio.h>
#include<ctype.h>

int main()
{
   char name[] = "SNEHAL NIKAM";
   
  for(int i = 0; name[i] != '\0'; i++)
{
    name[i] = tolower(name[i]);
}
printf("%s\n",name);
}