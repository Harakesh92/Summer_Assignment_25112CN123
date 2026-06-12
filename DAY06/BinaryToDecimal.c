// Write a program to Convert binary to decimal.
#include <stdio.h>
#include <math.h>

int main() {
    long long binary, decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * base;        // decimal = decimal + remainder * base;
        base *= 2;                          // base = base * 2;
        binary /= 10;                       // binary = binary / 10;
    }

    printf("Decimal equivalent: %lld\n", decimal);
    return 0;
}
