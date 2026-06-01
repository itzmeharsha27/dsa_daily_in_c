#include <stdio.h>

// Coin Change 2 using DP

#define MAX 100

int main()
{
    int coins[] = {1,2,5};
    int n = 3;
    int amount = 5;

    int dp[MAX][MAX] = {0};

    // Base case
    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    // DP computation
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=amount;j++)
        {
            if(coins[i-1] <= j)
                dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    printf("Number of Ways: %d\n", dp[n][amount]);

    return 0;
}