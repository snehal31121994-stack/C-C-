#include <stdio.h>
int main()
{
    int a = 10;
    int b = 3;
    int c = a/b;
    float d = (float)a/b;
    
    printf("Integer Divison = %d\n",c);
    printf("Float Divison = %.2f\n",d);
    return 0;
}