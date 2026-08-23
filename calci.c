#include<stdio.h>
int main()
{
    int n;
    printf("Enter First number: ");
    scanf("%d",&n);
    int x;
    printf("Enter Second number: ");
    scanf("%d",&x);
    char op;
    printf("Enter operation + - * / %%");
    scanf(" %c", &op);
    
    switch(op)
    {
        case '+':
        printf(" Addition = %d\n",n+x);
        break;

        case '-':
        printf(" Subtraction = %d\n",n-x);
        break;

        case '*':
        printf(" Multiplication = %d\n",n*x);
        break;

        case '/':
        if(x==0)
        {
            printf("cannot perform Division");
        }
        else
        {
            printf(" Division = %d\n",n/x);
        }
        break;

        case '%':
        if(x==0)
        {
            printf("cannot calculate Remainder");
        }
        else
        {
            printf(" Remainder = %d\n",n%x);
        }
        break;
        
        default:
        printf(" Invalid operation. Please use +, -, *, / or %");

    }

    return 0;

}