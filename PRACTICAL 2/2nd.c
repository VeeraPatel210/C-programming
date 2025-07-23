//to find area and perimeter of a park of given measurements
#include <stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    length=70;
    breadth=90;
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("The area of park is %d",area);
    printf("\nThe perimeter of park is %d",perimeter);
    return 0;
}
