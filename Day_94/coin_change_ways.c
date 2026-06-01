#include <stdio.h>

// Coin Change 2 (Count Ways - Unbounded Knapsack)

#define MAX 100

int main()
{
    int coins[] = {1,2,5};
    int n = 3;
    int amount = 5;

    int dp[MAX][MAX] = {0};

    // Initialize base case
    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    // Build DP table
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=amount;j++)
        {
            if(coins[i-1] <= j)
            {
                dp[i][j] = dp[i][j-coins[i-1]]  // include coin
                         + dp[i-1][j];          // exclude coin
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    printf("Total Ways to Make Amount %d: %d\n", amount, dp[n][amount]);

    return 0;
}