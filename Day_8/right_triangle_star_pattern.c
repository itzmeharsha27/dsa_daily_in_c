#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Please enter a positive number of rows\n");
        return 0;
    }

    printf("Right Triangle Star Pattern:\n");

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}