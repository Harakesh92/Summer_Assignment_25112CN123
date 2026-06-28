// Write a program to Create Contact Management System.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100][50], phone[100][15];
    int n = 0;          // Number of contacts
    int choice;
    int i, found;
    char searchName[50];

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Add a new contact

                printf("Enter Contact Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Phone Number: ");
                scanf("%s", phone[n]);

                n++;

                printf("Contact Added Successfully.\n");
                break;

            case 2:
                // Display all contacts

                if(n == 0)
                {
                    printf("No Contacts Found.\n");
                }
                else
                {
                    printf("\nContact List\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("\nContact %d\n", i + 1);
                        printf("Name  : %s\n", name[i]);
                        printf("Phone : %s\n", phone[i]);
                    }
                }

                break;

            case 3:
                // Search contact by name

                printf("Enter Contact Name to Search: ");
                scanf(" %[^\n]", searchName);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(strcmp(name[i], searchName) == 0)
                    {
                        printf("\nContact Found\n");
                        printf("Name  : %s\n", name[i]);
                        printf("Phone : %s\n", phone[i]);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Contact Not Found.\n");
                }

                break;

            case 4:
                // Exit program

                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}