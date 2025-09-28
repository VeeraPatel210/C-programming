#include <stdio.h>
void main()
{
    int i=0,n,sum=0,ch;
    printf("1)Burger 150\n2)Pizza 200\n3)Pasta 120\n4)Sandwich 100\n5)French Fries 80");
    printf("\nHow many items you want to order? ");
    scanf("%d",&n);
    while(i!=n)
    {
       printf("\nEnter your choice: ");
       scanf("%d",&ch);
       switch(ch)
       {
       case 1:
        {
            sum=sum+150;
            break;
        }
       case 2:
        {
            sum=sum+200;
            break;
        }
       case 3:
        {
            sum=sum+120;
            break;
        }
       case 4:
        {
            sum=sum+100;
            break;
        }
       case 5:
        {
            sum=sum+80;
            break;
        }
       default:
        {
            printf("Invalid Input.");
        }
       }
    i++;
    }
    printf("TOTAL AMOUNT : %d",sum);
    if(sum>500)
    {
        printf("\nTHERE IS A DISCOUNT OF 10%%+ above 500 rupees.");
        sum=sum-sum*0.1;
        printf("\nTOTAL AMOUNT TO BE PAID IS: %d",sum);
    }
}
