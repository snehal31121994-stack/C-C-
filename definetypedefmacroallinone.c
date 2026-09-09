#include<stdio.h>
#include<string.h>

#define BONUS_PERCENT 10

typedef struct Employee
{
    char name[50];
    float salary;
    int Level;
} Employee;

enum Level
{
    JUNIOR,
    MANAGER,
    SENIOR
};

int main()
{
    Employee e1;
    strcpy(e1.name, "Alice");
    e1.salary = 50000;
    e1.Level = SENIOR;

    switch(e1.Level)
    {
        case JUNIOR:
          printf("Level: JUNIOR\n");   
            break;
        case MANAGER:
            printf("Level: MANAGER\n");
            break;
        case SENIOR:
            printf("Level: SENIOR\n");
            break;
        default:
            printf("Invalid Level\n");
            return 1;
    }

    
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    printf("Bonus Percent: %d%%\n", BONUS_PERCENT);

    
   return 0;

}