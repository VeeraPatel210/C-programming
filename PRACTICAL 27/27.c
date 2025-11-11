#include <stdio.h>
int savings(int x);

int main()
{
    int i,n;
    printf("Enter number of months: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %d",savings(i));
    }
    printf("\n");
    return 0;
}

int savings(int x)
{
    if(x==1 || x==2)
    {
        return 1;
    }
    else
    {
        return savings(x-1)+ savings(x-2);
    }
}
