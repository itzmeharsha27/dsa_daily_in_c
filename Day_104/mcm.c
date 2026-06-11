#include <stdio.h>

#define MAX 100
#define INF 1000000

int main()
{
    int arr[] = {40,20,30,10,30};
    int n = 5;

    int dp[MAX][MAX] = {0};

    for(int i=1;i<n;i++)
        dp[i][i] = 0;

    for(int len=2; len<n; len++)
    {
        for(int i=1;i<n-len+1;i++)
        {
            int j = i + len - 1;
            dp[i][j] = INF;

            for(int k=i;k<j;k++)
            {
                int cost = dp[i][k] + dp[k+1][j] + arr[i-1]*arr[k]*arr[j];
                if(cost < dp[i][j])
                    dp[i][j] = cost;
            }
        }
    }

    printf("Min Cost: %d\n", dp[1][n-1]);

    return 0;
}