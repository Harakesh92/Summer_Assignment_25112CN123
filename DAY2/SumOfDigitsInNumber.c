#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num % 10;
        sum = sum + rem;  // sum = sum + rem; OR sum += rem or sum = sum + (num % 10);
        num = num/10;
    }
    printf("sum of digits in given number is: %d", sum);
    return 0;
}