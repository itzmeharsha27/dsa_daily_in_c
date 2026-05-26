#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {40,20,30,10,30};
    int n = 5;

    int dp[MAX][MAX] = {0};

    for(int len=2; len<n; len++)
    {
        for(int i=1;i<n-len+1;i++)
        {
            int j = i + len - 1;
            dp[i][j] = 1000000;
        }
    }

    return 0;
}