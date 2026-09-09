#include<stdio.h>
int multiply(int a,int b)
{
    return  a * b;
}

int main()
{
    
    int result;

    result = multiply(10, 20);

    printf("Result = %d\n", result);

    return 0; 

}