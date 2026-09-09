#include<stdio.h>

int main()
{
    int numbers[6] = {5, 10, 15, 20, 25, 30};
    int search;
    printf("Enter a numer to search:");
    scanf("%d", &search);
    int found = 0;
    int i =0;
        for( i = 0; i<6 ; i++)
    {
       if(numbers[i]== search)
       {
        found = 1;
        break;
      //   printf("Found = %d\n",numbers[i]);
       }
        
    }
    if (found == 1)
{
    printf("Number found at index %d\n",i);
}
else
{
    printf("Number not found\n");
}
    
    return 0;
}