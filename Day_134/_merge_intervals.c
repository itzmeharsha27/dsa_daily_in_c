#include <stdio.h>

struct Interval
{
    int start;
    int end;
};

void swap(struct Interval*,struct Interval*);
void sort(struct Interval[],int);

int main()
{
    struct Interval arr[]={{1,3},{2,6},{8,10},{15,18}};
    int n=4;

    sort(arr,n);

    struct Interval current=arr[0];

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

    return 0;
}