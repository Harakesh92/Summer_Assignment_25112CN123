// Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>
int main() {
    int firstNumber, lastNumber, num, originalNum, remainder, digits = 0, result = 0;

    printf("Enter the first and last numbers in range of Armstrong numbers: ");
    scanf("%d %d", &firstNumber, &lastNumber);

    printf("Armstrong numbers between %d and %d are: ", firstNumber, lastNumber);
    for (num = firstNumber; num <= lastNumber; num++) {
        originalNum = num;
        digits = 0;
        result = 0;

        while (originalNum != 0) {
            digits = digits + 1;  // digits++;
            originalNum = originalNum / 10;   // originalNum /= 10; 
        }

        originalNum = num;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result = result + pow(remainder, digits);  // result += pow(remainder, digits);
            originalNum = originalNum / 10; // originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
} 
    
   
    
/*
#include <stdio.h>
#include <math.h>
int main() {
    int lower, upper, num, originalNum, remainder, digits = 0, result = 0;

    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (num = lower; num <= upper; num++) {
        originalNum = num;
        digits = 0;
        result = 0;

        while (originalNum != 0) {
            digits = digits + 1;    // digits++ ;
            originalNum = originalNum / 10;   // originalNum /= 10; 
        }

        originalNum = num;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result = result + pow(remainder, digits);  // result += pow(remainder, digits);
            originalNum = originalNum / 10; // originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
} 
    */
