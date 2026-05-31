//Write a program to Check whether a number is prime

#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("enter a number:");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("Not a prime number:");
    }
    else
    {
    for (int i = 2; i <num/2 ; i++)
    {
        if (num%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    printf("prime number");
    else
    printf("not a prime number");
    }
return 0;
}
