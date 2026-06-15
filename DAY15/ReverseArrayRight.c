// Write a program to Rotate array right. 
#include <stdio.h>

int main()
{
    int n, i, temp;                 // variable to store the size of the array, loop counter and temporary variable to store the last element

    printf("Enter size of array: ");            // prompt the user to enter the size of the array
    scanf("%d", &n);                        // read the size of the array

    int arr[n];             // array to store the elements, declared with the size entered by the user

    printf("Enter array elements: ");           // prompt the user to enter the elements of the array
    for(i = 0; i < n; i++)                      // loop to read the elements of the array
    {
        scanf("%d", &arr[i]);               // read each element of the array
    }

    temp = arr[n - 1];   // Store last element

    for(i = n - 1; i > 0; i--)          // loop to shift elements to the right
    {
        arr[i] = arr[i - 1];            // Shift elements one position to the right
    }

    arr[0] = temp;       // Place last element at first position

    printf("Array after right rotation:\n");        // prompt the user to see the array after right rotation
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);              // display each element of the array after right rotation
    }

    return 0;
}
