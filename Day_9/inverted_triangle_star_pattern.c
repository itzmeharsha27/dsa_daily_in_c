#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        printf("\n");
    }

    return 0;
}