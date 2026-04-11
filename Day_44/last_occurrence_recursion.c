#include <stdio.h>

int lastOcc(int arr[], int n, int key, int index);

int main()
{
    int n, i, key, pos;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = lastOcc(arr, n, key, 0);

    return 0;
}

int lastOcc(int arr[], int n, int key, int index)
{
    if(index >= n)
        return -1;
}