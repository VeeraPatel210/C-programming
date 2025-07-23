#include <stdio.h>
int main()
{
    float weight, height, BMI;
    printf("Weight of person in kg");
    scanf("%f",&weight);
    printf("Height of person in meters");
    scanf("%f",&height);
    if (weight>0 && height>0)
    {
        BMI= weight/(height*height);
    }
    else
    {
        printf("Invalid input");
        return 0;
    }
    printf("The BMI of person is %.2f",BMI);
    if (BMI<18.5)
    {
        printf("Your are underweight.");
    }
    else if (BMI>18.5 && BMI<24.9)
    {
        printf("You are normal.");
    }
    else
    {
        printf("You are overweight.");
    }
    return 0;
}
