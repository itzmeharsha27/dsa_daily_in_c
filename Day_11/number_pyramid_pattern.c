#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Enter a positive number\n");
        return 0;
    }

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}