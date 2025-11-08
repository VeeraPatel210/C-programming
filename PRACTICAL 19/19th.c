#include <stdio.h>
void main()
{
    //pattern 1
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            if (j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    printf("\n\n\n");


    //pattern 2
    for(i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            if(i==1)
            {
                printf("%d",j);
            }
            else if(i==j)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        for (j=1;j<=4;j++)
        {
            if(i==1)
            {
                printf("%d",5+j);
            }
            else if(j==5-i)
            {
                printf("%d",j+5);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n");


    //pattern 3
    for(i=1;i<=5;i++)
    {
        for (j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for (j=6-i;j>=1;j--)
        {
            printf("%d",j);
        }
        for (j=1;j<=4-i+1;j++)
        {
            printf("%d",j+1);
        }
    printf("\n");
    }
    for(i=2;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%d",j+1);
        }
    printf("\n");
    }
    printf("\n\n\n");


    //pattern 4
    //ASCII value of @ is 64
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",'@'+ j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c",'@'+j);
        }
        printf("\n");
    }
    for(i=2;i<=4;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=4-i+1;j++)
        {
            printf("%c",'@'+j);
        }
        for(j=3-i+1;j>=1;j--)
        {
            printf("%c",'@'+j);
        }
        printf("\n");
    }
}
