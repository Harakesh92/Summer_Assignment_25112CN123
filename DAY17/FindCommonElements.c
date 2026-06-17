// Write a program to Find common elements. 
#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], intersectionArr[10];             // arrays to store the elements of the two arrays and the intersection array
    int n1, n2, i, j, k = 0;                      // variables to store the number of elements in each array and loop counters

    printf("Enter the number of elements in first array: ");         // prompt the user to enter the number of elements in the first array
    scanf("%d", &n1);                     // read the number of elements in the first array

    printf("Enter the elements of first array: ");         // prompt the user to enter the elements of the first array
    for(i = 0; i < n1; i++)              // loop to read the elements of the first array
    {
        scanf("%d", &arr1[i]);              // read each element of the first array
    }

    printf("Enter the number of elements in second array: ");        // prompt the user to enter the number of elements in the second array
    scanf("%d", &n2);                     // read the number of elements in the second array

    printf("Enter the elements of second array: ");        // prompt the user to enter the elements of the second array
    for(i = 0; i < n2; i++)              // loop to read the elements of the second array
    {
        scanf("%d", &arr2[i]);              // read each element of the second array
    }

    for(i = 0; i < n1; i++)              // loop to find common elements between arr1 and arr2
    {
        for(j = 0; j < n2; j++)          // loop to compare with each element of arr2
        {
            if(arr1[i] == arr2[j])           // if a common element is found
            {
                intersectionArr[k++] = arr1[i];     // copy it to intersectionArr and increment k
                break;                          // break inner loop as we found a match for arr1[i]
            }
        }
    }
    printf("Common elements are: ");            // display message for common elements
    for(i = 0; i < k; i++)                  // loop to display the common elements
    {   
        printf("%d ", intersectionArr[i]);              // print each common element followed by a space
    }
    printf("\n");                                   // print a new line at the end
    return 0;
}   