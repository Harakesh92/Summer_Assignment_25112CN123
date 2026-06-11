// Write a program to Print reverse pyramid. 
#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)        // Loop to print each row of the reverse star pyramid, starting from n down to 1
    {
        for (j = 1; j <= n - i; j++) // Loop to print spaces before the stars in each row, where the number of spaces increases as the row number decreases
        {
            printf("  ");               // Print two spaces for better visibility of the pattern
        }
        for (j = 1; j <= 2 * i - 1; j++) // Loop to print the asterisks(*) in each row, where the number of asterisks corresponds to the formula 2*i-1 for a pyramid shape
        {
            printf("* ");               // Print an asterisk(*) followed by a space for better visibility of the pattern
        }
        printf("\n");                   // Move to the next line after printing each row of asterisks, ensuring that the next row starts on a new line
    }

    return 0; 
}