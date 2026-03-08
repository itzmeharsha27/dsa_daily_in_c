#include <stdio.h>

int main() {
    int n, i, j;

    // Take number of rows from user
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Validate input
    if(n <= 0) {
        printf("Enter a positive number\n");
        return 0;
    }

    printf("\nFull Pyramid Pattern:\n\n");

    // Outer loop controls rows
    for(i = 1; i <= n; i++) {

        // Print spaces before stars
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}