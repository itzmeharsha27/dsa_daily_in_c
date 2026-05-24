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