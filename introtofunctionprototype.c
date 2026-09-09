#include<stdio.h>

int add(int a,int b);
int difference(int a, int b);
int multiply(int a, int b);

int main()
{
int a;
int b;
int c ,d , e;
printf("Enter First number\n");
scanf("%d",&a);
printf("Enter Second number\n");
scanf("%d",&b);
c= add(a,b);
d=difference(a,b);
e=multiply(a,b);
printf("Sum = %d\n",c );
printf("Difference = %d\n",d );
printf("Multiplication = %d\n",e );

return 0;
}

int add(int a, int b)
{
    return a + b;
}

int difference(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

