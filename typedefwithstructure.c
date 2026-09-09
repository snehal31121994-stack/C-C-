#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[50];
    int age;
    float marks;
} Student;

int main()
{
    Student s1;
    strcpy(s1.name, "John Doe");
    s1.age = 20;
    s1.marks = 85.5;

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}