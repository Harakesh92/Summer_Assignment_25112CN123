// Write a program to Find pair with given sum in an array.
#include <stdio.h>
int main()
{
    int arr[10], n, i, j, sum;             // array to store the elements, variable to store the number of elements and variables for loop counters and the target sum

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
    }

    printf("Enter the target sum: ");         // prompt the user to enter the target sum
    scanf("%d", &sum);                      // read the target sum

    printf("Pairs with given sum %d are:\n", sum);         // display message for pairs with given sum
    for(i = 0; i < n; i++)              // loop to find pairs with given sum
    {
        for(j = i + 1; j < n; j++)          // loop to compare with the rest of the elements
        {
            if(arr[i] + arr[j] == sum)           // if a pair is found that sums up to the target
            {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);         // display the pair
            }
        }
    }

    return 0;
}


// write a program to Find pair with given sum in an array.
#include <stdio.h>

int main()
{
    int arr[10], n, i, j, sum, found = 0;                   // array to store the elements, variable to store the number of elements and variables for loop counters, target sum and a flag to indicate if a pair is found

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");             // prompt the user to enter the elements
    for(i = 0; i < n; i++)                          // loop to read the elements
    {
        scanf("%d", &arr[i]);                           // read each element
    }

    printf("Enter the target sum: ");                        // prompt the user to enter the target sum
    scanf("%d", &sum);

    printf("Pairs with given sum %d are:\n", sum);              // display message for pairs with given sum

    for(i = 0; i < n; i++)                  // loop to find pairs with given sum
    {
        for(j = i + 1; j < n; j++)          // loop to compare with the rest of the elements
        {
            if(arr[i] + arr[j] == sum)              // if a pair is found that sums up to the target
            {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);      // display the pair
                found = 1;                                          // set the flag to indicate that a pair is found
            }
        }
    }

    if(found == 0)                                     // if no pair is found, display a message
    {
        printf("No pair found.\n");             // display message if no pair is found
    }

    return 0;
}