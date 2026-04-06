#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key);

int main()
{
    int n, i, key;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    return 0;
}

int binarySearch(int arr[], int low, int high, int key)
{
    return -1;
}