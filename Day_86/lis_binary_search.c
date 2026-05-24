#include <stdio.h>

#define MAX 100

int binarySearch(int arr[], int l, int r, int key)
{
    while(l < r)
    {
        int mid = (l + r) / 2;

        if(arr[mid] < key)
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int main()
{
    int arr[] = {0,1,0,3,2,3};
    int n = 6;

    int tail[MAX];
    int size = 0;

    tail[size++] = arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i] > tail[size-1])
            tail[size++] = arr[i];
        else
        {
            int idx = binarySearch(tail, 0, size-1, arr[i]);
            tail[idx] = arr[i];
        }
    }

    printf("LIS Length: %d\n", size);

    return 0;
}