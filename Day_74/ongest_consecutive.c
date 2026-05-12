#include <stdio.h>

// Longest Consecutive Sequence using Hashing

#define MAX 1000

int main()
{
    int arr[] = {100,4,200,1,3,2};
    int n = 6;

    int hash[MAX] = {0};

    // Mark presence
    for(int i=0;i<n;i++)
        hash[arr[i]] = 1;

    int maxLen = 0;

    // Check sequences
    for(int i=0;i<n;i++)
    {
        // Start only if previous not present
        if(hash[arr[i]-1] == 0)
        {
            int curr = arr[i];
            int len = 1;

            while(hash[curr+1] == 1)
            {
                curr++;
                len++;
            }

            if(len > maxLen)
                maxLen = len;
        }
    }

    printf("Longest Consecutive Length: %d\n", maxLen);

    return 0;
}