#include<stdio.h>
int main()
{
    int n = 5;
    int mul = 0;
    for(int i = 1; i<= 10; i++)
    {
       mul=n*i;
       printf("5*%d=%d\n",i,mul);
       mul=0;
            
    }
    
    return 0;
}