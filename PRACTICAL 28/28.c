//for storing details of a book using union
#include <stdio.h>
union book
{
    int bookNum;
    char title[100];
    char authorName[35];
    float price;
    char available;
}b1;
 void main()
 {
     int i;
     printf("Enter book number: ");
     scanf("%d",&b1.bookNum);
     printf("%d",b1.bookNum);

     printf("\nEnter title of book: ");
     getchar();
     gets(b1.title);
     printf("%s",b1.title);

     printf("\nEnter name of the author: ");
     gets(b1.authorName);
     printf("%s",b1.authorName);

     printf("\nEnter the price of book: ");
     scanf("%f",&b1.price);
     printf("%.2f",b1.price);

     printf("\nIs book available or not enter A for yes N for no: ");
     getchar();
     scanf("%c",&b1.available);
     if(b1.available=='A' || b1.available=='a' )
     {
         printf("\nBook is available.");
     }
     else if(b1.available=='N' || b1.available=='n')
     {
         printf("\nBook is not available");
     }
     else
     {
         printf("\nInvalid input.");
     }
 }
