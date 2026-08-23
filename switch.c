#include<stdio.h>
int main()
{
    int choice = 7;
    switch(choice)
    {
        case 1:
        printf("Add");
        break;

        case 2:
        printf("Substract");
        break;

        case 3:
        printf("Multiply");
        break;

        case 4:
        printf("Divide");
        break;

        default:
        printf("invalid choice");
    }
}