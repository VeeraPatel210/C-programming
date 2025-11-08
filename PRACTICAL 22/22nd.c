#include <stdio.h>
void main()
{
    int i,j,n,r,c;
    int ar[5][10]={{0}};
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of reserved seats: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter row and seat number for selected seat: ");
        scanf("%d %d",&r,&c);
        if(ar[r-1][c-1]==0)
            {
                ar[r-1][c-1]=1;
            }
    }
    printf("\nReserved seats denoted by (1) \nNon reserved denoted by (0)\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
}
