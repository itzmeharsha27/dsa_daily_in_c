#include <stdio.h>

// Subarray Sum Equals K

#define MAX 1000

int main()
{
    int arr[] = {1,1,1};
    int n = 3, k = 2;

    int sum = 0, count = 0;
    int freq[MAX] = {0};

    freq[0] = 1;

    for(int i=0;i<n;i++)
    {
        sum += arr[i];

        if(sum - k >= 0)
            count += freq[sum - k];

        freq[sum]++;
    }

    return 0;
}