// Write a program to Convert decimal to binary. 
#include <stdio.h>
int main() 
{
    int num, binaryNum[32], i = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        binaryNum[i] = num % 2;   // Store the remainder (0 or 1)
        num /= 2;         // num=num/2;        // Update num to num / 2
        i++;                //i=i+1;             // Increment index for the next bit
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}
