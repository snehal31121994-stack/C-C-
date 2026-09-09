#include<stdio.h>

int main()
{

    FILE *file;
    char line[100];

    file = fopen("employee.txt", "r");

    if(file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    char name[50];
    int age;
    char branch[50];

    while(fscanf(file, "%s %d %s", name, &age, branch) == 3)
{
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Branch: %s\n\n", branch);
}
    fclose(file);
    return 0;
}