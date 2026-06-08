// Write a program to Recursive factorial. 
#include <stdio.h>
int factorial(int n) // Function to calculate factorial of a number using recursion
{
    if (n == 0)     // Base case: factorial of 0 is 1
        return 1;
    else
        return n * factorial(n - 1);        // Recursive call to calculate factorial of n (n * factorial of (n-1))
}

int main()      // Main function to test the factorial function
{
    int num;
    printf("Enter a number: ");     
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}