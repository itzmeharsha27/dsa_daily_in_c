#include <stdio.h>

#define MAX 1000

int main()
{
    int arr[] = {100,4,200,1,3,2};
    int n = 6;

    int hash[MAX] = {0};

    for(int i=0;i<n;i++)
        hash[arr[i]] = 1;

    return 0;
}