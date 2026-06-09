// Write a program to Print reverse number triangle. 
#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)        // Loop to print each row of the reverse number triangle
    {
        for (j = 1; j <= i; j++)    // Loop to print the numbers in each row, where the number of numbers corresponds to the current row number
        {
            printf("%d ", j);           // Print the current row number followed by a space for better visibility of the pattern
        }
        printf("\n");                   // Move to the next line after printing each row of numbers, ensuring that the next row starts on a new line
    }

    return 0; 
}


//OR

// Write a program to Print repeated reverse number triangle. 
#include <stdio.h>

int main() 
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)        // Loop to print each row of the reverse number triangle
    {
        for (j = 1; j <= i; j++)    // Loop to print the numbers in each row, where the number of numbers corresponds to the current row number
        {
            printf("%d ", i);           // Print the current row number followed by a space for better visibility of the pattern
        }
        printf("\n");                   // Move to the next line after printing each row of numbers, ensuring that the next row starts on a new line
    }

    return 0; 
}

