#include <stdio.h>

// Merge Intervals

struct Interval
{
    int start;
    int end;
};

void swap(struct Interval *a,struct Interval *b)
{
    struct Interval t=*a;
    *a=*b;
    *b=t;
}

void sort(struct Interval arr[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j].start>arr[j+1].start)
                swap(&arr[j],&arr[j+1]);
}

int main()
{
    struct Interval arr[]={{1,3},{2,6},{8,10},{15,18}};
    int n=4;

    sort(arr,n);

    struct Interval current=arr[0];

    printf("Merged Intervals:\n");

    for(int i=1;i<n;i++)
    {
        if(arr[i].start<=current.end)
        {
            if(arr[i].end>current.end)
                current.end=arr[i].end;
        }
        else
        {
            printf("[%d,%d]\n",current.start,current.end);
            current=arr[i];
        }
    }

    printf("[%d,%d]\n",current.start,current.end);

    return 0;
}