#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    int lis[MAX], lds[MAX];
    int maxLen = 0;

    for(int i=0;i<n;i++)
    {
        lis[i] = 1;
        lds[i] = 1;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i] > arr[j] && lis[j]+1 > lis[i])
                lis[i] = lis[j]+1;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>i;j--)
        {
            if(arr[i] > arr[j] && lds[j]+1 > lds[i])
                lds[i] = lds[j]+1;
        }
    }

    for(int i=0;i<n;i++)
    {
        int len = lis[i] + lds[i] - 1;
        if(len > maxLen)
            maxLen = len;
    }

    printf("Length: %d\n", maxLen);

    return 0;
}