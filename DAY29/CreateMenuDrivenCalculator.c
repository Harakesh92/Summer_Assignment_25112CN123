// Write a program to Create Menu-Driven Calculator.

#include <stdio.h>     // Header file for input and output functions

int main()
{
    // Declare variables
    int choice;
    float num1, num2, result;

    // Repeat the menu until the user chooses Exit
    do
    {
        // Display the calculator menu
        printf("\n========== MENU-DRIVEN CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        // Take menu choice from the user
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Take two numbers only for arithmetic operations
        if (choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");
            scanf("%f", &num1);

            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        // Perform operation based on user's choice
        switch (choice)
        {
            // Addition
            case 1:
                result = num1 + num2;
                printf("Addition = %.2f\n", result);
                break;

            // Subtraction
            case 2:
                result = num1 - num2;
                printf("Subtraction = %.2f\n", result);
                break;

            // Multiplication
            case 3:
                result = num1 * num2;
                printf("Multiplication = %.2f\n", result);
                break;

            // Division
            case 4:
                // Check if second number is not zero
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("Division = %.2f\n", result);
                }
                else
                {
                    printf("Division by zero is not possible.\n");
                }
                break;

            // Exit the program
            case 5:
                printf("Thank You! Calculator Closed.\n");
                break;

            // Execute if the user enters an invalid choice
            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while (choice != 5);   // Continue until user selects Exit

    // End of the program
    return 0;
}