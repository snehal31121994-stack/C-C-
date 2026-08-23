#include<stdio.h>
int main()
{
    int age =20;
    int hasLincense = 1;

    if (age >= 18 )
    {
        if(hasLincense)
        {
        printf("Can drive");
        }
        else
        {
          printf("Cannot drive");  
        }
    }
    else
    {
         printf("To young to drive");
    }
    return 0;
}