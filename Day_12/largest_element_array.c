#include <stdio.h>

int main() {
    int size, i;
    int numbers[100];
    int max;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    if(size <= 0 || size > 100) {
        printf("Invalid number of elements\n");
        return 0;
    }

    printf("Enter elements:\n");

    for(i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

    for(i = 1; i < size; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Largest element = %d\n", max);

    return 0;
}