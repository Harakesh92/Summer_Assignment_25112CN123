// Write a program to Find diagonal sum. 

#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, sum = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];            // for right diagonal
    }

    printf("Sum of diagonal elements = %d", sum);



  /*  
    for(j = 0; j < n; j++)
    {
        sum = sum + a[j][j];            // for left diagonal
    }

    printf("Sum of diagonal elements = %d", sum);
  */
   

    return 0;
}