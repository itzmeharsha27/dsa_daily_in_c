#include <stdio.h>

#define MAX 100

int main()
{
    int price[] = {2,5,7,8,10};
    int n = 5;

    int dp[MAX][MAX] = {0};

    for(int i=0;i<=n;i++)
    {
        for(int len=0;len<=n;len++)
        {
            if(i==0 || len==0)
                dp[i][len] = 0;
        }
    }

    return 0;
}