#include <stdio.h>

#define MAX 100

int main()
{
    int arr[] = {1,6,11,5};
    int n = 4;

    int sum = 0;

    for(int i=0;i<n;i++)
        sum += arr[i];

    return 0;
}