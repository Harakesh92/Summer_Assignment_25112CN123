// Write a program to Reverse a string. 

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, len = 0;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
    {
        len++;          // len = len +1 
    }

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}