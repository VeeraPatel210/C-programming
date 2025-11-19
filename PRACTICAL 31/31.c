#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *summary;
    int size1, size2;

    printf("Enter initial size: ");
    scanf("%d", &size1);
    getchar();
    summary = (char *)calloc(size1, sizeof(char));
    printf("Enter initial summary: ");
    fgets(summary, size1, stdin);
    printf("\nInitial Summary: %s\n", summary);

    printf("Enter new size to expand: ");
    scanf("%d", &size2);
    getchar();
    summary = (char *)realloc(summary, size2 * sizeof(char));
    printf("Enter updated summary: ");
    fgets(summary, size2, stdin);
    printf("\nUpdated Summary: %s\n", summary);

    free(summary);
    return 0;
}

