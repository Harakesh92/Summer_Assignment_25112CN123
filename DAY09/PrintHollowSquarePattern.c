// Write a program to Print hollow square pattern. 
#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)        // Loop to print each row of the hollow square pattern
    {
        for (j = 1; j <= n; j++)    // Loop to print the asterisks(*) in each row, where the number of asterisks corresponds to the current row number
        {
            if (i == 1 || i == n || j == 1 || j == n)   // Check if the current position is on the border of the square
            {
                printf("* ");               // Print an asterisk(*) followed by a space for better visibility of the pattern
            }
            else
            {
                printf("  ");               // Print two spaces for the hollow part of the square
            }
        }
        printf("\n");                   // Move to the next line after printing each row of asterisks, ensuring that the next row starts on a new line
    }

    return 0; 
}