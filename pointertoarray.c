#include<stdio.h>


int main()
{
 int numbers[] = { 10, 20, 30};
 int *ptr = numbers;

 for(int i=0 ; i<3 ; i++)
 {
    printf(" %d\n", *ptr);
    ptr++;
 }

 

 return 0;
}
