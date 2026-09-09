#include<stdio.h>
int Square(int a)
{
    return  a * a;
}

int main()
{
   int x;
   printf("Enter number: ");
   scanf("%d",&x);
   x = Square(x);
    printf("Square = %d\n",x);
    

    return 0; 

}