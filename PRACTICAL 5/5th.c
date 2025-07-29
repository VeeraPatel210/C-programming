//to find number of illiterate men and women by using given data
#include <stdio.h>
void main()
{
    float women,men,literate_men,literate_women,ill_men,ill_women;
    int population=1441981744;
    float pr_women=48.4;
    float pr_literate_men=80.95;
    float pr_literate_women=62.84;
    women=(pr_women*population)/100;
    men=population-women;

    literate_men=(pr_literate_men*men)/100;
    literate_women=(pr_literate_women*women)/100;

    ill_men=men-literate_men;
    ill_women= women- literate_women;

    printf("The number of illiterate men is: %f",ill_men);
    printf("\n8The number of illiterate women is: %f",ill_women);

}
