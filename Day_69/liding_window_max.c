#include <stdio.h>

void slidingWindowMax(int arr[], int n, int k);

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[1000];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    slidingWindowMax(arr, n, k);

    return 0;
}

void slidingWindowMax(int arr[], int n, int k) {
    int dq[1000];
    int front = 0, rear = -1;

    for(int i = 0; i < n; i++) {

        while(front <= rear && dq[front] <= i - k)
            front++;

        while(front <= rear && arr[dq[rear]] <= arr[i])
            rear--;

        dq[++rear] = i;

        if(i >= k - 1)
            printf("%d ", arr[dq[front]]);
    }

    printf("\n");
}