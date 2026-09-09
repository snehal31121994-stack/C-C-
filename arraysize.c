#include<stdio.h>

int main()
{
    int numbers[6] = {12, 45, 7, 89, 23, 56};
    int x;
    int y;
    int z;
    x = sizeof(numbers[0]);
    y= sizeof(numbers);

     z = y/x ;
    printf("Size of Array is = %d",z);
    return 0;
}