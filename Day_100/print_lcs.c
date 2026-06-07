#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s1[] = "abcde";
    char s2[] = "ace";

    int dp[MAX][MAX] = {0};

    int n = strlen(s1);
    int m = strlen(s2);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
        }
    }

    return 0;
}