// Write a program to Rotate array left. 
#include <stdio.h>

int main()
{
    int n, i, temp;         // variable to store the size of the array, loop counter and temporary variable to store the first element

    printf("Enter size of array: ");        // prompt the user to enter the size of the array
    scanf("%d", &n);                    // read the size of the array

    int arr[n];

    printf("Enter array elements: ");               //  prompt the user to enter the elements of the array
    for(i = 0; i < n; i++)      
    {
        scanf("%d", &arr[i]);                   //  read each element of the array
    }

    temp = arr[0];   // Store first element

    for(i = 0; i < n - 1; i++)              //  loop to shift elements to the left
    {
        arr[i] = arr[i + 1];            // Shift elements one position to the left
    }   

    arr[n - 1] = temp;   // Place first element at last         

    printf("Array after left rotation:\n");             // prompt the user to see the array after left rotation
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);          // display each element of the array after left rotation
    }

    return 0;
}