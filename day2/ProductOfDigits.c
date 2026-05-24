#include<stdio.h>
int main()
{
    int num,product=1,rem;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num % 10;
        product = product * rem; // product = product * rem; OR product *= rem or product = product * (num % 10);
        num = num/10;
    }
    printf("product of digits in given number is: %d", product);
    return 0;
}