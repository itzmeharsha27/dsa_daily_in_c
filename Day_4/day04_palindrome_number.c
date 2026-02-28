#include <stdio.h>

int main() {
    int n, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative numbers are not palindrome\n");
        return 0;
    }

    if (n == 0) {
        printf("0 is a Palindrome\n");
        return 0;
    }

    original = n;

    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n = n / 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is Not a Palindrome\n", original);

    return 0;
}