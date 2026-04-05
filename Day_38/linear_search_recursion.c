#include <stdio.h>

int search(int arr[], int n, int key, int index);

int main()
{
    int n, i, key;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    return 0;
}

int search(int arr[], int n, int key, int index)
{
    return -1;
}