#include<stdio.h>

int main()
{
    int numbers[8] = {10, 15, 22, 33, 40, 51, 64, 75};
    int count = 0;
    for(int i = 0; i<8; i++)
    {
        if(numbers[i]%2 == 0)
        {
            count++ ;
        }
    }
    
   printf("Count=%d\n",count);
    return 0;
}