#include <stdio.h>

// Non-overlapping Intervals

struct Interval
{
    int start;
    int end;
};

void swap(struct Interval*, struct Interval*);
void sort(struct Interval[], int);

int main()
{
    struct Interval arr[]={{1,2},{2,3},{3,4},{1,3}};
    int n=4;

    sort(arr,n);

    int remove=0;
    int prevEnd=arr[0].end;

    for(int i=1;i<n;i++)
    {
        if(arr[i].start < prevEnd)
            remove++;
        else
            prevEnd=arr[i].end;
    }

    return 0;
}