// Write a program to Create Voting Eligibility System.

#include <stdio.h>      // Header file for input and output

int main()
{
    int age;            // Variable to store the age

    printf("Enter your age: ");      // Ask the user to enter age
    scanf("%d", &age);               // Read the age

    if (age >= 18)                   // Check if age is 18 or more
    {
        printf("You are eligible to vote.\n");   // Display eligible message
    }
    else                             // If age is less than 18
    {
        printf("You are not eligible to vote.\n");   // Display not eligible message
    }

    return 0;                        // End the program
}