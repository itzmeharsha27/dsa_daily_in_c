#include <stdio.h>

// Minimum Number of Arrows to Burst Balloons

struct Balloon
{
    int start;
    int end;
};

void swap(struct Balloon*,struct Balloon*);
void sort(struct Balloon[],int);

int main()
{
    struct Balloon arr[]={{10,16},{2,8},{1,6},{7,12}};
    int n=4;

    sort(arr,n);

    int arrows=1;
    int lastEnd=arr[0].end;

    for(int i=1;i<n;i++)
    {
        if(arr[i].start>lastEnd)
        {
            arrows++;
            lastEnd=arr[i].end;
        }
    }

    return 0;
}