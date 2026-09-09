#include<stdio.h>

int main()
{
    int x= 20;
    int *ptr;
    ptr = &x;

    printf("Print Value of x: %d\n",x);
    printf(" Print address of X: %p\n",(void*)&x);
    printf("Print value of ptr: %p\n",(void*)ptr);
    printf("Print value pointed by ptr: %d\n",*ptr);

    return 0;
}
