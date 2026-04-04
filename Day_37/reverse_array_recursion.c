#include <stdio.h>

// Function to reverse array using recursion
void reverse(int arr[], int start, int end)
{
    // Base case
    if(start >= end)
        return;

    // Swap first and last elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call
    reverse(arr, start + 1, end - 1);
}

int main()
{
    int n, i;
    int arr[100];

    printf("Enter  number of elements: ");
    scanf("%d", &n);

    // Validate input
    if(n <= 0)
    {
        printf("Invalid  input\n");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, 0, n-1);

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}