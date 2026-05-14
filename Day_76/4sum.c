#include <stdio.h>

// 4Sum Problem

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
    int arr[] = {1,0,-1,0,-2,2};
    int n = 6;
    int target = 0;

    sort(arr, n);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l = j+1, r = n-1;

            while(l < r)
            {
                int sum = arr[i] + arr[j] + arr[l] + arr[r];

                if(sum == target)
                {
                    printf("%d %d %d %d\n", arr[i], arr[j], arr[l], arr[r]);
                    l++; r--;
                }
                else if(sum < target)
                    l++;
                else
                    r--;
            }
        }
    }

    return 0;
}