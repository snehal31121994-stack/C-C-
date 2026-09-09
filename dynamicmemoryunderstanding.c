#include<stdio.h>
#include<stdlib.h>
void process()
{
    int local = 100;
    static int count = 0;
    count++;
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    *ptr = 200;
    (*ptr)++;
    local++;
    printf("Local variable: %d\n", local);
    printf("Static variable: %d\n", count);
    printf("Dynamic variable: %d\n", *ptr);


    free(ptr);

}

int main()
{
    process();
    process();
    process();

    return 0;
}