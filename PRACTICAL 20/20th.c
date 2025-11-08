#include <stdio.h>
void main()
{
    int i,j,flag=0;
    int str[5]={5,10,15,20,25};
    int str1[5];
    printf("Original list:");
    for(i=0;i<5;i++)
    {
        printf("\n%d",str[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nEnter ID %d: ",i+1);
        scanf("%d",&str1[i]);
    }
    for(i=0;i<5;i++)
    {
        flag=0;
        for(j=0;j<5;j++)
        {
            if (str[i]==str1[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            printf("%d ID is missing.",str[i]);
        }
    }
}

