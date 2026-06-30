// Write a program to Create Mini Employee Management System.

#include <stdio.h>      // Header file for input and output functions

int main()
{
    // Declare arrays and variables
    int empID[100], salary[100];
    char empName[100][50];
    int n, i, searchID;
    int found = 0;

    // Take the number of employees from the user
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Take employee details from the user
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empID[i]);

        printf("Enter Employee Name: ");
        scanf("%s", empName[i]);

        printf("Enter Salary: ");
        scanf("%d", &salary[i]);
    }

    // Display all employee records
    printf("\n========== EMPLOYEE RECORDS ==========\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", empID[i], empName[i], salary[i]);
    }

    // Search an employee by Employee ID
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &searchID);

    // Check whether the employee exists or not
    for(i = 0; i < n; i++)
    {
        if(empID[i] == searchID)
        {
            found = 1;

            printf("\nEmployee Found!\n");
            printf("Employee ID   : %d\n", empID[i]);
            printf("Employee Name : %s\n", empName[i]);
            printf("Salary        : %d\n", salary[i]);

            break;
        }
    }

    // Display message if employee is not found
    if(found == 0)
    {
        printf("Employee Not Found.\n");
    }

    // End of the program
    return 0;
}