#include<stdio.h>
int getnumber()
{
    int x;
   printf("Enter number: ");
   scanf("%d",&x);
   return x;
}

int main()
{
   int result;
   result = getnumber();
    printf("You Entered = %d\n",result);
    

    return 0; 

}