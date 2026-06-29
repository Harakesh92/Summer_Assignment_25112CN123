// Write a program to Create Inventory Management System.

#include <stdio.h>      // Header file for input and output functions

int main()
{
    // Declare variables
    int itemID[100], quantity[100];
    char itemName[100][50];
    int n, i, searchID;
    int found = 0;

    // Take the number of items from the user
    printf("Enter number of items: ");
    scanf("%d", &n);

    // Take item details from the user
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &itemID[i]);

        printf("Enter Item Name: ");
        scanf("%s", itemName[i]);

        printf("Enter Quantity: ");
        scanf("%d", &quantity[i]);
    }

    // Display all inventory records
    printf("\n========== INVENTORY DETAILS ==========\n");

    printf("ID\tName\tQuantity\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", itemID[i], itemName[i], quantity[i]);
    }

    // Search an item using Item ID
    printf("\nEnter Item ID to Search: ");
    scanf("%d", &searchID);

    // Check whether the item exists or not
    for(i = 0; i < n; i++)
    {
        if(itemID[i] == searchID)
        {
            found = 1;

            printf("\nItem Found!\n");
            printf("Item ID      : %d\n", itemID[i]);
            printf("Item Name    : %s\n", itemName[i]);
            printf("Quantity     : %d\n", quantity[i]);

            break;
        }
    }

    // Display message if item is not found
    if(found == 0)
    {
        printf("Item Not Found.\n");
    }

    // End of the program
    return 0;
}