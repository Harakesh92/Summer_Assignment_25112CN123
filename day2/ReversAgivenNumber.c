#include<stdio.h>
int main()
{
    int num,count=0,rem,reverse=0;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem; // reverse = reverse * 10 + (num % 10);
        num = num/10;
    }
    printf("reverse of the given number is: %d", reverse);
    return 0;
}