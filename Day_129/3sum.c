#include <stdio.h>

int arr[] = {-1,0,1,2,-1,-4};
int n = 6;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void sort()
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main()
{
    return 0;
}