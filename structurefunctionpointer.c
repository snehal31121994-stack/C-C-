#include<stdio.h>
#include<string.h>

struct car
    {
        char brand[50];
        char model[50];
        int year;
        float price;
    };

void printcar(struct car *cars, int size)
{
    for(int i =0; i< size; i++)
    {

    printf("Car Details:\n");
    printf("Brand: %s\n", cars[i].brand);
    printf("Model: %s\n", cars[i].model);
    printf("Year: %d\n", cars[i].year);
    printf("Price: %.2f\n", cars[i].price);

    }
    
}

int main()

{
    
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

    struct car *ptr = &cars[0];
   // printcar(&car1);
    printcar(ptr,3);

    return 0;



}