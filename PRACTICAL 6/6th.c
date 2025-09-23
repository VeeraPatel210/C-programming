#include <stdio.h>
#define fee 200
void main()
{
    int age,f,i,n,sum=0;
    printf("HOW MANY PEOPLE ARE THERE? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter your age: ");
        scanf("%d",&age);
        if(age<12 && age>0)
        {
            printf("\nFree Entry!");
        }
        else if( age >0 && age<=60)
        {
            printf("Your Entry fee is %d.",fee);
            sum=sum+fee;
        }
        else if( age >60 && age<120)
        {
            f=fee-(fee*0.05);
            printf("You have a discount of 5%%. \n So your fee is %d.",f);
            sum=sum+f;
        }
        else
        {
            printf("\nEnter valid input.");
        }
    }
    if(n>5)
    {
        sum=sum-sum*0.1;
    }
    printf("\nYOUR TOTAL IS: %d",sum);

}


