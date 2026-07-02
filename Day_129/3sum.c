#include <stdio.h>

// 3Sum using Sorting + Two Pointers

int arr[] = {-1,0,1,2,-1,-4};
int n = 6;

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void sort()
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
}

int main()
{
    sort();

    for(int i=0;i<n-2;i++)
    {
        if(i>0 && arr[i]==arr[i-1])
            continue;

        int l=i+1,r=n-1;

        while(l<r)
        {
            int sum=arr[i]+arr[l]+arr[r];

            if(sum==0)
            {
                printf("%d %d %d\n",arr[i],arr[l],arr[r]);
                l++;
                r--;
            }
            else if(sum<0)
                l++;
            else
                r--;
        }
    }

    return 0;
}