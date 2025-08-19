#include <stdio.h>
#define pin_c 4767
void main()
{
    int amt, total=5000,ch,c,amt1,pin;
    p:printf("ENTER YOUR PIN NUMBER:");
    scanf("%d",&pin);
    if (pin_c==pin)
    {
        printf("1)WITHDRAW \n2)DEPOSIT");
        sleep(1);
        printf("\n\nENTER YOUR CHOICE:");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            {
                x:printf("Enter the withdrawal amount:");
                scanf("%d",&amt);
                if (amt>total)
                {
                    printf("\nInsufficient Balance. \nTRY AGAIN!");
                    goto x;
                }
                else
                {
                    total=total-amt;
                    printf("\nYOUR REMAINING BALANCE IS: %d",total);
                }
                printf("\n\nDo you want to withdraw more money?\nEnter 1 for yes and 2 for no. ");
                scanf("%d",&ch);
                if (ch==1)
                {
                    goto x;
                }
                else
                {
                    printf("\nTHANK YOU!");
                }
                break;
            }
        case 2:
            {
                printf("YOUR BALANCE IS: %d",total);
                y:printf("\nEnter the deposit amount:");
                scanf("%d",&amt1);
                total=total+amt1;
                printf("\nYOUR NEW BALANCE IS: %d",total);
                printf("\n\nDo you want to deposit more money?\nEnter 1 for yes and 2 for no. ");
                scanf("%d",&ch);
                if (ch==1)
                {
                    goto y;
                }
                else
                {
                    printf("\nTHANK YOU!");
                }
                break;
            }
        }
    }
    else
    {
        printf("\nTRY AGAIN!");
        goto p;
    }
}


