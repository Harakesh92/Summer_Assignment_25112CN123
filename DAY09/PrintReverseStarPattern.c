// Write a program to Print reverse star pattern.

#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)        // Loop to print each row of the reverse star pattern
    {
        for (j = 1; j <= i; j++)    // Loop to print the asterisks(*) in each row, where the number of asterisks corresponds to the current row number
        {
            printf("* ");               // Print an asterisk(*) followed by a space for better visibility of the pattern
        }
        printf("\n");                   // Move to the next line after printing each row of asterisks, ensuring that the next row starts on a new line
    }

    return 0; 
}

//OR

// Write a program to Print reverse star pattern.
#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)        // Loop to print each row of the reverse star pattern
    {
        for (j = n; j >= i; j--)    // Loop to print the asterisks(*) in each row, where the number of asterisks corresponds to the current row number
        {
            printf("* ");               // Print an asterisk(*) followed by a space for better visibility of the pattern
        }
        printf("\n");                   // Move to the next line after printing each row of asterisks, ensuring that the next row starts on a new line
    }

    return 0; 
}


