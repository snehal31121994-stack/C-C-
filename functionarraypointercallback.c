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
    int (*operations[3])(int, int) = {add, subtract, multiply};
    int a,b;
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

    if (choice < 1 || choice > 3)
{
    printf("Invalid choice!\n");
    return 1;
}

    int result;
    result = calculate(a, b, operations[choice - 1]);
    printf("Result: %d\n", result);
    return 0;
}