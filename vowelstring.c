#include<string.h>
#include<stdio.h>

int main()
{
   char name[]= "Snehal Nikam" ;
   int size = strlen(name);
   int count =0;

     for(int i=0; i<size; i++)
     {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i'|| name[i]=='o'|| name[i]== 'u')
        {
            printf("%c\n", name[i]);
            count++;
        }
       
     }
     
     printf("%d\n",count);

     return 0;
}