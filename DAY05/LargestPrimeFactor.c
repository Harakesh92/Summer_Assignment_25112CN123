//Write a program to Find largest prime factor
#include <stdio.h>
int main() {
    long long num, largestFactor = -1;

    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    // Check for number of 2s that divide num
    while (num % 2 == 0) 
    {
        largestFactor = 2;
        num /= 2;      // num = num / 2;
    }

    // num must be odd at this point, so we can skip even numbers
    for (long long i = 3; i * i <= num; i += 2) 
    
    {
        while (num % i == 0) 
        {
            largestFactor = i;
            num /= i;       // num = num / i;   
        }
    }

    // This condition is to check if num is a prime number greater than 2

    if (num > 2) 

    {
        largestFactor = num;
    }

    if (largestFactor != -1) 

    {
        printf("The largest prime factor is: %lld\n", largestFactor);
    }

    else 
    {
        printf("No prime factors found.\n");
    }

    return 0;
}