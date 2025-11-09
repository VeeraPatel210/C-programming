#include <stdio.h>
void main()
{
    int length=0,ch,i,c,flag=0;
    char str1[20],str2[20],copy[20];
    printf("Enter 1st statement: ");
    scanf("%s",str1);
    //for calculating length

    for(i=0;str1[i]!='\0';i++)
    {
        length++;
    }
    printf("\nThe length of 1st statement is: %d",length);
    printf("\nEnter 2nd statement: ");
    scanf("%s",str2);
    //for comparing two statements

    for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i] )
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\nThe statements are different");
    }
    else
    {
        printf("\nThe statements are same");
    }

    //for copying a statement

    {
        for(i=0;str1[i]!='\0';i++)
        {
            copy[i]=str1[i];
        }
        copy[i]='\0';
        printf("\n\nCopied string: %s",copy);
    }

    //reversing a statement
    printf("\n\nReversed statement: ");
    for(i=length-1;i>=0;i--)
    {

        printf("%c",str1[i]);
    }

    //concatenate
    int j=0;
    printf("\n\nConcatenated statement: ");
    for(i=0;str1[i]!='\0';i++)
    {
        printf("%c",str1[i]);
    }
    for(j=0;str2[j]!='\0';j++)
    {
        printf("%c",str2[j]);
    }

    //upper case and lower case

    printf("\n\nConverting into upper case:");
    printf("\nFirst statement:");
    for(i=0;str1[i]!=0;i++)
    {
        str1[i]=str1[i]-32;
        printf("%c",str1[i]);
    }
    printf("\nSecond statement:");
    for(i=0;str2[i]!=0;i++)
    {
        str2[i]=str2[i]-32;
        printf("%c",str2[i]);
    }
    printf("\n\nConverting into lower case:");
    printf("\nFirst statement:");
    for(i=0;str1[i]!=0;i++)
    {
        str1[i]=str1[i]+32;
        printf("%c",str1[i]);
    }
    printf("\nSecond statement:");
    for(i=0;str2[i]!=0;i++)
    {
        str2[i]=str2[i]+32;
        printf("%c",str2[i]);
    }

    //capitalizing each word
    printf("\n\nCapitalizing 1st letter: ");
    printf("\nStatement 1: ");
    str1[0]=str1[0]-32;
    for(i=0;str1[i]!='\0';i++)
    {
        printf("%c",str1[i]);
    }
    printf("\nStatement 2: ");
    str2[0]=str2[0]-32;
    for(i=0;str2[i]!='\0';i++)
    {
        printf("%c",str2[i]);
    }

}
