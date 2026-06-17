#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {2,3,5,6,8,10};
    int n = 6;
    int sum = 10;

    int dp[MAX][MAX] = {0};

    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    for(int j=1;j<=sum;j++)
        dp[0][j] = 0;

    return 0;
}