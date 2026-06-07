// Write a program to Check strong number. (A Strong Number is a number whose sum of factorial of its digits is equal to the number itself.)
#include <stdio.h>

int factorial(int n) 
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() 
{
    int num, originalNum, remainder, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) 
    {
        remainder = num % 10;
        sum += factorial(remainder);    // sum = sum + factorial(remainder);
        num /= 10;                  // num = num / 10;
    }

    if (sum == originalNum) 
    {
        printf("%d is a strong number.\n", originalNum);
    }
     else 
    {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}