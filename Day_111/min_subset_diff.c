#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {1,6,11,5};
    int n = 4;

    int dp[MAX][MAX] = {0};

    int total = 0;
    for(int i=0;i<n;i++)
        total += arr[i];

    int sum = total / 2;

    return 0;
}