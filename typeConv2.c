#include<stdio.h>
int main()
{
    int a = 5;
    int b = 2;
    int c = a/b;
    float d = (float)a/b;
    float e = a/b;
    
    printf("Integer Divison = %d\n",c);
    printf("Float Divison = %.2f\n",e);
    printf("Float Divison = %.2f\n",d);
    return 0;
}