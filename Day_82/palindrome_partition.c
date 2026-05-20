#include <stdio.h>
#include <string.h>

// Palindrome Partitioning using DP

#define MAX 100

int main()
{
    char s[] = "aab";
    int n = strlen(s);

    int isPal[MAX][MAX] = {0};

    // Step 1: Precompute palindrome table
    for(int i=0;i<n;i++)
        isPal[i][i] = 1;

    for(int len=2; len<=n; len++)
    {
        for(int i=0;i<=n-len;i++)
        {
            int j = i + len - 1;

            if(s[i] == s[j])
            {
                if(len == 2)
                    isPal[i][j] = 1;
                else
                    isPal[i][j] = isPal[i+1][j-1];
            }
        }
    }

    // Step 2: DP for minimum cuts
    int dp[MAX];

    for(int i=0;i<n;i++)
    {
        if(isPal[0][i])
            dp[i] = 0;
        else
        {
            dp[i] = i;
            for(int j=0;j<i;j++)
            {
                if(isPal[j+1][i] &&  dp[j]+1 < dp[i])
                    dp[i] = dp[j]+1;
            }
        }
    }

    printf("Minimum Cuts Required: %d\n", dp[n-1]);

    return 0;
}