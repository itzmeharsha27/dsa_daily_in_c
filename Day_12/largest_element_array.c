#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 100) {
        printf("Invalid number of elements\n");
        return 0;
    }

    printf("Enter elements:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest = %d\n", largest);

    return 0;
}