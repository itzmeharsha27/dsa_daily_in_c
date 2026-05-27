#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {1,6,11,5};
    int n = 4;

    int sum = 0;

    for(int i=0;i<n;i++)
        sum += arr[i];

    int target = sum / 2;

    int dp[MAX][MAX] = {0};

    return 0;
}