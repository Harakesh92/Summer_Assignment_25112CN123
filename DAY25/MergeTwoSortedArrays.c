// Write a program to Merge two sorted arrays.
#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], arr3[100];
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged array:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}


//OR


// Write a program to Merge two sorted arrays.
#include <stdio.h>

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int arr3[10];
    int i = 0, j = 0, k = 0;

    while(i < 5 && j < 5)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < 5)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j < 5)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged Array:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}