#include <stdio.h>

// Function to check if array is sorted using recursion
int isSorted(int arr[], int n)
{
    // Base case
    if(n == 1)
        return 1;

    // If current pair is not sorted
    if(arr[n-1] < arr[n-2])
        return 0;

    // Recursive call
    return isSorted(arr, n-1);
}

int main()
{
    int n, i, result;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Validate input
    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    result = isSorted(arr, n);

    if(result)
        printf("Array is Sorted\n");
    else
        printf("Array is Not Sorted\n");

    return 0;
}