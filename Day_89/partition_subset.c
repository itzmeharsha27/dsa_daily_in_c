#include <stdio.h>

// Partition Equal Subset Sum (Subset Sum DP)

#define MAX 100

int main()
{
    int arr[] = {1,5,11,5};
    int n = 4;

    int sum = 0;

    // Calculate total sum
    for(int i=0;i<n;i++)
        sum += arr[i];

    // If odd, not possible
    if(sum % 2 != 0)
    {
        printf("Partition Not Possible\n");
        return 0;
    }

    int target = sum / 2;

    int dp[MAX][MAX] = {0};

    // Base case
    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    // Fill DP table
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

    printf("Equal Partition Possible: %d\n", dp[n][target]);

    return 0;
}