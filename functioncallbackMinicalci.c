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
    int Result;
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("1 Addition\n");
    printf("2 Subtraction\n");
    printf("3 Multiplication\n");
    int choice;
    printf("Enter choice: ");
    scanf("%d", &choice);

    int(*operation)(int, int);

    switch (choice)
    {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    Result = calculate(a, b, operation);
    printf("Result: %d\n", Result);
    return 0;
}