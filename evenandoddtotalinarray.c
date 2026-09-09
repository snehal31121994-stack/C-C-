#include<stdio.h>
int main()
{
    int even= 0;
    int odd = 0;
    int numbers[] = {10, 21, 32, 43, 54, 65, 76};


    for(int i = 0; i<7; i++)
    {
        if(numbers[i]%2==0)
        {
          even = even + 1;  
           
        }
         else
        {
          odd = odd + 1;  
           
        }   
    }
      printf(" Even numbers = %d\n",even);
      printf(" Odd numbers = %d\n",odd);
    return 0;
}