#include <stdio.h>

// 0/1 Knapsack (Classic DP Problem)

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

    // Fill DP table
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(i==0 || w==0)
                dp[i][w] = 0;
            else if(wt[i-1] <= w)
                dp[i][w] = max(
                    val[i-1] + dp[i-1][w-wt[i-1]],  // take item
                    dp[i-1][w]                      // skip item
                );
            else
                dp[i][w] = dp[i-1][w];
        }
    }

    printf("Max Profit: %d\n", dp[n][W]);

    return 0;
}