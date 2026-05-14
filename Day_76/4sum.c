#include <stdio.h>

void sort(int arr[], int n);

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
        }
    }

    return 0;
}