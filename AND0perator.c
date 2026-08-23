#include<stdio.h>
int main()
{
    int age = 65;
    if (age >= 18 && age <= 60)
    {
        printf("Age is within the allowed range");
    }
    else
    {
         printf("Age is not within the allowed range");
    }
    
    return 0;
}