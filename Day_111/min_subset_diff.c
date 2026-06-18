#include <stdio.h>

// Minimum Subset Sum Difference

#define MAX 100

int main()
{
    int arr[] = {1,6,11,5};
    int n = 4;

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

    return 0;
}