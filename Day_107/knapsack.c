#include <stdio.h>

#define MAX 100

int main()
{
    int wt[] = {1,3,4,5};
    int val[] = {1,4,5,7};
    int n = 4;
    int W = 7;

    int dp[MAX][MAX] = {0};

    for(int i=0;i<=n;i++)
        dp[i][0] = 0;

    for(int j=0;j<=W;j++)
        dp[0][j] = 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
        }
    }

    return 0;
}