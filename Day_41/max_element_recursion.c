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

    printf("Maximum = %d\n", max);

    return 0;
}

int findMax(int arr[], int n)
{
    if(n == 1)
        return arr[0];

    int temp = findMax(arr, n-1);

    if(arr[n-1] > temp)
        return arr[n-1];
    else
        return temp;
}