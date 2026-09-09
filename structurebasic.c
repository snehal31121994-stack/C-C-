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
    int expensive = 0;



    struct car car1;
    strcpy(car1.brand, "Toyota");
    strcpy(car1.model, "Camry");
    car1.year = 2020;
    car1.price = 25000.45;

    struct car car2;    
    strcpy(car2.brand, "Honda");
    strcpy(car2.model, "City");
    car2.year = 2022;
    car2.price = 18000.50;

    struct car car3;
    strcpy(car3.brand, "BMW");
    strcpy(car3.model, "X3");
    car3.year = 2024;
    car3.price = 50000.00;

    struct car cars[3] = {car1, car2, car3};

    for(int i = 0; i < 3; i++)
    {

        printf("Car %d:\n", i + 1);
        printf("Brand: %s\n", cars[i].brand);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("\n");
    }

    for(int i = 1; i < 3; i++)
{
    if(cars[i].price > cars[expensive].price)
    {
        expensive = i;
    }
}

printf("The most expensive car is:\n");
printf("Brand: %s\n", cars[expensive].brand);

    return 0;
}