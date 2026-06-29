// Write a program to Create Menu-Driven String Operations System.

#include <stdio.h>      // Header file for input and output functions
#include <string.h>     // Header file for string functions

int main()
{
    // Declare variables
    char str[100];
    int choice, length, i;

    // Take string input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Repeat the menu until the user chooses Exit
    do
    {
        // Display the menu
        printf("\n====== MENU-DRIVEN STRING OPERATIONS ======\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Exit\n");

        // Take user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation according to user's choice
        switch(choice)
        {
            // Display the string
            case 1:
                printf("String = %s\n", str);
                break;

            // Find the length of the string
            case 2:
                length = strlen(str);
                printf("Length = %d\n", length);
                break;

            // Reverse the string
            case 3:
                length = strlen(str);

                printf("Reverse String = ");

                for(i = length - 1; i >= 0; i--)
                {
                    printf("%c", str[i]);
                }

                printf("\n");
                break;

            // Convert lowercase letters to uppercase
            case 4:
                for(i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                    {
                        str[i] = str[i] - 32;
                    }
                }

                printf("Uppercase String = %s\n", str);
                break;

            // Exit the program
            case 5:
                printf("Thank You! Program Closed.\n");
                break;

            // Execute if the user enters an invalid choice
            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 5);   // Continue until user selects Exit

    // End of the program
    return 0;
}