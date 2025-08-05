#include <stdio.h>
void main()
{
    float marks;
    printf("Enter marks out of 100\n");
    scanf("%f",&marks);
    (marks>=90)?printf("GRADE A, GPA:4.0")
               :(marks>=80)?printf("GRADE B, GPA:3.0")
               :(marks>=70)?printf("GRADE C, GPA:2.0")
               :(marks>=60)? printf("GRADE D, GPA:1.0")
               :printf("FAIL");
}
