#include<stdio.h>

int main()
{
   char name[]= "Hello World" ;
  
   int count = 0;

     for(int i=0; name[i] != '\0'; i++)
     {
       count++;

     }
      printf("length = %d\n", count);
     return 0;
}