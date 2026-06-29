// Write a program to Create Menu-Driven Array Operations System.

#include <stdio.h>     // Header file for input and output functions

int main()
{
    // Declare variables
    int arr[100], n, i, choice;
    int sum = 0, largest, smallest;

    // Take the size of the array from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Take array elements from the user
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Repeat the menu until the user chooses Exit
    do
    {
        // Display the menu
        printf("\n====== MENU-DRIVEN ARRAY OPERATIONS ======\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Exit\n");

        // Take user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation according to user's choice
        switch(choice)
        {
            // Display all array elements
            case 1:
                printf("Array Elements are: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            // Calculate the sum of array elements
            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum = sum + arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            // Find the largest element
            case 3:
                largest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                    {
                        largest = arr[i];
                    }
                }
                printf("Largest Element = %d\n", largest);
                break;

            // Find the smallest element
            case 4:
                smallest = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < smallest)
                    {
                        smallest = arr[i];
                    }
                }
                printf("Smallest Element = %d\n", smallest);
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