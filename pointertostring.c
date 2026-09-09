#include<stdio.h>
#include<string.h>

int main()
{

char name[100];
printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
name[strcspn(name, "\n")]= '\0';
int length = strlen(name);
char name2[length+1];
char *ptr = name;

while(*ptr != '\0')
{
   // printf("%c", *ptr); 
    ptr++;
}

while(ptr != name)
{
    ptr--;
    printf("%c", *ptr); 
    name2[length-1] = *ptr;
}

if(strcmp(name, name2) == 0)
{
    printf("\n%s is a palindrome\n", name);
}
else
{
    printf("\n%s is not a palindrome\n", name);
}   

return 0;
}