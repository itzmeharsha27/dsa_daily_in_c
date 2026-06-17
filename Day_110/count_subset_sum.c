#include <stdio.h>

// Count Subsets with Given Sum (DP - Counting)

#define MAX 100

int main()
{
    int arr[] = {2,3,5,6,8,10};
    int n = 6;
    int sum = 10;

    int dp[MAX][MAX] = {0};

    // Initialize base cases
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
                         + dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    printf("Total subsets with sum %d = %d\n", sum, dp[n][sum]);

    return 0;
}