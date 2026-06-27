// Write a program to Create Marksheet Generation System.

#include <stdio.h>

int main()
{
    int roll;                      // Variable to store roll number
    char name[50];                 // Array to store student name
    int hindi, english, maths, science, computer;   // Variables to store subject marks
    int total;                     // Variable to store total marks
    float percentage;              // Variable to store percentage

    // Take student details
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    // Take marks of five subjects
    printf("Enter Hindi Marks: ");
    scanf("%d", &hindi);

    printf("Enter English Marks: ");
    scanf("%d", &english);

    printf("Enter Maths Marks: ");
    scanf("%d", &maths);

    printf("Enter Science Marks: ");
    scanf("%d", &science);

    printf("Enter Computer Marks: ");
    scanf("%d", &computer);

    // Calculate total marks
    total = hindi + english + maths + science + computer;

    // Calculate percentage
    percentage = total / 5.0;

    // Display marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);

    printf("\nSubject\t\tMarks\n");
    printf("Hindi\t\t%d\n", hindi);
    printf("English\t\t%d\n", english);
    printf("Maths\t\t%d\n", maths);
    printf("Science\t\t%d\n", science);
    printf("Computer\t%d\n", computer);

    printf("\nTotal Marks : %d\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    // Check pass or fail
    if (hindi >= 33 && english >= 33 && maths >= 33 && science >= 33 && computer >= 33)
    {
        printf("Result      : Pass\n");
    }
    else
    {
        printf("Result      : Fail\n");
    }

    return 0;      // End of program
}