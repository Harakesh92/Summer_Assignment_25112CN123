//Write a program to Find LCM of two numbers.
#include<stdio.h>
int main()
{
    int num1,num2,i,lcm;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    for ( i = 1; i <= num1*num2; i++)
    {
        if (i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        
    }
    printf("LCM of %d and %d is %d",num1,num2,lcm);
return 0;
}