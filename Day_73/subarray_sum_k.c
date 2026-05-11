#include <stdio.h>

// Subarray Sum Equals K using Prefix Sum

#define MAX 1000

int main()
{
    int arr[] = {3,4,7,2,-3,1,4,2};
    int n = 8, k = 7;

    int sum = 0, count = 0;
    int freq[MAX] = {0};

    // Base case: sum 0 occurs once
    freq[0] = 1;

    for(int i=0;i<n;i++)
    {
        sum += arr[i];

        // Check if (sum - k) exists
        if(sum - k >= 0)
            count += freq[sum - k];

        // Store current prefix sum
        freq[sum]++;
    }

    printf("Subarrays with sum %d: %d\n", k, count);

    return 0;
}