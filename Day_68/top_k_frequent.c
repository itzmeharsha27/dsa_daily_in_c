#include <stdio.h>

int main() {
    struct Pair {
    int num;
    int count;
};
    int nums[] = {1,1,1,2,2,3};
    int freq[100] = {0};
    int n = 6;

    for(int i = 0; i < n; i++) {
    freq[nums[i]]++;
}
int k = 2;
    return 0;
}