// Write a program to Write function for Fibonacci. 
#include <stdio.h>
int fibonacci(int n)          // function to calculate the nth Fibonacci number
{
    if(n <= 0)              // if n is less than or equal to 0, return 0
        return 0;
    else if(n == 1)         // if n is 1, return 1
        return 1;
    else                    // for n greater than 1, return the sum of the two preceding Fibonacci numbers
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;                      // variable to store the position of the Fibonacci number

    printf("Enter the position of the Fibonacci number: ");         // prompt the user to enter the position of the Fibonacci number
    scanf("%d", &n);                      // call the function to calculate the nth Fibonacci number and print the result

    printf("The %dth Fibonacci number is: %d", n, fibonacci(n));        // print the nth Fibonacci number

    return 0;
}
