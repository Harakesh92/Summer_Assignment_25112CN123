// Write a program to Find maximum frequency element. 
#include <stdio.h>
int main()
{
    int arr[10], n, i, j, count, maxCount = 0, maxElement;             // array to store the elements, variable to store the number of elements and variables for loop counters, count of frequency, maximum frequency and element with maximum frequency

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    for(i = 0; i < n; i++)              // loop to find the frequency of each element
    {
        count = 1;                      // initialize count to 1 for each element
        for(j = i + 1; j < n; j++)          // loop to compare with the rest of the elements
        {
            if(arr[i] == arr[j])           // if a duplicate is found
            {
                count++;                // increment count
                arr[j] = -1;              // mark the duplicate element as -1 to avoid counting it again
            }
        }
        if(count > maxCount && arr[i] != -1)         // if count is greater than maxCount and the element is not marked as -1
        {
            maxCount = count;             // update maxCount
            maxElement = arr[i];          // update maxElement with the current element
        }
    }

    printf("The maximum frequency element is: %d\n", maxElement);         // display the element with maximum frequency

    return 0;
}