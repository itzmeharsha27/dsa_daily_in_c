#include <stdio.h>

struct Interval
{
    int start;
    int end;
};

void swap(struct Interval *a, struct Interval *b)
{
    struct Interval t = *a;
    *a = *b;
    *b = t;
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
    return 0;
}