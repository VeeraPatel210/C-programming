#include <stdio.h>
void main()
{
    int n,i,p,mp=0;
    int ar[10];
    printf("How many values you want to enter? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value : ");
        scanf("%d",&ar[i]);
    }
    for(i=1;i<n;i++)
    {
        p=ar[i]-ar[i-1];
        if(p>mp)
        {
            mp=p;
        }
    }
    printf("Maximum profit is %d. ",mp);
}

