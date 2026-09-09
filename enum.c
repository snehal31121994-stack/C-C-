#include<stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    int Signal = GREEN;

    printf("Traffic Light Signal:%d\n", Signal);

    return 0;
}