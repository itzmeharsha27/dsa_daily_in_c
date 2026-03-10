#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    return 0;
}