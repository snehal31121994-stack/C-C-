#include<stdio.h>

int main()
{

    FILE *file;
    file = fopen("students.txt", "w");

    if(file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
     
    fprintf(file, "Name : Snehal Nikam");
    fprintf(file, "\nEngineering : ENTC");
    fprintf(file, "\nLearning c programming");

    fclose(file);
    printf("Data written to students.txt successfully.\n");
    return 0;



}