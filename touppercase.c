#include<stdio.h>
#include<ctype.h>

int main()
{
   char name[] = "snehal nikam";
   
  for(int i = 0; name[i] != '\0'; i++)
{
    name[i] = toupper(name[i]);
}
printf("%s\n",name);
}