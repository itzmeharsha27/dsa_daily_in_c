#include <stdio.h>

int main() {
    int size, i;
    int numbers[100];
    int max, secondMax;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    if(size <= 1 || size > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter elements:\n");

    for(i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    secondMax = -999999;

    for(i = 0; i < size; i++) {

        if(numbers[i] > max) {
            secondMax = max;
            max = numbers[i];
        }

        else if(numbers[i] > secondMax && numbers[i] != max) {
            secondMax = numbers[i];
        }

    }

    printf("Second Largest  element = %d\n", secondMax);

    return 0;

}