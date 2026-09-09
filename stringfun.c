#include <stdio.h>
#include <string.h>

int main()
{
    char car[40] = "Automotive";
    int length = strlen(car);
    char car2[40];
    strcpy(car2, car);
    printf("%s\n", car); 
    printf("Length: %d\n", length);
    printf("Copied string: %s\n", car2);

    return 0;
}