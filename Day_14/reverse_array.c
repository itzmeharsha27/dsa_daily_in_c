#include <stdio.h>

int main() {

    int n, i;
    int arr[100];

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Validate size
    if(n <= 0 || n > 100)
    {
        printf("Invalid array size\n");
        return 0;
    }

    // Input elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reverse array using swapping
    for(i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    // Print reversed array
    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}