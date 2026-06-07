//Write a program to Count digits in a number. 

/*#include<stdio.h>
int main()
{
    int num,count=0;  // OR int num, count = 0, rem;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num>0)
    {                       // rem = num % 10;
        count = count + 1;  // count = count + 1; OR count++;
        num = num/10;
    }
    printf("number of digits is: %d", count);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int num,count=0,rem;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num>0)
    {
        rem = num % 10;
        count = count + 1;
        num = num/10;
    }
    printf("number of digits in %d is: %d", num, count);
    return 0;
}