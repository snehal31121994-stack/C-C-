#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int (*ptr)(int , int);

    ptr = add;
    printf("Addition: %d\n", ptr(10, 5));

    ptr = subtract;
    printf("Subtraction: %d\n", ptr(10, 5));

    ptr = multiply;
    printf("Multiplication: %d\n", ptr(10, 5));

    return 0;
}