#include<stdio.h>

void changeValue(int *ptr)
{
    *ptr = 100;
}
int main()
{
 int x = 10;
 int *ptr = &x;

 printf("Before: %d\n",*ptr);
 changeValue(ptr);
 printf("After: %d\n",*ptr);

 return 0;

}