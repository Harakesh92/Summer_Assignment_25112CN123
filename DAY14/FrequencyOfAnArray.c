// Write a program to find the frequency of an element in an array.
#include <stdio.h>
int main()
{
    int arr[10], n, key, count = 0;             // array to store the elements, variable to store the number of elements, variable to store the key and variable to store the frequency

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(int i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    printf("Enter the key to search: ");         // prompt the user to enter the key to search
    scanf("%d", &key);                    // read the key

    for(int i = 0; i < n; i++)              // loop to find the frequency
    {
        if(arr[i] == key)                   // if the current element is equal to the key
        {
            count++;                         // increment the frequency
        }
    }

    printf("The frequency of %d is: %d\n", key, count);         // display the frequency of the key

    return 0;
}