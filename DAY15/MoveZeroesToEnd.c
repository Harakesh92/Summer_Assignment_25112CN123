// Write a program to Move zeroes to end of array.
#include <stdio.h>

int main()
{
    int n, i, j = 0, temp;          // variable to store the size of the array, loop counter, index for non-zero elements and temporary variable to store the current element

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");           // prompt the user to enter the elements of the array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)          // loop to iterate through the array
    {
        if(arr[i] != 0)             // if the current element is not zero, move it to the front of the array
        {
            temp = arr[i];              //  store the current element in a temporary variable
            arr[i] = arr[j];                //  move the element at index j (which is the next position for a non-zero element) to the current index
            arr[j] = temp;                  //  move the current element (stored in temp) to index j
            j++;            // j=j+1;              // increment j to point to the next position for a non-zero element
        }
    }

    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);          // display each element of the array after moving zeroes to the end
    }

    return 0;
}
