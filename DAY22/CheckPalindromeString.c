// Write a program to Check palindrome string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 0;
            break;              // loop will be breaked 
        }
    }

    if(flag == 1)                           // if flag == 1 then it is also palindrome string
        printf("String is Palindrome");
    else
        printf("String is Not Palindrome");

    return 0;
}