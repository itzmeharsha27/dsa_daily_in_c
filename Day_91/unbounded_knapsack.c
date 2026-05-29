#include <stdio.h>

#define MAX 100

int main()
{
    int wt[] = {2,3,4};
    int val[] = {4,5,6};
    int n = 3;
    int W = 5;

    int dp[MAX][MAX] = {0};

    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(i==0 || w==0)
                dp[i][w] = 0;
        }
    }

    return 0;
}