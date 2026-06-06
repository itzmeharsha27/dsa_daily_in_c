#include <stdio.h>
#include <string.h>

// Shortest Common Supersequence (via LCS)

#define MAX 100

int max(int a,int b)
{
    return a > b ? a : b;
}

int main()
{
    char s1[] = "abac";
    char s2[] = "cab";

    int dp[MAX][MAX] = {0};

    int n = strlen(s1);
    int m = strlen(s2);

    // Compute LCS
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    int scs_len = n + m - dp[n][m];

    printf("SCS Length for \"%s\" & \"%s\" = %d\n", s1, s2, scs_len);

    return 0;
}