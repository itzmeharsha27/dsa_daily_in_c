#include <stdio.h>

#define MAX 100

int main()
{
    int coins[] = {1,2,5};
    int n = 3;
    int amount = 5;

    int dp[MAX][MAX] = {0};

    for(int i=0;i<=n;i++)
        dp[i][0] = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=amount;j++)
        {
            if(coins[i-1] <= j)
            {
            }
        }
    }

    return 0;
}