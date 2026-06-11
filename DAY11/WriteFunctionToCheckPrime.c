// Write a program to Write function to check prime. 
#include <stdio.h>

int checkPrime(int n)           // function to check if a number is prime or not
{
    int i;
    if(n <= 1)                          // if n is less than or equal to 1, it is not prime
        return 0;
    for(i = 2; i <= n/2; i++)       // we can also use i <= sqrt(n) for better performance
    {
        if(n % i == 0)          // if n is divisible by any number between 2 and n/2, it is not prime
            return 0;
    }
    return 1;
}

int main()
{
    int num, isPrime;           // variable to store the number and the result of prime check

    printf("Enter a number: ");         // prompt the user to enter a number
    scanf("%d", &num);

    isPrime = checkPrime(num);          // call the function to check if the number is prime

    if(isPrime)                 // if the function returns 1, it means the number is prime
        printf("%d is a prime number.", num);           // if the function returns 0, it means the number is not prime
    else                                                            // if the function returns 0, it means the number is not prime
        printf("%d is not a prime number.", num);               // if the function returns 0, it means the number is not prime

    return 0;
}