#include<stdio.h>

int main()
{
    int numbers[6] = {12, 45, 7, 89, 23, 56};
    int largest = 0;
        for(int i = 0; i<6 ; i++)
    {
       if(numbers[i] > largest)
       {
     
        largest = numbers[i];
     
       }
        
    }
    
    printf("largest %d\n",largest);

    return 0;
}