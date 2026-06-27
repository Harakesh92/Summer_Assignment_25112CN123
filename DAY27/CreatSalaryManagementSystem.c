// Write a program to Create Salary Management System.

#include <stdio.h>

int main()
{
    int id[100];                  // Array to store employee IDs
    char name[100][50];           // 2D array to store employee names
    float salary[100];            // Array to store employee salaries

    int n = 0;                    // Variable to count total employees
    int choice, i, searchId;      // Variables for menu, loop and search
    int found = 0;                // Variable to check if employee is found

    do
    {
        // Display menu
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display All Salaries\n");
        printf("3. Search Salary by Employee ID\n");
        printf("4. Exit\n");

        // Take user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform operation according to user's choice
        switch (choice)
        {
            case 1:
                // Take employee ID
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);

                // Take employee name
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", name[n]);

                // Take employee salary
                printf("Enter Employee Salary: ");
                scanf("%f", &salary[n]);

                // Increase employee count
                n++;

                // Display success message
                printf("Salary Record Added Successfully.\n");
                break;

            case 2:
                // Check if records are available
                if (n == 0)
                {
                    printf("No Salary Records Found.\n");
                }
                else
                {
                    // Display all salary records
                    printf("\nSalary Records:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("Employee ID   : %d\n", id[i]);
                        printf("Employee Name : %s\n", name[i]);
                        printf("Salary        : %.2f\n", salary[i]);
                    }
                }
                break;

            case 3:
                // Check if records are available
                if (n == 0)
                {
                    printf("No Salary Records Available.\n");
                }
                else
                {
                    // Take employee ID to search
                    printf("Enter Employee ID to Search: ");
                    scanf("%d", &searchId);

                    // Assume employee is not found
                    found = 0;

                    // Search employee by ID
                    for (i = 0; i < n; i++)
                    {
                        if (id[i] == searchId)
                        {
                            // Display salary details
                            printf("\nEmployee Found\n");
                            printf("Employee ID   : %d\n", id[i]);
                            printf("Employee Name : %s\n", name[i]);
                            printf("Salary        : %.2f\n", salary[i]);

                            found = 1;
                            break;
                        }
                    }

                    // If employee is not found
                    if (found == 0)
                    {
                        printf("Salary Record Not Found.\n");
                    }
                }
                break;

            case 4:
                // Exit message
                printf("Thank You!\n");
                break;

            default:
                // Invalid choice
                printf("Invalid Choice! Please Try Again.\n");
        }

    } while (choice != 4);    // Repeat menu until Exit

    return 0;    // End of program
}