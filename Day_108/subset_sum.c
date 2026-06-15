#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {3,34,4,12,5,2};
    int n = 6;
    int sum = 9;

    int dp[MAX][MAX] = {0};

    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    return 0;
}