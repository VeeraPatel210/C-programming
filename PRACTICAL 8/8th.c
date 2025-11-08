//to check whether a person can open a account in bank or not
#include <stdio.h>
void main()
{
    int ch,i,n,age;
    printf("\n1) Check eligibility \n2) Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {
            printf("\nHow many people eligibility you want to check : ");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("\nEnter Age: ");
                scanf("%d",&age);
                if(age>=60)
                {
                    printf("\nYOU ARE ELIGIBLE FOR SENIOR CITIZEN ACCOUNT.");
                }
                else if(age>=18)
                {
                    printf("\nYOU ARE ELIGIBLE.");
                }
                else if(age>0)
                {
                    printf("\nYOU ARE NOT ELIGIBLE.");
                }
                else
                {
                    printf("\nInvalid age entered.");
                }
            }
            break;
        }
    case 2:
        {
            printf("\nTHANK YOU!");
            break;
        }
    default:
        {
            printf("\nINVALID CHOICE ENTERED.");
        }
    }
}
