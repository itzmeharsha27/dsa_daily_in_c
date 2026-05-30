#include <stdio.h>

// Rod Cutting using Unbounded Knapsack

#define MAX 100

int max(int a,int b)
{
    return a > b ? a : b;
}

int main()
{
    int price[] = {2,5,7,8,10};
    int n = 5;

    int dp[MAX][MAX] = {0};

    // DP table
    for(int i=0;i<=n;i++)
    {
        for(int len=0;len<=n;len++)
        {
            if(i==0 || len==0)
                dp[i][len] = 0;
            else if(i <= len)
                dp[i][len] = max(price[i-1] + dp[i][len-i], dp[i-1][len]);
            else
                dp[i][len] = dp[i-1][len];
        }
    }

    printf("Maximum Profit from Rod Cutting: %d\n", dp[n][n]);

    return 0;
}