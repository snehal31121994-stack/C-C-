#include<stdio.h>
int main()
{
    int age =25;
    int hasLincense = 1;

    if (age >= 18 && hasLincense)
    {
        printf("Can drive");
    }
    else
    {
         printf("Cannot Drive");
    }
    return 0;
}