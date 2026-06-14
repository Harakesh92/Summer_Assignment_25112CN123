// Write a program to Linear search. 
#include <stdio.h>
int main()
{
    int arr[10], n, key, found = 0;             // array to store the elements, variable to store the number of elements, variable to store the key and variable to indicate if the key is found

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(int i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    printf("Enter the key to search: ");         // prompt the user to enter the key to search
    scanf("%d", &key);                    // read the key

    for(int i = 0; i < n; i++)              // loop to perform linear search
    {
        if(arr[i] == key)                   // if the current element is equal to the key
        {
            found = 1;                      // set found to 1
            break;                          // exit the loop
        }
    }

    if(found)                               // if found is 1
    {
        printf("Key found in the array.\n");         // display that the key is found
    }
    else                                    // if found is 0
    {
        printf("Key not found in the array.\n");         // display that the key is not found
    }

    return 0;
}