#include<stdio.h>

int main()
{
    int numbers[5]={10, 45, 23, 67, 32};
    int largest=0;

    for(int i=0; i<5; i++)
    {
      if(numbers[i] > largest)
      {
           largest = numbers[i];
      }
      
    }
    printf(" largest = %d\n",largest);
    return 0;
}