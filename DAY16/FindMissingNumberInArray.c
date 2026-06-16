// Write a program to Find missing number in array. 
#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter value of n: ");       // prompt the user to enter the value of n (the size of the array + 1)
    scanf("%d", &n);            // read the value of n

    int arr[n - 1];             // array to store the elements, declared with size n-1 since one number is missing
    int sum = 0, total = 0;             // variable to store the sum of the elements and variable to store the expected total sum

    printf("Enter %d elements: ", n - 1);           //  prompt the user to enter n-1 elements of the array
    for(i = 0; i < n - 1; i++)                      // loop to read the elements of the array
    {
        scanf("%d", &arr[i]);               // read each element of the array
        sum += arr[i];              //  sum=sum+arr[i];                    // calculate the sum of the elements
    }

    total = n * (n + 1) / 2;            //  calculate the expected total sum of numbers from 1 to n using the formula n(n+1)/2

    printf("Missing number = %d", total - sum);            //  display the missing number by subtracting the actual sum from the expected total sum 0;

    return 0;
}



// Write a program to Find missing number in array.
#include <stdio.h>
int main()
{
    int arr[10], n, i, sum = 0, expectedSum;             // array to store the elements, variable to store the number of elements, loop counter and variables to store the sum of elements and expected sum

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
        sum = sum + arr[i];         //sum += arr[i];                    // calculate the sum of the elements
    }

    expectedSum = (n + 1) * (n + 2) / 2;         // calculate the expected sum of numbers from 1 to n+1 using the formula n(n+1)/2

    printf("The missing number is: %d\n", expectedSum - sum);         // display the missing number by subtracting the actual sum from the expected sum

    return 0;
}


