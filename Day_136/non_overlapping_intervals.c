#include <stdio.h>

struct Interval
{
    int start;
    int end;
};

void swap(struct Interval*, struct Interval*);
void sort(struct Interval[], int);

int main()
{
    struct Interval arr[]={{1,2},{1,2},{1,2}};
    int n=3;

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

    printf("Intervals to Remove = %d\n", remove);

    return 0;
}