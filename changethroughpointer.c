#include<stdio.h>

int main()
{
    int x= 20;
    int *ptr;
    ptr = &x;

    printf("Before: %d\n",*ptr);

    *ptr = 50;
    printf("After: %d\n",*ptr);

    return 0;
}
