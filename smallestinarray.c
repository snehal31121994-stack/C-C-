#include<stdio.h>

int main()
{
    int numbers[6] = {12, 45, 7, 89, 23, 56};
    int smallest = numbers[0];
        for(int i = 0; i<6 ; i++)
    {
       if(numbers[i] < smallest)
       {
     
        smallest = numbers[i];
     
       }
        
    }
    
    printf("Smallest %d\n",smallest);

    return 0;
}