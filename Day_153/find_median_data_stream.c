#include <stdio.h>

// Median Finder using Sorting

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int arr[]={1,2,3};
    int size=3;

    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i]>arr[j])
                swap(&arr[i],&arr[j]);

    if(size%2==0)
        printf("Median = %.1f\n",(arr[size/2-1]+arr[size/2])/2.0);
    else
        printf("Median = %d\n",arr[size/2]);

    return 0;
}