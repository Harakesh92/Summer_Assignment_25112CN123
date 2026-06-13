// Write a program to Find sum and average of array. 
#include <stdio.h>
int main()
{
    int arr[10], n, sum = 0;             // array to store the elements, variable to store the number of elements and variable to store the sum
    float average;                      // variable to store the average

    printf("Enter the number of elements: ");         // prompt the user to enter the number of elements
    scanf("%d", &n);                      // read the number of elements

    printf("Enter the elements: ");         // prompt the user to enter the elements
    for(int i = 0; i < n; i++)              // loop to read the elements
    {
        scanf("%d", &arr[i]);              // read each element
        sum = sum + arr[i];         //sum += arr[i];                     // add each element to the sum
    }

    average = (float)sum / n;             // calculate the average

    printf("The sum of the elements is: %d\n", sum);         // display the sum
    printf("The average of the elements is: %.2f\n", average);         // display the average

    return 0;
}