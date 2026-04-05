#include <stdio.h>

// Function to perform linear search using recursion
int search(int arr[], int n, int key, int index)
{
    if(index >= n)
        return -1;

    if(arr[index] == key)
        return index;

    return search(arr, n, key, index + 1);
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

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = search(arr, n, key, 0);

    printf("Array size = %d\n", n);

    if(pos == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", pos + 1);

    return 0;
}