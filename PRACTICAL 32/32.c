#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char word[100];

    fp = fopen("Demo.txt", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 0;
    }

    while (fscanf(fp, "%s", word) != EOF)
        {
            int i = 0, j = strlen(word) - 1;
            while (i < j)
            {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
                i++;
                j--;
            }
            printf("%s ", word);
        }

    fclose(fp);
    return 0;
}

