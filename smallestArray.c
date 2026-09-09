#include<stdio.h>

int main()
{
    int numbers[5]={10, 45, 23, 67, 32};
    int smallest= numbers[0];

    for(int i=0; i<5; i++)
    {
      if(numbers[i] <  smallest)
      {
           smallest = numbers[i];
      }
      
    }
    printf(" Smallest = %d\n",smallest);
    return 0;
}