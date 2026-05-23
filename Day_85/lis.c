#include <stdio.h>

// Longest Increasing Subsequence using DP

#define MAX 100

int main()
{
    int arr[] = {10,9,2,5,3,7,101,18};
    int n = 8;

    int dp[MAX];
    int maxLen = 0;

    // Initialize DP
    for(int i=0;i<n;i++)
        dp[i] = 1;

    // Compute LIS
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i] > arr[j] && dp[j]+1 > dp[i])
                dp[i] = dp[j]+1;
        }

        if(dp[i] > maxLen)
            maxLen = dp[i];
    }

    printf("Longest Increasing Subsequence Length: %d\n", maxLen);

    return 0;
}