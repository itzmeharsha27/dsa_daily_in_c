#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {0,1,0,3,2,3};
    int n = 6;

    int dp[MAX];
    int maxLen = 0;

    for(int i=0;i<n;i++)
        dp[i] = 1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i] > arr[j] && dp[j]+1 > dp[i])
                dp[i] = dp[j]+1;
        }

        if(dp[i] > maxLen)
            maxLen = dp[i];
    }

    printf("LIS Length: %d\n", maxLen);

    return 0;
}