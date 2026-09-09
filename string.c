#include<stdio.h>

int main()
{
   char name[]= "snehal" ;
   int size = sizeof(name) / sizeof(name[0]);
   int count = 0;

     for(int i=0; i<size; i++)
     {
       count++;
       printf("%c\n", name[i]);
     }
      printf("length = %d\n", count);
     return 0;
}