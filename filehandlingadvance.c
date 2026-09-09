#include<stdio.h>
struct car
{
    char brand[50];
    char model[50];
    int year;
    float price;
};
int main()
{

    FILE *file;
    file = fopen("cars.txt", "w");

    if(file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    char brand[50];
    char model[50];
    int year;
    float price;
    struct car cars[3];

    for(int i = 0; i < 3; i++)
    {
        printf("Enter cars[%d] details:", i);
        scanf("%s %s %d %f", cars[i].brand, cars[i].model, &cars[i].year, &cars[i].price);
        fprintf(file,"%s %s %d %f \n", cars[i].brand, cars[i].model, cars[i].year, cars[i].price);
        
    }
    fclose(file);

    file = fopen("cars.txt", "r");

    while(fscanf(file, "%s %s %d %f", brand, model, &year, &price) == 4)
    {
        printf("Car Details:\n");
        printf("Brand: %s\n", brand);
        printf("Model: %s\n", model);
        printf("Year: %d\n", year);
        printf("Price: %.2f\n", price);
    }

    fclose(file);
    return 0;
  




}