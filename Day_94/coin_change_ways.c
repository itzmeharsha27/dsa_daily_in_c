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

    return 0;
}