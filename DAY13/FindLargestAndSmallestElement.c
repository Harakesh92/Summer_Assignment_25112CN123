// Write a program to Find largest and smallest element. 
#include <stdio.h>
int main()
{
    int arr[10], n, largest, smallest;             // array to store the elements, variable to store the number of elements and variables to store the largest and smallest elements

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(int i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    largest = arr[0];                     // initialize largest with the first element
    smallest = arr[0];                    // initialize smallest with the first element

    for(int i = 1; i < n; i++)              // loop to find the largest and smallest elements
    {
        if(arr[i] > largest)               // if the current element is greater than largest
        {
            largest = arr[i];               // update largest
        }
        if(arr[i] < smallest)              // if the current element is smaller than smallest
        {
            smallest = arr[i];              // update smallest
        }
    }

    printf("The largest element is: %d\n", largest);         // display the largest element
    printf("The smallest element is: %d\n", smallest);         // display the smallest element

    return 0;
}