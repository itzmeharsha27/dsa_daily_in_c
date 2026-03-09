#include <stdio.h>

int main() {
    int n, i, j;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Check for valid input
    if(n <= 0) {
        printf("Rows must be positive\n");
        return 0;
    }

    printf("\nNumber Pyramid Pattern:\n\n");

    // Loop for rows
    for(i = 1; i <= n; i++) {

        // Loop for printing numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}