#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s[] = "abcda";

    int dp[MAX][MAX] = {0};
    int n = strlen(s);

    for(int i=0;i<n;i++)
        dp[i][i] = 1;

    for(int len=2; len<=n; len++)
    {
    }

    return 0;
}