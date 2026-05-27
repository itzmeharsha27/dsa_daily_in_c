#include <stdio.h>

// Minimum Subset Sum Difference using DP

#define MAX 100

int main()
{
    int arr[] = {1,6,11,5};
    int n = 4;

    int sum = 0;

    // Total sum
    for(int i=0;i<n;i++)
        sum += arr[i];

    int target = sum / 2;

    int dp[MAX][MAX] = {0};

    // Base case
    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    // Subset sum DP
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=target;j++)
        {
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    // Find closest sum
    int best = 0;
    for(int j=target;j>=0;j--)
    {
        if(dp[n][j])
        {
            best = j;
            break;
        }
    }

    int diff = sum - 2 * best;

    printf("Minimum Subset Sum Difference: %d\n", diff);

    return 0;
}