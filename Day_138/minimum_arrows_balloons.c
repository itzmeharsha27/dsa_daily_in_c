#include <stdio.h>

// Minimum Number of Arrows to Burst Balloons using Greedy

struct Balloon
{
    int start;
    int end;
};

void swap(struct Balloon *a, struct Balloon *b)
{
    struct Balloon t=*a;
    *a=*b;
    *b=t;
}

void sort(struct Balloon arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j].end>arr[j+1].end)
                swap(&arr[j],&arr[j+1]);
        }
    }
}

int main()
{
    struct Balloon arr[]={{10,16},{2,8},{1,6},{7,12}};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,n);

    int arrows=1;
    int lastEnd=arr[0].end;

    // Greedily shoot arrows at the earliest ending balloon
    for(int i=1;i<n;i++)
    {
        if(arr[i].start>lastEnd)
        {
            arrows++;
            lastEnd=arr[i].end;
        }
    }

    printf("Minimum Number of Arrows = %d\n",arrows);

    return 0;
}