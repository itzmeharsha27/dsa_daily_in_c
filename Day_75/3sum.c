#include <stdio.h>

// 3Sum Problem

void sort(int arr[], int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
}

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

            if(sum == 0)
            {
                printf("%d %d %d\n", arr[i], arr[l], arr[r]);
                l++; r--;
            }
            else if(sum < 0)
                l++;
            else
                r--;
        }
    }

    return 0;
}