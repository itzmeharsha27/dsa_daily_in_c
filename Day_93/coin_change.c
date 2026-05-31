#include <stdio.h>

#define MAX 100
#define INF 100000

int min(int a,int b)
{
    return a < b ? a : b;
}

int main()
{
    int coins[] = {2};
    int n = 1;
    int amount = 3;

    int dp[MAX][MAX];

    for(int i=0;i<=n;i++)
        for(int j=0;j<=amount;j++)
            dp[i][j] = INF;

    for(int i=0;i<=n;i++)
        dp[i][0] = 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=amount;j++)
        {
            if(coins[i-1] <= j)
                dp[i][j] = min(1 + dp[i][j-coins[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    if(dp[n][amount] == INF)
        printf("Not Possible\n");
    else
        printf("Min Coins: %d\n", dp[n][amount]);

    return 0;
}