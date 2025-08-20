#include <stdio.h>
void main()
{
    int pick,total=21,comp,ch;
    printf("RULES: \n1)Game consists of 21 sticks. \n2)You can only pick 1,2,3 or 4 sticks. \n3)Last one to pick the stick will be the loser.");
    x:printf("\n\nHow many sticks you want to pick? ");
    scanf("%d",&pick);

    if (pick>0 && pick<5)
    {
        while (total!=1)
        {
            printf("\nYou chose %d matchsticks.",pick);
            total=total-pick;
            comp=5-pick;
            sleep(1);
            printf("\nComputer picked %d matchsticks.",comp);
            total=total-comp;
            if (total==1)
            {
                printf("\n\nOnly one matchstick is remaining and you have to pick it.\nSORRY YOU LOSE!");
                break;
            }
            goto x;
        }
    }
    else
    {
        printf("\nInvalid Input. Try Again!");
        goto x;
    }
}
