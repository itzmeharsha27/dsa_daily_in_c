#include <stdio.h>

int main() {
    int n, original, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;   // cube of digit
        n = n / 10;
    }

    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}