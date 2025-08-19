#include <stdio.h>
void main()
{
    int time,ch;
    x:printf("How many seconds you want to count?");
    scanf("%d",&time);
    if (time<0)
    {
        printf("\nInvalid Input.");
        goto x;
    }
    else
    {
        while(time>0)
        {
            printf("\n%d",time);
            time--;
            sleep(1);
        }
        printf("\nCountdown Completed.");
    }
    printf("\n\nDO YOU WANT TO RESTART THE COUNTDOWN?\n1)YES\n2)NO\n\nENTER YOUR CHOICE:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {
            goto x;
            break;
        }
    case 2:
        {
            printf("\nThank You.");
            break;
        }
    default:
        {
            printf("\nInvalid input. Try again!");
            goto x;
            break;
        }
    }
}
