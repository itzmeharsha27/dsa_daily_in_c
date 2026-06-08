#include <stdio.h>
#include <string.h>

#define MAX 100

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
            {
            }
        }
    }

    return 0;
}