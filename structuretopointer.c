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
    
    struct car car1;
    strcpy(car1.brand, "Toyota");
    strcpy(car1.model, "Camry");
    car1.year = 2020;
    car1.price = 25000.45;
 
    struct car *ptr = &car1;

    printf("Car Details:\n");
    printf("Brand: %s\n", ptr->brand);
    printf("Model: %s\n", ptr->model);
    printf("Year: %d\n", ptr->year);
    printf("Price: %.2f\n", ptr->price);

    return 0;
}