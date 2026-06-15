// Write a program to Reverse array. 
#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Enter size of array: ");                // prompt the user to enter the size of the array
    scanf("%d", &n);

    int arr[n];             // array to store the elements, declared with the size entered by the user

    printf("Enter array elements: ");       // prompt the user to enter the elements of the array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);           // read each element of the array
    }

    for(i = 0; i < n / 2; i++)              // loop to reverse the array by swapping elements from the start and end
    {               
        temp = arr[i];              // store the current element in a temporary variable
        arr[i] = arr[n - 1 - i];            // move the element from the end to the current index
        arr[n - 1 - i] = temp;                  // move the current element (stored in temp) to the end index
    }

    printf("Reversed array:\n");            // prompt the user to see the reversed array
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);          // display each element of the reversed array
    }

    return 0;
}