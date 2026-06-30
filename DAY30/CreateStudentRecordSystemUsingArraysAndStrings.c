// Write a program to Create Student Record System using Arrays and Strings.

#include <stdio.h>      // Header file for input and output functions

int main()
{
    // Declare arrays and variables
    int roll[100], marks[100];
    char name[100][50];
    int n, i, searchRoll;
    int found = 0;

    // Take the number of students from the user
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Take student details from the user
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

    // Display all student records
    printf("\n========== STUDENT RECORDS ==========\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }

    // Search a student by roll number
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    // Check whether the student exists or not
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

    // Display message if student is not found
    if(found == 0)
    {
        printf("Student Record Not Found.\n");
    }

    // End of the program
    return 0;
}