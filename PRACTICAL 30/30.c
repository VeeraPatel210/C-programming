#include <stdio.h>
int main()
{
    int n, i, j;
    float a[50], temp;
    float *ptr = a;

    printf("Enter number of items: ");
    scanf("%d", &n);
    if(n==0)
    {
        printf("No items to sort");
    }
    else
    {
        printf("Enter the prices:\n");
        for (i = 0; i < n; i++)
        {
            scanf("%f", ptr + i);
        }

        // Sorting
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (*(ptr + j) < *(ptr + i))
                {
                    temp = *(ptr + i);
                    *(ptr + i) = *(ptr + j);
                    *(ptr + j) = temp;
                }
            }
        }
        printf("\nSorted prices:\n");
        for (i = 0; i < n; i++)
        {
            printf("%.2f ", *(ptr + i));
        }
    }

    return 0;
}
