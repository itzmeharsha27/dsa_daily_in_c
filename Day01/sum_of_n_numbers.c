#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number");
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}