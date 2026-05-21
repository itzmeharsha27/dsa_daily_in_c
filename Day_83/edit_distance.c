#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s1[] = "horse";
    char s2[] = "ros";

    int dp[MAX][MAX];

    int n = strlen(s1);
    int m = strlen(s2);

    for(int i=0;i<=n;i++)
        dp[i][0] = i;

    for(int j=0;j<=m;j++)
        dp[0][j] = j;

    return 0;
}