#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    for(int i = 1; i <= 10; ++i)
    {
        sum = num * i;
        printf("%d\n", sum);
    }    
    return 0;
}