#include<stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int (*ptr)(int , int);

    ptr = multiply;

    int result = ptr(6, 7);
    printf("Result: %d\n", result);
    return 0;
}