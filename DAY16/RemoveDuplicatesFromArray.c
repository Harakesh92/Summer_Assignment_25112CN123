// Write a program to Remove duplicates from array. 
#include <stdio.h>
int main()
{
    int arr[10], n, i, j, k;             // array to store the elements, variable to store the number of elements and variables for loop counters

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    for(i = 0; i < n; i++)              // loop to find duplicates
    {
        for(j = i + 1; j < n; j++)          // loop to compare with the rest of the elements
        {
            if(arr[i] == arr[j])           // if a duplicate is found
            {
                for(k = j; k < n - 1; k++)      // loop to shift elements left to remove duplicate
                {
                    arr[k] = arr[k + 1];          // shift element left
                }
                n--;                    // decrease the count of elements
                j--;                    // adjust index after shifting
            }
        }
    }

    printf("Array after removing duplicates: ");         // display message for array after removing duplicates
    for(i = 0; i < n; i++)              // loop to display the array after removing duplicates
    {
        printf("%d ", arr[i]);              // print each element followed by a space
    }
    printf("\n");                      // print a new line at the end

    return 0;
}
