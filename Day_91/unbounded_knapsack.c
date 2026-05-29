#include <stdio.h>

// Unbounded Knapsack using DP

#define MAX 100

int max(int a,int b)
{
    return a > b ? a : b;
}

int main()
{
    int wt[] = {2,3,4};
    int val[] = {4,5,6};
    int n = 3;
    int W = 5;

    int dp[MAX][MAX] = {0};

    // Fill DP table
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(i==0 || w==0)
                dp[i][w] = 0;
            else if(wt[i-1] <= w)
                dp[i][w] = max(
                    val[i-1] + dp[i][w-wt[i-1]],  // reuse item
                    dp[i-1][w]                    // skip item
                );
            else
                dp[i][w] = dp[i-1][w];
        }
    }

    printf("Maximum Value (Unbounded Knapsack): %d\n", dp[n][W]);

    return 0;
}