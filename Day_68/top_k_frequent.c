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

    for(int i = 0; i < n; i++) {
    freq[nums[i]]++;
}
int k = 2;
    return 0;
}