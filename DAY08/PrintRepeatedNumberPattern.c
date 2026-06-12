// Write a program to Print repeated-number pattern.
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)    // Loop to print each row
    {
        for (int j = 1; j <= i; j++)    // Loop to print numbers in each row
        {
            printf("%d ", i);   // Print the current row number followed by a space
        }
        printf("\n");   // Move to the next line after printing each row
    }

    return 0;
}