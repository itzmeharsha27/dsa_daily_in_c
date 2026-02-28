#include <stdio.h>

int main() {
    int n;              // Variable to store user input
    int original;       // To store original number for comparison
    int reverse = 0;    // To store reversed number

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Negative numbers are not considered palindrome
    if (n < 0) {
        printf("Negative numbers are not palindrome\n");
        return 0;  // Exit program
    }

    // If number is 0, it is palindrome
    if (n == 0) {
        printf("0 is a Palindrome\n");
        return 0;
    }

    // Store original value before modifying n
    original = n;

    // Reverse the number
    while (n > 0) {
        int digit = n % 10;          // Extract last digit
        reverse = reverse * 10 + digit; // Build reversed number
        n = n / 10;                  // Remove last digit
    }

    // Compare original and reversed number
    if (original == reverse)
        printf("%d is a Palindrome\n", original);
    else
        printf("%d is Not a Palindrome\n", original);

    return 0;   // End of program
}