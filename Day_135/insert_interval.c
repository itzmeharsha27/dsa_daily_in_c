#include <stdio.h>

struct Interval
{
    int start;
    int end;
};

int main()
{
    struct Interval arr[] = {{1,2},{3,5},{6,7},{8,10},{12,16}};
    struct Interval newInterval = {4,8};
    int n = 5;

    int i = 0;

    printf("Intervals After Insertion:\n");

    while(i < n && arr[i].end < newInterval.start)
    {
        printf("[%d,%d]\n", arr[i].start, arr[i].end);
        i++;
    }

    while(i < n && arr[i].start <= newInterval.end)
    {
        if(arr[i].start < newInterval.start)
            newInterval.start = arr[i].start;

        if(arr[i].end > newInterval.end)
            newInterval.end = arr[i].end;

        i++;
    }

    printf("[%d,%d]\n", newInterval.start, newInterval.end);

    while(i < n)
    {
        printf("[%d,%d]\n", arr[i].start, arr[i].end);
        i++;
    }

    return 0;
}