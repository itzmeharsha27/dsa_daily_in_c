#include <stdio.h>

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

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(wt[i-1] <= j)
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return 0;
}