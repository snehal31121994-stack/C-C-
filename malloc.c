#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *numbers;
    printf("How many numbers");
    scanf("%d", &n);

    numbers = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    for(int i = 0; i < n; i++) 
    {
        printf(" number[%d] = %d \n", i+1, numbers[i]);
        
    }
    free(numbers);
    return 0;
}