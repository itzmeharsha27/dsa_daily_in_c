#include <stdio.h>

int main() {
    int n, original, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers are not Armstrong numbers\n");
        return 0;
    }

    original = n;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong Number\n", original);
    else
        printf("%d is Not an Armstrong Number\n", original);

    return 0;
}