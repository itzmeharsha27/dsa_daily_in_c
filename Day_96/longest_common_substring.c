#include <stdio.h>
#include <string.h>

// Longest Common Substring (DP)

#define MAX 100

int main()
{
    char s1[] = "abcde";
    char s2[] = "abfce";

    int dp[MAX][MAX] = {0};

    int n = strlen(s1);
    int m = strlen(s2);

    int maxLen = 0;

    // Build DP table
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
                if(dp[i][j] > maxLen)
                    maxLen = dp[i][j];
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    printf("Longest Common Substring Length: %d\n", maxLen);

    return 0;
}