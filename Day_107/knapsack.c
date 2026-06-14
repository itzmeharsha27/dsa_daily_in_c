#include <stdio.h>

// 0/1 Knapsack (Tabulation DP)

#define MAX 100

int max(int a,int b)
{
    return a > b ? a : b;
}

int main()
{
    int wt[] = {1,3,4,5};
    int val[] = {1,4,5,7};
    int n = 4;
    int W = 7;

    int dp[MAX][MAX] = {0};

    // Build DP table
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 0;
            }
            else if(wt[i-1] <= j)
            {
                dp[i][j] = max(
                    val[i-1] + dp[i-1][j-wt[i-1]],
                    dp[i-1][j]
                );
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    printf("Maximum Value in Knapsack = %d\n", dp[n][W]);

    return 0;
}