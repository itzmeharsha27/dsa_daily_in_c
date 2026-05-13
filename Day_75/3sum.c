#include <stdio.h>

void sort(int arr[], int n);

int main()
{
    int arr[] = {-1,0,1,2,-1,-4};
    int n = 6;

    sort(arr, n);

    for(int i=0;i<n;i++)
    {
        int l = i+1, r = n-1;

        while(l < r)
        {
            int sum = arr[i] + arr[l] + arr[r];
        }
    }

    return 0;
}