// Write a program to Create Bank Account System.

#include <stdio.h>

int main()
{
    int accountNo;
    char name[50];
    float balance = 0, amount;
    int choice;

    // Create account
    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    do
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Deposit money

                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                balance = balance + amount;

                printf("Amount Deposited Successfully.\n");
                break;

            case 2:
                // Withdraw money

                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance = balance - amount;
                    printf("Amount Withdrawn Successfully.\n");
                }
                else
                {
                    printf("Insufficient Balance.\n");
                }

                break;

            case 3:
                // Display account details

                printf("\nAccount Number : %d\n", accountNo);
                printf("Account Holder : %s\n", name);
                printf("Current Balance : %.2f\n", balance);

                break;

            case 4:
                // Exit the program

                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}