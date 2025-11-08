#include <stdio.h>
void main()
{
    int ar[25],i,pos=0,neg=0,odd=0,even=0;
    printf("Enter numbers: \n");
    for(i=1;i<=25;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>0 && ar[i]%2==0)
        {
            pos++;
            even++;
        }
        else if(ar[i]>0 && ar[i]%2!=0)
        {
            pos++;
            odd++;
        }
        else if(ar[i]<0 && ar[i]%2==0)
        {
            neg++;
            even++;
        }
        else if(ar[i]<0 && ar[i]%2!=0)
        {
            neg++;
            odd++;
        }
    }

    printf("\nPositive Numbers: %d",pos);
    printf("\nNegative Numbers: %d",neg);
    printf("\nEven Numbers: %d",even);
    printf("\nOdd Numbers: %d",odd);
}
