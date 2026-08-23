#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=0; j<=i-5; j++)
       {
        printf(" ");
       }
       for(int k = 1; k<= 10; k++)
       {
        printf("*");
       }
       printf("\n");
    }

   return 0;
}