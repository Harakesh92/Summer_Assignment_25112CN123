// Write a program to Print number pyramid.
#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)        // Loop to print each row of the number pyramid
    {
        for (j = 1; j <= n - i; j++) // Loop to print spaces before the numbers in each row, where the number of spaces decreases as the row number increases
        {
            printf("  ");               // Print two spaces for better visibility of the pattern
        }
        for (j = 1; j <= 2 * i - 1; j++) // Loop to print the numbers in each row, where the number of numbers corresponds to the formula 2*i-1 for a pyramid shape
        {
            printf("%d ", j);           // Print the current number followed by a space for better visibility of the pattern
        }
        printf("\n");                   // Move to the next line after printing each row of numbers, ensuring that the next row starts on a new line
    }

    return 0; 
}




// Write a program to Print reverse number pyramid.
#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)        // Loop to print each row of the reverse number pyramid, starting from n down to 1
    {
        for (j = 1; j <= n - i; j++) // Loop to print spaces before the numbers in each row, where the number of spaces increases as the row number decreases
        {
            printf("  ");               // Print two spaces for better visibility of the pattern
        }
        for (j = 1; j <= 2 * i - 1; j++) // Loop to print the numbers in each row, where the number of numbers corresponds to the formula 2*i-1 for a pyramid shape
        {
            printf("%d ", j);           // Print the current number followed by a space for better visibility of the pattern
        }
        printf("\n");                   // Move to the next line after printing each row of numbers, ensuring that the next row starts on a new line
    }

    return 0; 
}

