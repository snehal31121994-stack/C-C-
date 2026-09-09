#include<stdio.h>

int main()
{
    int numbers[6] = {12, 45, 7, 89, 23, 56};
    int Sum = 0;
    float average;
    int size;
    int largest = numbers[0];
    int smallest = numbers[0];

    size = sizeof(numbers)/sizeof(numbers[0]);

        for(int i = 0; i<6 ; i++)
    {
       Sum = Sum + numbers[i];
        
       if(numbers[i] > largest)
      {
           largest = numbers[i];
      }
      if(numbers[i] < smallest)
      {
           smallest = numbers[i];
      }
    }
     average = (float)Sum/size;

    printf("Sum %d\n",Sum);
    printf("Average %.2f\n",average);
    printf("Size %d\n",size);
    printf("largest %d\n",largest);
    printf("smallest %d\n",smallest);


    return 0;
}