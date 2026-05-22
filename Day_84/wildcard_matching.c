#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s[] = "baaabab";
    char p[] = "ba*a?";

    int dp[MAX][MAX] = {0};

    int n = strlen(s);
    int m = strlen(p);

    dp[0][0] = 1;

    for(int j=1;j<=m;j++)
    {
        if(p[j-1] == '*')
            dp[0][j] = dp[0][j-1];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
        }
    }

    return 0;
}