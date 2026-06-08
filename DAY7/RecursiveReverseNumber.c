// Write a program to Recursive reverse number.
#include <stdio.h>

int reverse(int n, int rev)     // Function to reverse a number using recursion
{
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);      // Recursive call to reverse the number (n / 10) and build the reversed number (rev * 10 + n % 10)
}

int main()      // Main function to test the reverse function
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d\n", reverse(num, 0));

    return 0;
}

/*
#include <stdio.h>
int reverseNumber(int n) 
{
    if (n == 0)
        return 0;
    else
        return (n % 10) * pow(10, (int)log10(n)) + reverseNumber(n / 10);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverseNumber(num));
    return 0;
}*/




// Write a program to Recursive reverse number.
/*#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d\n", reverse(num, 0));

    return 0;
}
*/
