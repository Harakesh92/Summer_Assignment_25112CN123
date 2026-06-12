// Write a program to Write function for palindrome. 
#include <stdio.h>

int isPalindrome(int n)         // function to check if a number is palindrome or not
{
    int original = n;           // store the original number to compare later
    int reversed = 0;               // variable to store the reversed number

    while(n > 0)            // loop to reverse the number
    {
        int digit = n % 10;                         // get the last digit of the number
        reversed = reversed * 10 + digit;       // update the reversed number by adding the last digit to the end of the reversed number
        n = n / 10;      // remove the last digit from the original number by dividing it by 10     
    }

    return (original == reversed);          // if the original number is equal to the reversed number, it is a palindrome, otherwise it is not
}

int main()
{
    int num;                    // variable to store the number

    printf("Enter a number: ");         // prompt the user to enter a number
    scanf("%d", &num);                      // call the function to check if the number is palindrome and print the result

    if(isPalindrome(num))               // if the function returns 1, it means the number is a palindrome
        printf("Palindrome Number");        // if the function returns 0, it means the number is not a palindrome
    else
        printf("Not a Palindrome Number");          // if the function returns 0, it means the number is not a palindrome

    return 0;
}