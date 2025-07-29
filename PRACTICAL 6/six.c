#include <stdio.h>
void main()
{
    float temp_cel,temp_fah;
    printf("Enter the temperature in Celsius:");
    scanf("%f",&temp_cel);
    temp_fah=((temp_cel*9)/5)+32;
    printf("\nThe temperature in Fahrenheit is: %f ",temp_fah);
}
