// Write a program to Write function to find maximum. 
#include <stdio.h>

int findMaximum(int a, int b)       // function to find maximum of two numbers
{
    return (a > b) ? a : b;         // if a is greater than b, return a, otherwise return b
}

int main()
{
    int x, y, max;          // variable to store the two numbers and the result of maximum

    printf("Enter two numbers: ");          //  prompt the user to enter two numbers
    scanf("%d %d", &x, &y);

    max = findMaximum(x, y);                // call the function to find maximum of the two numbers

    printf("Maximum of %d and %d is %d", x, y, max);        // print the result

    return 0;
}