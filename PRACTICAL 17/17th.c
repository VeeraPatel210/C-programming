#include <stdio.h>
void main()
{
    int minute=1;
    float distance=0.5;
    while(1)
    {
        printf("\nMinute %d: Distance Covered = %.2f km",minute,distance);
        minute++;
        distance=distance+0.5;
        sleep(1);
        if (minute==21)
        {
            printf("\nMARATHON COMPLETED!");
            break;
        }
    }
}
