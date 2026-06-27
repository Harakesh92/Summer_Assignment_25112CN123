// Write a program to Create Student Record Management System.

#include <stdio.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];
    int n = 0;          // Number of students
    int choice, i, searchRoll;
    int found = 0;

    do
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // Add a new student record
                printf("Enter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Student Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;   // Increase student count

                printf("Student Record Added Successfully.\n");
                break;

            case 2:
                // Display all student records
                if (n == 0)
                {
                    printf("No Records Found.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");

                    for (i = 0; i < n; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %d\n", marks[i]);
                    }
                }
                break;

            case 3:
                // Search student by roll number
                if (n == 0)
                {
                    printf("No Records Available.\n");
                }
                else
                {
                    printf("Enter Roll Number to Search: ");
                    scanf("%d", &searchRoll);

                    found = 0;

                    for (i = 0; i < n; i++)
                    {
                        if (roll[i] == searchRoll)
                        {
                            printf("\nStudent Found\n");
                            printf("Roll Number : %d\n", roll[i]);
                            printf("Name        : %s\n", name[i]);
                            printf("Marks       : %d\n", marks[i]);

                            found = 1;
                            break;
                        }
                    }

                    if (found == 0)
                    {
                        printf("Student Record Not Found.\n");
                    }
                }
                break;

            case 4:
                // Exit the program
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice! Please Try Again.\n");
        }

    } while (choice != 4);

    return 0;
}