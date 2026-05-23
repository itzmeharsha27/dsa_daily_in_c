#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {10,9,2,5,3,7,101,18};
    int n = 8;

    int dp[MAX];

    for(int i=0;i<n;i++)
        dp[i] = 1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        }
    }

    return 0;
}