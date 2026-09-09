#include<stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
   /*char name1[] = "SNEHAL";
   char name2[20] ;
  strcpy(name2, name1);
  
  printf("Name2 =%s\n",name2); */

   char first[30] = "SNEHAL";
   char last[] = " Nikam" ;
   strcat(first, last);
   int length = strlen(first);
   
   for(int i = 0; first[i] != '\0'; i++)
{
    first[i] = toupper(first[i]);
}

  printf("first =%s\n",first);
  printf("Length =%d\n",length);

}