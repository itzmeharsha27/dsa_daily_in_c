#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {1,5,11,5};
    int n = 4;

    int sum = 0;

    for(int i=0;i<n;i++)
        sum += arr[i];

    if(sum % 2 != 0)
    {
        printf("Not Possible\n");
        return 0;
    }

    int target = sum / 2;

    int dp[MAX][MAX] = {0};

    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=target;j++)
        {
            if(arr[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    printf("Possible: %d\n", dp[n][target]);

    return 0;
}