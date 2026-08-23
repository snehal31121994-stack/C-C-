#include<stdio.h>
int main()
{
    int marks = 35;
    int attendance = 80;
    if (marks >= 40 || attendance >= 75)
    {
        printf("Eligible for exam");
    }
    else
    {
         printf("Not eligible for exam");
    }
    return 0;
}