#include <stdio.h>

// Non-overlapping Intervals using Greedy

struct Interval
{
    int start;
    int end;
};

void swap(struct Interval *a, struct Interval *b)
{
    struct Interval t=*a;
    *a=*b;
    *b=t;
}

void sort(struct Interval arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j].end > arr[j+1].end)
                swap(&arr[j], &arr[j+1]);
        }
    }
}

int main()
{
    struct Interval arr[]={{1,2},{2,3},{3,4},{1,3}};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,n);

    int remove=0;
    int prevEnd=arr[0].end;

    // Greedily keep intervals with earliest end time
    for(int i=1;i<n;i++)
    {
        if(arr[i].start < prevEnd)
        {
            remove++;
        }
        else
        {
            prevEnd=arr[i].end;
        }
    }

    printf("Minimum Intervals to Remove = %d\n", remove);

    return 0;
}