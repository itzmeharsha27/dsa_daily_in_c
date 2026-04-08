#include <stdio.h>

// Function to find maximum element using recursion
int findMax(int arr[], int n)
{
    // Base case
    if(n == 1)
        return arr[0];

    // Recursive call
    int temp = findMax(arr, n-1);

    // Compare and return max
    if(arr[n-1] > temp)
        return arr[n-1];

    return temp;
}

int main()
{
    int n, i, max;
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

    max = findMax(arr, n);

    printf("Maximum = %d\n", max);

    return 0;
}