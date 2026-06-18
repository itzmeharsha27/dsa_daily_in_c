#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {1,2,7};
    int n = 3;

    int dp[MAX][MAX] = {0};

    int total = 0;
    for(int i=0;i<n;i++)
        total += arr[i];

    int sum = total / 2;

    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    for(int j=1;j<=sum;j++)
        dp[0][j] = 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    int best = 0;
    for(int j=sum;j>=0;j--)
    {
        if(dp[n][j])
        {
            best = j;
            break;
        }
    }

    printf("Min Difference: %d\n", total - 2*best);

    return 0;
}