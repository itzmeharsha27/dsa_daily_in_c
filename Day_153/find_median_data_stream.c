#include <stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int arr[100];
    int size=0;

    arr[size++]=1;
    arr[size++]=2;
    arr[size++]=3;

    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i]>arr[j])
                swap(&arr[i],&arr[j]);

    float median;

    if(size%2==0)
        median=(arr[size/2-1]+arr[size/2])/2.0;
    else
        median=arr[size/2];

    return 0;
}