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

    printf("Sum = %d\n", sum);

    return 0;
}

int sumArray(int arr[], int n)#include <stdio.h>

// Recursive function to find sum
int sumArray(int arr[], int n)
{
    if(n == 0)
        return 0;

    return arr[n-1] + sumArray(arr, n-1);
}

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

    printf("Sum = %d\n", sum);

    return 0;
}
{
    if(n == 0)
        return 0;

    return arr[n-1] + sumArray(arr, n-1);
}