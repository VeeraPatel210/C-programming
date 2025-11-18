#include <stdio.h>
struct details
{
    char teamName[30];
    char sport[15];

    struct coach
    {
        char name[30];
        int age;
        int years;
    }c[5];
}t[10];
int main()
{
    int n,i;
    printf("How many teams data you want to store: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Team Name: ");
        getchar();
        gets(t[i].teamName);

        printf("Enter Sport Type: ");
        gets(t[i].sport);

        // Coach details
        printf("Enter Coach Name: ");
        gets(t[i].c[i].name);

        printf("Enter Coach Age: ");
        scanf("%d", &t[i].c[i].age);

        printf("Enter Coach Experience (years): ");
        scanf("%d", &t[i].c[i].years);

    }
    printf("\nDETAILS:\n\n");
    for(i=0;i<n;i++)
    {
        printf("Team Name: %s\n", t[i].teamName);
        printf("Sport Type: %s\n", t[i].sport);
        printf("Coach Name: %s\n", t[i].c[i].name);
        printf("Coach Age: %d\n", t[i].c[i].age);
        printf("Coach Experience: %d years\n", t[i].c[i].years);
        printf("\n");
    }


    return 0;
}

