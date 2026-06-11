// Write a program to Write function to find factorial. 
#include <stdio.h>

int findFactorial(int n)            // function to find factorial of a number
{
    if(n == 0)          // if n is 0, factorial is 1
        return 1;           // if n is less than 0, factorial is not defined
    else
        return n * findFactorial(n-1);          // factorial of n is n multiplied by factorial of (n-1)
}

int main()
{
    int num, factorial;                 // variable to store the number and the result of factorial

    printf("Enter a number: ");             // prompt the user to enter a number
    scanf("%d", &num);

    factorial = findFactorial(num);         // call the function to find factorial of the number    

    printf("Factorial of %d is %d", num, factorial);                    // print the result

    return 0;
}