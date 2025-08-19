#include <stdio.h>
void main()
{
    int i;
    for (i=10;i<=100;i=i+10)
    {
        printf("\nCurrent water level: %d liters.",i);
        sleep(1);
        if(i==100)
        {
            printf("\nTank is full.");
        }
    }
}
