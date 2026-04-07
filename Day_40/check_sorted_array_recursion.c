#include <stdio.h>

int isSorted(int arr[], int n);

int main()
{
    int n, i, result;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    result = isSorted(arr, n);

    if(result)
        printf("Array is Sorted\n");
    else
        printf("Array is Not Sorted\n");

    return 0;
}

int isSorted(int arr[], int n)
{
    if(n == 1)
        return 1;

    if(arr[n-1] < arr[n-2])
        return 0