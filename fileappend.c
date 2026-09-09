#include<stdio.h>

int main()
{

    FILE *file;
    file = fopen("students.txt", "a");

    if(file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
     
    fprintf(file, "\n current topic : file handling");
    

    fclose(file);
    printf("Data written to students.txt successfully.\n");
    return 0;



}