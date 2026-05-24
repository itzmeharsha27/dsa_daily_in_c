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
    int arr[] = {10,9,2,5,3,7,101,18};
    int n = 8;

    int tail[MAX];
    int size = 0;

    tail[size++] = arr[0];

    return 0;
}