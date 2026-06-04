#include <stdio.h>
#include <string.h>

// LPS using DP

#define MAX 100

int max(int a,int b)
{
    return a > b ? a : b;
}

int main()
{
    char s[] = "bbbab";

    int dp[MAX][MAX] = {0};

    int n = strlen(s);

    // Base case
    for(int i=0;i<n;i++)
        dp[i][i] = 1;

    // DP computation
    for(int len=2; len<=n; len++)
    {
        for(int i=0;i<=n-len;i++)
        {
            int j = i + len - 1;

            if(s[i] == s[j])
                dp[i][j] = 2 + dp[i+1][j-1];
            else
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
        }
    }

    printf("Longest Palindromic Subsequence Length: %d\n", dp[0][n-1]);

    return 0;
}