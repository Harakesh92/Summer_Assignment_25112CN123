// Write a program to Count even and odd elements. 
#include <stdio.h>
int main()
{
    int arr[10], n, evenCount = 0, oddCount = 0;             // array to store the elements, variable to store the number of elements and variables to count even and odd elements

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(int i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
        if(arr[i] % 2 == 0)               // if the current element is even
        {
            evenCount++;       // evencount=evenCount+1            // increment even count
        }
        else                                // if the current element is odd
        {
            oddCount++;    // oddCount=oddCount+1                // increment odd count
        }
    }

    printf("The number of even elements is: %d\n", evenCount);         // display the count of even elements
    printf("The number of odd elements is: %d\n", oddCount);         // display the count of odd elements

    return 0;
}