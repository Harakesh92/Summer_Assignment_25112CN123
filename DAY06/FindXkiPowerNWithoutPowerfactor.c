// Write a program to Find x^n without pow().
#include <stdio.h>
int main()
{
    double x, result = 1.0;     
    int n;

    printf("Enter a base (x): ");
    scanf("%lf", &x);

    printf("Enter an exponent (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
       result = result * x;         // result *= x;   it work as power of x^n without using pow() function
    }

    printf("%0.2lf^%d = %0.2lf\n", x, n, result);       // Print the result with 2 decimal places
    return 0;
}