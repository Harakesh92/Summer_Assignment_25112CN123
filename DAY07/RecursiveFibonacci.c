// Write a program to Recursive Fibonacci.
#include <stdio.h>

int fibonacci(int n)        // Function to calculate the nth Fibonacci number using recursion
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);     // Return the sum of the two preceding Fibonacci numbers (fibonacci of (n-1) + fibonacci of (n-2))
}

int main()      // Main function to test the fibonacci function
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci of %d is %d\n", num, fibonacci(num));
    return 0;
}

/*
#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
*/