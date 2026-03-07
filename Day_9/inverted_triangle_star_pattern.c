#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Enter a positive number\n");
        return 0;
    }

    printf("\nInverted Right Triangle Pattern:\n\n");

    for(i = n; i >= 1; i--) {

        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}