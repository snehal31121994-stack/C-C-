#include<stdio.h>
#include<stdlib.h>

struct car
    {
        char brand[50];
        char model[50];
        int year;
        float price;
    };

    int main()
    {
        int n;
        printf("How many cars? ");
        scanf("%d", &n);

        struct car *cars;
        cars = calloc(n, sizeof(struct car));

        if(cars == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }
      
        for(int i = 0; i < n; i++)
        {
            printf("Enter details for car %d:\n", i+1);
            printf("Brand: ");
            scanf("%s", cars[i].brand);
            printf("Model: ");
            scanf("%s", cars[i].model);
            printf("Year: ");
            scanf("%d", &cars[i].year);
            printf("Price: ");
            scanf("%f", &cars[i].price);
        }

        for(int i = 0; i < n; i++)
        {
            printf("\nCar %d Details:\n", i+1);
            printf("Brand: %s\n", cars[i].brand);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: %.2f\n", cars[i].price);
        }

        int expensive = 0;

for(int i = 1; i < n; i++)
{
    if(cars[i].price > cars[expensive].price)
    {
        expensive = i;
    }
}

printf("\nThe most expensive car is:\n");
printf("Brand: %s\n", cars[expensive].brand);

        free(cars);

        return 0;
    }