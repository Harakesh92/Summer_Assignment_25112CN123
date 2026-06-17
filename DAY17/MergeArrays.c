// Write a program to Merge arrays. 
#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], mergedArr[20];             // arrays to store the elements of the two arrays and the merged array
    int n1, n2, i, j;                      // variables to store the number of elements in each array and loop counters

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

    for(i = 0; i < n1; i++)              // loop to copy elements of the first array to mergedArr
    {
        mergedArr[i] = arr1[i];             // copy each element of arr1 to mergedArr
    }

    for(j = 0; j < n2; j++)              // loop to copy elements of the second array to mergedArr
    {
        mergedArr[i + j] = arr2[j];         // copy each element of arr2 to mergedArr starting from index n1
    }

    printf("Merged array is: ");          // display message for merged array
    for(i = 0; i < n1 + n2; i++)          // loop to display the merged array
    {
        printf("%d ", mergedArr[i]);           // print each element followed by a space
    }
    printf("\n");                      // print a new line at the end
    return 0;
}   

