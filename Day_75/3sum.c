#include <stdio.h>

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
    int arr[] = {0,0,0,0};
    int n = 4;

    sort(arr, n);

    printf("Triplets:\n");

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