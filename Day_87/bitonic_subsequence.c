#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {1,11,2,10,4,5,2,1};
    int n = 8;

    int lis[MAX], lds[MAX];

    for(int i=0;i<n;i++)
    {
        lis[i] = 1;
        lds[i] = 1;
    }

    return 0;
}