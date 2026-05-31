#include <stdio.h>

#define MAX 100
#define INF 100000

int main()
{
    int coins[] = {1,2,5};
    int n = 3;
    int amount = 11;

    int dp[MAX][MAX];

    for(int i=0;i<=n;i++)
        for(int j=0;j<=amount;j++)
            dp[i][j] = INF;

    for(int i=0;i<=n;i++)
        dp[i][0] = 0;

    return 0;
}