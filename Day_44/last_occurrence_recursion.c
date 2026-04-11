#include <stdio.h>

// Function to find last occurrence using recursion
int lastOcc(int arr[], int n, int key, int index)
{
    // Base case
    if(index >= n)
        return -1;

    // Recursive call first
    int res = lastOcc(arr, n, key, index + 1);

    // If found later
    if(res != -1)
        return res;

    // Check current index
    if(arr[index] == key)
        return index;

    return -1;
}

int main()
{
    int n, i, key, pos;
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

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = lastOcc(arr, n, key, 0);

    if(pos == -1)
        printf("Element not found\n");
    else
        printf("Last occurrence at position %d\n", pos + 1);

    return 0;
}