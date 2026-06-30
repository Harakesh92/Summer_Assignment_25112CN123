// Write a program to Develop Complete Mini Project using Arrays, Strings and Functions.

#include <stdio.h>      // Header file for input and output functions

// Declare global arrays and variables
int roll[100], marks[100], n;
char name[100][50];

// Function to add student records
void addStudent()
{
    int i;

    // Take number of students from the user
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Take student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

// Function to display all student records
void displayStudent()
{
    int i;

    printf("\n========== STUDENT RECORDS ==========\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

// Function to search a student by roll number
void searchStudent()
{
    int searchRoll, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == searchRoll)
        {
            found = 1;

            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %d\n", marks[i]);

            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}

// Main function
int main()
{
    int choice;

    // Repeat menu until user selects Exit
    do
    {
        printf("\n========== STUDENT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // Call addStudent function
            case 1:
                addStudent();
                break;

            // Call displayStudent function
            case 2:
                displayStudent();
                break;

            // Call searchStudent function
            case 3:
                searchStudent();
                break;

            // Exit the program
            case 4:
                printf("Thank You! Program Closed.\n");
                break;

            // Display message for invalid choice
            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 4);

    // End of the program
    return 0;
}