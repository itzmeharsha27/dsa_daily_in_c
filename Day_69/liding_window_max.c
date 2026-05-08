void slidingWindowMax(int arr[], int n, int k) {
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }
}