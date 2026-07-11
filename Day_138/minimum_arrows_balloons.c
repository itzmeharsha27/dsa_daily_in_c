#include <stdio.h>

struct Balloon
{
    int start;
    int end;
};

void swap(struct Balloon*,struct Balloon*);
void sort(struct Balloon[],int);

int main()
{
    struct Balloon arr[]={{1,2},{3,4},{5,6},{7,8}};
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

    printf("Minimum Arrows = %d\n",arrows);

    return 0;
}