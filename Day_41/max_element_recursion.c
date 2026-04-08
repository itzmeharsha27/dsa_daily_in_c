#include <stdio.h>

int findMax(int arr[], int n);

int main()
{
    int n, i, max;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = findMax(arr, n);

    return 0;
}

int findMax(int arr[], int n)
{
    if(n == 1)
        return arr[0];
}