#include<stdio.h>
int main()
{
    int positive= 0;
    int negative = 0 ;
    int numbers[] = {10, -21, 32, -43, 54, -65, 76};
    int size = sizeof(numbers)/ sizeof(numbers[0]);

    for(int i = 0; i< size; i++)
    {
        if(numbers[i]>=0)
        {
          positive = positive + 1;  
           
        }
         else
        {
          negative = negative + 1;  
           
        }   
    }
      printf(" positive numbers = %d\n",positive);
      printf(" negative numbers = %d\n",negative);

    return 0;
}