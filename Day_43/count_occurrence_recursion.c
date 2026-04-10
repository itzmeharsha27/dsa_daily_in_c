#include <stdio.h>

// Function to count occurrences using recursion
int countOcc(int arr[], int n, int key)
{
    // Base case
    if(n == 0)
        return 0;

    // Recursive case
    if(arr[n-1] == key)
        return 1 + countOcc(arr, n-1, key);

    return countOcc(arr, n-1, key);
}

int main()
{
    int n, i, key, result;
    int arr[100];

    printf("Enter number of  elements: ");
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

    printf("Enter element to count: ");
    scanf("%d", &key);

    result = countOcc(arr, n, key);

    printf("Count = %d\n", result);

    return 0;
}