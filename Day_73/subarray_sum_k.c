#include <stdio.h>

#define MAX 1000

int main()
{
    int arr[] = {3,4,7,2,-3,1,4,2};
    int n = 8, k = 7;

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

    printf("Count: %d\n", count);

    return 0;
}