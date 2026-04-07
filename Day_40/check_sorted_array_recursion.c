#include <stdio.h>

int isSorted(int arr[], int n);

int main()
{
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    return 0;
}

int isSorted(int arr[], int n)
{
    return 1;
}