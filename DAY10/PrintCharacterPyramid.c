// Write a program to Print character pyramid. 
#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        // Print spaces
        for(j = 1; j <= n - i; j++)  //for spaces 
        {
            printf(" ");
        }

        // Print increasing characters
        for(j = 1; j <= i; j++)         // for increasing characters    
        {
            printf("%c", 'A' + j - 1);
        }

        // Print decreasing characters
        for(j = i - 1; j >= 1; j--)
        {
            printf("%c", 'A' + j - 1);      //
        }

        printf("\n");
    }

    return 0;
}





// Write a program to Print reverse character pyramid. 
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        // for Print spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        //  for Print increasing characters
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }

        // for Print decreasing characters
        for(j = i - 1; j >= 1; j--)
        {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}