// Write a program to Input and display array. 
#include <stdio.h>
int main()
{
    int arr[10], n;                    // array to store the elements and variable to store the number of elements

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(int i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    printf("The elements are: ");         // prompt the user to see the elements
    for(int i = 0; i < n; i++)              // loop to display the elements
    {
        printf("%d ", arr[i]);              // display each element
    }
    printf("\n");

    return 0;
}
