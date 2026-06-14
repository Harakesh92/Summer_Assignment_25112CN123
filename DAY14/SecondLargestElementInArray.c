// Write a program to find the second largest element in an array.
#include <stdio.h>
int main()
{
    int arr[10], n, largest, secondLargest;             // array to store the elements, variable to store the number of elements, variables to store the largest and second largest elements

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(int i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    if(arr[0] > arr[1])                     // initialize largest and second largest based on the first two elements
    {   
        largest = arr[0];                   // update largest with the first element
        secondLargest = arr[1];         // update second largest with the second element    
    }
    else
    {
        largest = arr[1];                   // update largest with the second element
        secondLargest = arr[0];         // update second largest with the first element
    }

    for(int i = 2; i < n; i++)              // loop to find the second largest element
    {
        if(arr[i] > largest)            // if the current element is greater than largest
        {
            secondLargest = largest;            // update second largest with the old largest
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)         // if the current element is greater than second largest and not equal to largest
        {
            secondLargest = arr[i];             // update second largest
        }
    }

    printf("The second largest element is: %d\n", secondLargest);         // display the second largest element

    return 0;
}