// Write a program to Write function to find sum of two numbers.
#include <stdio.h>

int findSum(int a, int b)           // function to find sum of two numbers
{
    return a + b;           // sum of a and b is returned
}

int main()
{
    int x, y, sum;          // variable to store the two numbers and the result of sum

    printf("Enter two numbers: ");              // prompt the user to enter two numbers
    scanf("%d %d", &x, &y);         // prompt the user to enter two numbers

    sum = findSum(x, y);            // call the function to find sum of the two numbers

    printf("Sum of %d and %d is %d", x, y, sum);                // print the result

    return 0;
}