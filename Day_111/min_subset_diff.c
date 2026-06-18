#include <stdio.h>

// Minimum Subset Sum Difference (DP)

#define MAX 100

int main()
{
    int arr[] = {1,6,11,5};
    int n = 4;

    int dp[MAX][MAX] = {0};

    int total = 0;
    for(int i=0;i<n;i++)
        total += arr[i];

    int sum = total / 2;

    // Initialize DP
    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    for(int j=1;j<=sum;j++)
        dp[0][j] = 0;

    // Build DP table
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] 
                         || dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    int best = 0;
    for(int j=sum; j>=0; j--)
    {
        if(dp[n][j])
        {
            best = j;
            break;
        }
    }

    int minDiff = total - 2 * best;

    printf("Minimum Subset Sum Difference = %d\n", minDiff);

    return 0;
}