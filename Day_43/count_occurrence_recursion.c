#include <stdio.h>

int countOcc(int arr[], int n, int key);

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

    return 0;
}

int countOcc(int arr[], int n, int key)
{
    if(n == 0)
        return 0;
}