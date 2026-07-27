#include <stdio.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int arr[]={5,2,8,4};
    int size=4;

    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i]>arr[j])
                swap(&arr[i],&arr[j]);

    float median=(arr[size/2-1]+arr[size/2])/2.0;

    printf("Median = %.1f\n",median);

    return 0;
}