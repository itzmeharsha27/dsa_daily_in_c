#include <stdio.h>

int main() {
    int n, i, j;

    // Get number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Validate input
    if(n <= 0) {
        printf("Enter a positive number\n");
        return 0;
    }

    printf("\nNumber Pyramid Pattern:\n\n");

    // Outer loop controls rows
    for(i = 1; i <= n; i++) {

        // Inner loop prints numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}