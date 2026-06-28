// Write a program to Create Library Management System.

#include <stdio.h>
#include <string.h>

int main()
{
    int bookId[100], issued[100];
    char title[100][50], author[100][50];

    int n = 0;          // Number of books
    int choice;
    int i, id, found;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Add a new book

                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", title[n]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", author[n]);

                issued[n] = 0;      // 0 means Available

                n++;

                printf("Book Added Successfully.\n");
                break;

            case 2:
                // Display all books

                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nBook Records:\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook ID : %d", bookId[i]);
                        printf("\nTitle   : %s", title[i]);
                        printf("\nAuthor  : %s", author[i]);

                        if(issued[i] == 0)
                            printf("\nStatus  : Available\n");
                        else
                            printf("\nStatus  : Issued\n");
                    }
                }
                break;

            case 3:
                // Search a book

                printf("Enter Book ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        printf("\nBook Found\n");
                        printf("Book ID : %d\n", bookId[i]);
                        printf("Title   : %s\n", title[i]);
                        printf("Author  : %s\n", author[i]);

                        if(issued[i] == 0)
                            printf("Status  : Available\n");
                        else
                            printf("Status  : Issued\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }

                break;

            case 4:
                // Issue a book

                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        found = 1;

                        if(issued[i] == 0)
                        {
                            issued[i] = 1;
                            printf("Book Issued Successfully.\n");
                        }
                        else
                        {
                            printf("Book is already issued.\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }

                break;

            case 5:
                // Return a book

                printf("Enter Book ID to return: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        found = 1;

                        if(issued[i] == 1)
                        {
                            issued[i] = 0;
                            printf("Book Returned Successfully.\n");
                        }
                        else
                        {
                            printf("Book was not issued.\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.\n");
                }

                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}