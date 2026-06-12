// Write a program to Write function for Armstrong.
#include <stdio.h>
int isArmstrong(int n)          // function to check if a number is an Armstrong number or not
{
    int original = n;           // store the original number to compare later
    int sum = 0;               // variable to store the sum of the cubes of the digits

    while(n > 0)            // loop to calculate the sum of the cubes of the digits
    {
        int digit = n % 10;                         // get the last digit of the number
        sum += digit * digit * digit;       // add the cube of the last digit to the sum
        n = n / 10;      // remove the last digit from the original number by dividing it by 10     
    }

    return (original == sum);          // if the original number is equal to the sum, it is an Armstrong number, otherwise it is not
}

int main()
{
    int num;                    // variable to store the number

    printf("Enter a number: ");         // prompt the user to enter a number
    scanf("%d", &num);                      // call the function to check if the number is an Armstrong number and print the result

    if(isArmstrong(num))               // if the function returns 1, it means the number is an Armstrong number
        printf("Armstrong Number");        // if the function returns 0, it means the number is not an Armstrong number
    else
        printf("Not an Armstrong Number");          // if the function returns 0, it means the number is not an Armstrong number

    return 0;
}




