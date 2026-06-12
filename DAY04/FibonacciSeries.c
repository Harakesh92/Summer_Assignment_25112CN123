// Write a program to Generate Fibonacci series.
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;  // Initialize the first two terms of the Fibonacci series or int n, a=0, b=1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");  // Print the Fibonacci series up to n terms

    for (int i = 1; i <= n; ++i) {
        printf("%d ", a);      // Print the current term
        c = a + b;     // Calculate the next term by adding the previous two terms or c=a+b;
        a = b;                // a=b;
        b = c;          // b=c;
    }

    return 0;
}





/*#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;  // Initialize the first two terms of the Fibonacci series or int n, a=0, b=1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");  // Print the Fibonacci series up to n terms

    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);      // Print the current term
        nextTerm = t1 + t2;     // Calculate the next term by adding the previous two terms or c=a+b;
        t1 = t2;                // a=b;
        t2 = nextTerm;          // b=c;
    }

    return 0;
}*/
