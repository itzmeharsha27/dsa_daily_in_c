#include <stdio.h>

int main() {
    int n;
    long long sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive number");
        return 0;
    }

    sum = (long long)n * (n + 1) / 2;
    printf("Sum = %lld", sum);

    return 0;
}