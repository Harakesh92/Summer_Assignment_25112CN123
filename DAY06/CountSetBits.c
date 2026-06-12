// Write a program to Count set bits in a number.
#include <stdio.h>
int main() 
{
    int num, count = 0;

    printf("Enter a positive integer: "); 
    scanf("%d", &num);

    while (num > 0) 
    {
        count=count + (num & 1);   //count +=num & 1;   (Increment count if the least significant bit is 1)
        num=num >> 1;                     //num >>= 1;   (Right shift num by 1 to check the next bit)
    }

    printf("Number of set bits: %d\n", count);
    return 0;
}