#include<stdio.h>

int main()
{
    int numbers[6] = {12, 45, 7, 89, 23, 56};
    int Sum = 0;
    float average;

        for(int i = 0; i<6 ; i++)
    {
       Sum = Sum + numbers[i];
        
    }
     average = (float)Sum/6;

    printf("Sum %d\n",Sum);
    printf("Average %.2f\n",average);

    return 0;
}