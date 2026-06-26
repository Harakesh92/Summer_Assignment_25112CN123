// Write a program to Create Quiz Application.

#include <stdio.h>      // Header file for input and output

int main()
{
    int answer;         // Variable to store user's answer
    int score = 0;      // Variable to store total score

    printf("===== Quiz Application =====\n");    // Display title

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Jaipur\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)        // Check correct answer
    {
        score++;            // Increase score
    }

    // Question 2
    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n2. 7\n3. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)        // Check correct answer
    {
        score++;            // Increase score
    }

    // Question 3
    printf("\n3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. Bill Gates\n3. James Gosling\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)        // Check correct answer
    {
        score++;            // Increase score
    }

    printf("\nYour Score = %d out of 3\n", score);    // Display final score

    return 0;               // End the program
}