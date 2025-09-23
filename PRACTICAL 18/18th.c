#include <stdio.h>
void main()
{
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    for (i=1;i<=r;i++)
    {
        for (j=1;j<=c;j++)
        {
            printf("%3d",i*j);
        }
        printf("\n");
    }
}
