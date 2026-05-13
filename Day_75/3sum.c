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