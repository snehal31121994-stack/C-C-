#include<stdio.h>
#include<string.h>

struct car
    {
        char brand[50];
        char model[50];
        int year;
        float price;
    };

    int main()
    {
        
        struct car cars[3]=
        {
            {"Toyota", "Camry", 2020, 25000.45
            },
            {
                "Honda", "City", 2022, 18000.50
            },
            {
                "BMW", "X3", 2024, 50000.00
            }

        };
        
     
        struct car *ptr = cars;

        printf("Car Details:\n");
        printf("Brand: %s\n", (ptr+2)->brand);
        printf("Model: %s\n", (ptr+2)->model);
        printf("Year: %d\n", (ptr+2)->year);
        printf("Price: %.2f\n", (ptr+2)->price);

        return 0;
    }