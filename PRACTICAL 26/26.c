#include <stdio.h>
#include <math.h>
void validate(float x,float y,float z);
void area (float x,float y,float z);

int main()
{
    float a,b,c;
    x:printf("Enter side 1: ");
    scanf("%f",&a);
    printf("Enter side 2: ");
    scanf("%f",&b);
    printf("Enter side 3: ");
    scanf("%f",&c);
    if(a<0||b<0||c<0)
    {
        printf("\nSide cannot be negative.\n");
        goto x;
    }
    validate(a,b,c);
    return 0;
}

void validate(float x,float y,float z)
{
    if((x+y)>z)
    {
        area(x,y,z);
    }
    else
    {
        printf("\nThe given lengths do not form a triangle.");
    }
}

void area (float x,float y,float z)
{
    float s,ar;
    s=(x+y+z)/2;
    ar=sqrt(s*(s-x)*(s-y)*(s-z));
    printf("\nThe area of triangle is %.2f",ar);
}
