#include <stdio.h>
void main()
{
    int ch;
    float val;
    printf("1)Convert from Fahrenheit to Celsius");
    printf("\n2)Convert from Celsius to Fahrenheit");
    printf("\n3)Convert from Fahrenheit to Kelvin");
    printf("\n4)Convert from Celsius to Kelvin");
    printf("\n5)Convert from Kelvin to Celsius");
    printf("\n6)Convert from Kelvin to Fahrenheit");
    printf("\nENTER YOUR CHOICE");
    scanf("%d",&ch);
    printf("\nENTER THE VALUE");
    scanf("%f",&val);
    switch(ch)
    {
        case 1:
            {
              val=(val-32)*5/9;
              printf("\nThe temperature in Celsius is: %f",val);
              break;
            }
        case 2:
            {
              val=(val*9/5)+32;
              printf("\nThe temperature in Fahrenheit is: %f",val);
              break;
            }
        case 3:
            {
              val=(val - 32) * 5/9 + 273.15;
              printf("\nThe temperature in Kelvin is: %f",val);
              break;
            }
        case 4:
            {
              val=val + 273.15;
              printf("\nThe temperature in Kelvin is: %f",val);
              break;
            }
        case 5:
            {
              val=val - 273.15;
              printf("\nThe temperature in Celsius is: %f",val);
              break;
            }
        case 6:
            {
              val=(val - 273.15) * 9/5 + 32;
              printf("\nThe temperature in Fahrenheit is: %f",val);
              break;
            }
        default:
            printf("Invalid choice entered");
    }
}
