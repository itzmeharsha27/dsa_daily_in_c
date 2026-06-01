#include <stdio.h>

#define MAX 100

int main()
{
    int coins[] = {2};
    int n = 1;
    int amount = 3;

    int dp[MAX][MAX] = {0};

    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

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

    printf("Ways: %d\n", dp[n][amount]);

    return 0;
}