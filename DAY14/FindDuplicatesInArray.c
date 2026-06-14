// Write a program to Find duplicates in array. 
#include <stdio.h>
int main()
{
    int arr[10], n, i, j, count;             // array to store the elements, variable to store the number of elements and variables for loop counters and count of duplicates

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    printf("The duplicate elements are: ");         // prompt the user to see the duplicate elements
    for(i = 0; i < n; i++)              // loop to find duplicates
    {
        count = 1;                      // initialize count to 1 for each element
        for(j = i + 1; j < n; j++)          // loop to compare with the rest of the elements
        {
            if(arr[i] == arr[j])           // if a duplicate is found
            {
                count++;                //  count=count+1          // increment count
                arr[j] = -1;              // mark the duplicate element as -1 to avoid counting it again
            }
        }
        if(count > 1 && arr[i] != -1)         // if count is greater than 1 and the element is not marked as -1
        {
            printf("%d ", arr[i]);              // display the duplicate element
        }
    }
    printf("\n");

    return 0;
}