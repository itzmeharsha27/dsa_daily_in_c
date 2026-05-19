#include <stdio.h>

#define MAX 100

int main()
{
    int nums[] = {3,1,5,8};
    int n = 4;

    int arr[6];
    arr[0] = 1;
    arr[n+1] = 1;

    for(int i=0;i<n;i++)
        arr[i+1] = nums[i];

    int dp[MAX][MAX] = {0};

    for(int len=1;len<=n;len++)
    {
        for(int i=1;i<=n-len+1;i++)
        {
            int j = i + len - 1;

            for(int k=i;k<=j;k++)
            {
                int coins = arr[i-1]*arr[k]*arr[j+1]
                            + dp[i][k-1]
                            + dp[k+1][j];

                if(coins > dp[i][j])
                    dp[i][j] = coins;
            }
        }
    }

    printf("Max Coins: %d\n", dp[1][n]);

    return 0;
}