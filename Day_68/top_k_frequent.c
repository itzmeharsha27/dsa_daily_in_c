#include <stdio.h>

int main() {
    struct Pair arr[100];
int size = 0;

for(int i = 0; i < 100; i++) {
    if(freq[i] > 0) {
        arr[size].num = i;
        arr[size].count = freq[i];
        size++;
    }
}
    int nums[] = {1,1,1,2,2,3};
    int freq[100] = {0};
    int n = 6;
for(int i = 0; i < size - 1; i++) {
    for(int j = 0; j < size - i - 1; j++) {
        if(arr[j].count < arr[j+1].count) {
            struct Pair temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}printf("Top %d frequent elements:\n", k);
for(int i = 0; i < k; i++) {
    printf("%d ", arr[i].num);
}
    for(int i = 0; i < n; i++) {
        printf("\n");
    freq[nums[i]]++;// Count frequency of elements
// Sort based on frequency
// Print top k elements
}
int k = 2;
    return 0;
}