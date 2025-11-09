#include <stdio.h>
#include <string.h>
void displayBooks(void);
int getTotalBooks(void);
void borrowBook(char bookName[]);
float calculateFine(int daysLate);
char books[5][50] = {"Palace of Illusions","Atomic Habits","The Art of Laziness","The New Girl","Rich Dad Poor Dad"};

int main()
{
    int ch;
    printf("\n--- Menu ---\n");
    printf("1. Display books\n");
    printf("2. Get total books\n");
    printf("3. Borrow a book\n");
    printf("4. Calculate fine\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    getchar(); // clear newline after number input

    switch(ch)
    {
        case 1:
            displayBooks();
            break;

        case 2:
        {
            int z = getTotalBooks();
            printf("\nTotal number of books: %d\n", z);
            break;
        }

        case 3:
        {
            char name[50];
            printf("\nEnter the name of the book you want to borrow: ");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = 0;
            borrowBook(name);
            break;
        }

        case 4:
        {
            int days;
            float p;
            printf("\nHow many days late: ");
            scanf("%d", &days);
            p = calculateFine(days);
            printf("\nTotal fine to pay is: %.2f\n", p);
            break;
        }

        case 5:
            printf("\nTHANK YOU!!\n");
            break;

        default:
            printf("\nInvalid choice entered.\n");
    }

    return 0;
}

// Function to display all books
void displayBooks(void)
{
    printf("\nList of Available Books:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d) %s\n", i + 1, books[i]);
    }
}

// Function to count books
int getTotalBooks(void)
{
    return 5;
}

// Function to borrow a book
void borrowBook(char bookName[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(books[i], bookName) == 0)
        {
            printf("Book '%s' is available. You can borrow it.\n", bookName);
            return;
        }
    }
    printf("Sorry, the book '%s' is not found in the library.\n", bookName);
}

// Function to calculate fine
float calculateFine(int daysLate)
{
    return 2.5 * daysLate; // Rs. 2.5 per day
}



