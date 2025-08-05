#include <stdio.h>
void main()
{
    float amt;
    int ans;
    printf("Enter the amount:");
    scanf("%f",&amt);
    printf("Are you a registered member? \n Enter 1 for yes and 2 for no;");
    scanf("%d",&ans);
    if(ans==1)
    {
      if ( amt>0 && amt<1000)
        {
        printf("There is no discount for your purchase");
        printf("AMOUNT TO BE PAID IS %f",amt);
        }
      else if(amt>=1000 && amt<=5000)
        {
        amt=amt-(amt*0.1);
        printf("There is a discount of 10 percent.\nYour total amount is %f",amt);
        printf("AMOUNT TO BE PAID IS %f",amt);
        }
      else
        {
        amt=amt-(amt*0.2);
        printf("There is a discount of 20 percent.\nYour total amount is %f",amt);
        printf("\n AMOUNT TO BE PAID IS %f",amt);
        }
    }
    else
    {
        if ( amt>0 && amt<1000)
        {
        printf("There is no discount for your purchase");
        printf("\n5 percent GST is applied on the amount.");
        amt=amt+(amt*0.05);
        printf("AMOUNT TO BE PAID IS %f",amt);
        }
        else if(amt>=1000 && amt<=5000)
        {
        amt=amt-(amt*0.1);
        printf("There is a discount of 10 percent.\nYour total amount is %f",amt);
        printf("\n5 percent GST is applied on the amount.");
        amt=amt+(amt*0.05);
        printf("AMOUNT TO BE PAID IS %f",amt);
        }
        else if(amt>5000)
        {
        amt=amt-(amt*0.2);
        printf("There is a discount of 20 percent.\nYour total amount is %f",amt);
        printf("\n 5% GST is applied on the amount.");
        amt=amt+(amt*0.05);
        printf("\n AMOUNT TO BE PAID IS %f",amt);
        }
        else
        {
        printf("Invalid amount entered");
        }
    }
}
