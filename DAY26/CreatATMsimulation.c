// Write a program to Create ATM Simulation.

#include <stdio.h>      // Header file for input and output

int main()
{
    int choice;         // Variable to store user's choice
    float balance = 10000;   // Initial account balance
    float amount;       // Variable to store deposit or withdrawal amount

    printf("===== ATM MENU =====\n");      // Display ATM menu
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");

    printf("Enter your choice: ");         // Ask the user to choose an option
    scanf("%d", &choice);                  // Read the choice

    if (choice == 1)                       // Check Balance
    {
        printf("Your Balance = %.2f\n", balance);
    }
    else if (choice == 2)                  // Deposit Money
    {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);

        balance = balance + amount;        // Add amount to balance

        printf("Deposit Successful.\n");
        printf("Current Balance = %.2f\n", balance);
    }
    else if (choice == 3)                  // Withdraw Money
    {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        if (amount <= balance)             // Check sufficient balance
        {
            balance = balance - amount;    // Deduct amount

            printf("Withdrawal Successful.\n");
            printf("Current Balance = %.2f\n", balance);
        }
        else
        {
            printf("Insufficient Balance.\n");   // Display error message
        }
    }
    else                                   // Invalid choice
    {
        printf("Invalid Choice.\n");
    }

    return 0;                              // End the program
}