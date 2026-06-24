// Write a program to Remove duplicate characters.
#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; )
        {
            if(str[i] == str[j])
            {
                int k = j;
                while(str[k] != '\0')
                {
                    str[k] = str[k + 1];
                    k++;
                }
            }
            else
            {
                j++;
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}