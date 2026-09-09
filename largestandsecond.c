#include<stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int largest =numbers[0];
    int second =numbers[0];
    int size = sizeof(numbers) / sizeof(numbers[0]);


    for(int i=0; i< size; i++)
    {
      if(numbers[i] > largest && largest != numbers[i])
      {
           second = largest;
           largest = numbers[i];
      }
      
      else if( second < numbers[i] && numbers[i]!= largest )
     {
            second = numbers[i];
     }
     
    }
    printf(" largest = %d\n",largest);
     printf(" Second largest = %d\n",second);
    return 0;
}