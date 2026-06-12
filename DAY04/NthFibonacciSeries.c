//Write a program to Find nth Fibonacci term.
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    printf("Enter the position of the Fibonacci term you want to find: ");
    scanf("%d", &n);
    if (n == 1)         // for (int i = 1; i <= n; ++i) or first term of the Fibonacci series is 0 and second term is 1, so if n==1 then print a and if n==2 then print b
    {
        printf("The %dth Fibonacci term is: %d\n", n, a);    
    } 
    else if (n == 2) // became the second term of the Fibonacci series is 1, so if n==2 then print b
    {
        printf("The %dth Fibonacci term is: %d\n", n, b);
    } else 
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %dth Fibonacci term is: %d\n", n, b);
    }
    return 0;
}

