// Write a program to Print multiplication table of a given number.
 
/*#include<stdio.h>
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
}*/

  //OR

// Write a program to Print multiplication table of a given number.
#include<stdio.h>
int main ()
{
    int num, sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    for(int i = num; i <= num * 10; i=i+num)
    {
        printf("%d\n", i); // OR printf("%d\n", num*i);
    }    
    return 0;
}
