// Write a program to Write function for perfect number. 
#include <stdio.h>
int isPerfect(int n)           // function to check if a number is a perfect number or not
{
    int sum = 0;               // variable to store the sum of the proper divisors

    for(int i = 1; i < n; i++)        // loop to calculate the sum of the proper divisors
    {
        if(n % i == 0)          // if i is a proper divisor of n, add it to the sum
            sum += i;
    }

    return (sum == n);          // if the sum of the proper divisors is equal to n, it is a perfect number, otherwise it is not
}

int main()
{
    int num;                    // variable to store the number

    printf("Enter a number: ");         // prompt the user to enter a number
    scanf("%d", &num);                      // call the function to check if the number is a perfect number and print the result

    if(isPerfect(num))               // if the function returns 1, it means the number is a perfect number
        printf("Perfect Number");        // if the function returns 0, it means the number is not a perfect number
    else
        printf("Not a Perfect Number");          // if the function returns 0, it means the number is not a perfect number

    return 0;
}
