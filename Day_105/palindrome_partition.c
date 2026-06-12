#include <stdio.h>
#include <string.h>

// Palindrome Partition using DP

#define MAX 100
#define INF 1000000

int isPalindrome(char s[], int i, int j)
{
    while(i < j)
    {
        if(s[i] != s[j])
            return 0;
        i++; j--;
    }
    return 1;
}

int main()
{
    char s[] = "aab";

    int dp[MAX][MAX] = {0};
    int n = strlen(s);

    // DP computation
    for(int len=2; len<=n; len++)
    {
        for(int i=0;i<=n-len;i++)
        {
            int j = i + len - 1;

            if(isPalindrome(s,i,j))
                dp[i][j] = 0;
            else
            {
                dp[i][j] = INF;
                for(int k=i;k<j;k++)
                {
                    int cost = dp[i][k] + dp[k+1][j] + 1;
                    if(cost < dp[i][j])
                        dp[i][j] = cost;
                }
            }
        }
    }

    printf("Minimum Cuts Needed: %d\n", dp[0][n-1]);

    return 0;
}