// Write a program to Create Mini Library System.

#include <stdio.h>      // Header file for input and output functions

int main()
{
    // Declare arrays and variables
    int bookID[100];
    char bookName[100][50];
    int n, i, searchID;
    int found = 0;

    // Take the number of books from the user
    printf("Enter number of books: ");
    scanf("%d", &n);

    // Take book details from the user
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookID[i]);

        printf("Enter Book Name: ");
        scanf("%s", bookName[i]);
    }

    // Display all book records
    printf("\n========== LIBRARY BOOK RECORDS ==========\n");
    printf("Book ID\tBook Name\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\n", bookID[i], bookName[i]);
    }

    // Search a book using Book ID
    printf("\nEnter Book ID to Search: ");
    scanf("%d", &searchID);

    // Check whether the book exists or not
    for(i = 0; i < n; i++)
    {
        if(bookID[i] == searchID)
        {
            found = 1;

            printf("\nBook Found!\n");
            printf("Book ID   : %d\n", bookID[i]);
            printf("Book Name : %s\n", bookName[i]);

            break;
        }
    }

    // Display message if the book is not found
    if(found == 0)
    {
        printf("Book Not Found.\n");
    }

    // End of the program
    return 0;
}