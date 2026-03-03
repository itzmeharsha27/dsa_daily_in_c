#include <stdio.h>

int main() {
    int start, end, i, j, flag;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++) {
        flag = 0;

        if(i <= 1)
            continue;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%d ", i);
    }

    return 0;
}