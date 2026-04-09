#include <stdio.h>

int sumArray(int arr[], int n);

int main()
{
    int n, i, sum;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum = sumArray(arr, n);

    return 0;
}

int sumArray(int arr[], int n)
{
    if(n == 0)
        return 0;
}