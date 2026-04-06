#include <stdio.h>

// Function to perform Binary Search using recursion
int binarySearch(int arr[], int low, int high, int key)
{
    // Base case
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    // If element found
    if(arr[mid] == key)
        return mid;

    // Search left half
    if(arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);

    // Search right half
    return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int n, i, key, pos;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = binarySearch(arr, 0, n-1, key);

    if(pos == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", pos + 1);

    return 0;
}