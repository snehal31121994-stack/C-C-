#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *numbers;
   /* printf("How many numbers");
    scanf("%d", &n);*/

    numbers = malloc(3 * sizeof(int));

    for(int i = 0; i < 3; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
  

    int *temp = realloc(numbers, 5 * sizeof(int));

    if(temp == NULL)
    {
        printf("Reallocation failed\n");
        free(numbers);
        return 1;
    }

    numbers = temp;

    for(int i = 3; i < 5; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

     for(int i = 0; i < 5; i++) 
    {
        printf(" number[%d] = %d \n", i+1, numbers[i]);
        
    }


    free(numbers);
    return 0;
}