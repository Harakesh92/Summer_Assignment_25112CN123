/*#include<stdio.h>
int main()
{
    int num,count=0,rem, originalNum;
    printf("enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    
    while(num > 0)
    {
        rem = num % 10;
        count = count * 10 + rem;
        num = num/10;
    }
    if(count == originalNum)
    {
        printf("given number is a palindrome");
    }
    else
    {
        printf("given number is not a palindrome");
    }
    
    return 0;
}*/




#include<stdio.h>

int main()
{
    int num, original, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if(reverse == original)
    {
        printf("Given number is a palindrome");
    }
    else
    {
        printf("Given number is not a palindrome");
    }

    return 0;
}