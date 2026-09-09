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

int calculate(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}

int main()
{
    int (*ptr)(int , int);

    ptr = add;
    int result = calculate(10, 5, add);
    printf("Result: %d\n", result);

    ptr = subtract;
    result = calculate(10, 5, subtract);
    printf("Result: %d\n", result);

    ptr = multiply;
    result = calculate(10, 5, multiply);
    printf("Result: %d\n", result);

    
    return 0;
}