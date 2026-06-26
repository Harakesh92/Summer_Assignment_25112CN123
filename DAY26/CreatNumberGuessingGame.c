// Write a program to Create Number Guessing Game.

#include <stdio.h>      // Header file for input and output

int main()
{
    int number;         // Variable to store the secret number
    int guess;          // Variable to store the guessed number

    printf("Enter the secret number: ");                // Ask the user to enter the secret number
    scanf("%d", &number);                           // Read the secret number

    printf("Guess the Number Game\n");          // Display game title

    while (1)                                    // Repeat until the correct guess
    {
        printf("Enter your guess: ");               // Ask the user to guess the number
        scanf("%d", &guess);                 // Read the guessed number

        if (guess == number)               // Check if the guess is correct
        {
            printf("Congratulations! You guessed the correct number.\n");   // Correct guess
            break;                                              // Exit the loop
        }   
        else if (guess > number)                                 // Check if the guess is greater
        {
            printf("Your guess is too high.\n");                       // Display message
        }
        else                                             // Guess is smaller
        {
            printf("Your guess is too low.\n");             // Display message
        }
    }

    return 0;                              // End the program
}


/*

// Write a program to Create Number Guessing Game.

#include <stdio.h>          // Header file for input and output functions

int main()
{
    int number = 25;        // Store the secret number
    int guess;              // Variable to store the user's guess

    printf("Guess the Number Game\n");     // Display game title

    while (1)               // Run the loop until the correct number is guessed
    {
        printf("Enter your guess: ");      // Ask the user to enter a number
        scanf("%d", &guess);               // Read the guessed number

        if (guess == number)               // Check if the guess is correct
        {
            printf("You guessed the correct number.\n");   // Display success message
            break;                         // Exit the loop
        }
        else if (guess > number)           // Check if the guess is greater than the secret number
        {
            printf("Your guess is too high.\n");   // Tell the user the guess is too high
        }
        else                               // If the guess is smaller than the secret number
        {
            printf("Your guess is too low.\n");    // Tell the user the guess is too low
        }
    }

    return 0;              // End the program successfully
}
    */