#include <stdio.h>

// Recursive function to count occurrences
int countOcc(int arr[], int n, int key)
{
    if(n == 0)
        return 0;

    if(arr[n-1] == key)
        return 1 + countOcc(arr, n-1, key);

    return countOcc(arr, n-1, key);
}

int main()
{
    int n, i, key, result;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to count: ");
    scanf("%d", &key);

    result = countOcc(arr, n, key);

    printf("Count = %d\n", result);

    return 0;
}