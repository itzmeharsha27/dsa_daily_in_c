#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digits = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers are not Armstrong numbers\n");
        return 0;
    }

    original = n;
    temp = n;

    // Count number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to power of total digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("%d is an Armstrong Number\n", original);
    else
        printf("%d is Not an Armstrong Number\n", original);

    return 0;
}