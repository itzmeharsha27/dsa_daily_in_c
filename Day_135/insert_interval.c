#include <stdio.h>

// Insert Interval using Linear Traversal

struct Interval
{
    int start;
    int end;
};

int main()
{
    struct Interval arr[] = {{1,3},{6,9}};
    struct Interval newInterval = {2,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;

    printf("Intervals After Insertion:\n");

    // Print intervals before overlap
    while(i < n && arr[i].end < newInterval.start)
    {
        printf("[%d,%d]\n", arr[i].start, arr[i].end);
        i++;
    }

    // Merge overlapping intervals
    while(i < n && arr[i].start <= newInterval.end)
    {
        if(arr[i].start < newInterval.start)
            newInterval.start = arr[i].start;

        if(arr[i].end > newInterval.end)
            newInterval.end = arr[i].end;

        i++;
    }

    // Print merged interval
    printf("[%d,%d]\n", newInterval.start, newInterval.end);

    // Print remaining intervals
    while(i < n)
    {
        printf("[%d,%d]\n", arr[i].start, arr[i].end);
        i++;
    }

    return 0;
}