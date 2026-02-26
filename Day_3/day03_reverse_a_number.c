#include <stdio.h>

int main() {
    int n, reverse = 0, sign = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        sign = -1;
        n = -n;
    }

    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n = n / 10;
    }

    printf("Reversed number = %d", reverse * sign);
    return 0;
}