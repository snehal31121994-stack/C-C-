#include<stdio.h>
#include<string.h>

int main()
{
    char name[50] ;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")]= '\0';
    printf("Youre name is %s", name);
    int length = strlen(name);
    printf("\n Length of name is %d\n", length);
}