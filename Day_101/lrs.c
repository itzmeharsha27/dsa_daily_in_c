#include <stdio.h>
#include <string.h>

// Longest Repeating Subsequence

#define MAX 100

int max(int a,int b)
{
    return a > b ? a : b;
}

int main()
{
    char s[] = "aab";

    int dp[MAX][MAX] = {0};
    int n = strlen(s);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i-1] == s[j-1] && i != j)
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return 0;
}