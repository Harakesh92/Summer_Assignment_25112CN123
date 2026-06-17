// Write a program to Union of arrays. 
#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], unionArr[20];             // arrays to store the elements of the two arrays and the union array
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

    for(i = 0; i < n1; i++)              // loop to copy unique elements of the first array to unionArr
    {
        unionArr[k++] = arr1[i];             // copy each element of arr1 to unionArr and increment k
    }

    for(j = 0; j < n2; j++)              // loop to copy unique elements of the second array to unionArr
    {
        int found = 0;                      // flag to check if element is already in unionArr
        for(i = 0; i < k; i++)              // loop to check if element is already in unionArr
        {
            if(arr2[j] == unionArr[i])           // if element is found in unionArr
            {
                found = 1;                      // set found flag to 1
                break;                          // break the loop as we found the element
            }   
        }
        if(!found)                          // if element is not found in unionArr
        {
            unionArr[k++] = arr2[j];             // copy the element to unionArr and increment k
        }   
    }
    printf("Union of arrays is: ");          // display message for union array

    for(i = 0; i < k; i++)              // loop to display the union array
    {
        printf("%d ", unionArr[i]);           // print each element followed by a space
    }       
    printf("\n");                      // print a new line at the end
    return 0;
}


