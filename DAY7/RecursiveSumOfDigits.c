// Write a program to Recursive sum of digits. 
#include <stdio.h>

int sumOfDigits(int n) // Function to calculate the sum of digits of a number using recursion
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);      // Return the last digit (n % 10) plus the sum of digits of the remaining number (n / 10)  
}

int main() // Main function to test the sumOfDigits function
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}

