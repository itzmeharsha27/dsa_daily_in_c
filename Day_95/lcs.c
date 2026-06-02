#include <stdio.h>
#include <string.h>

// Longest Common Subsequence (Classic DP Problem)

#define MAX 100

int max(int a,int b)
{
    return a > b ? a : b;
}

int main()
{
    char s1[] = "abcde";
    char s2[] = "ace";

    int dp[MAX][MAX] = {0};

    int n = strlen(s1);
    int m = strlen(s2);

    // Build DP table
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    printf("LCS Length Between \"%s\" and \"%s\" = %d\n", s1, s2, dp[n][m]);

    return 0;
}