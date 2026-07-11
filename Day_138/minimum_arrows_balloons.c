#include <stdio.h>

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
        for(int j=0;j<n-i-1;j++)
            if(arr[j].end>arr[j+1].end)
                swap(&arr[j],&arr[j+1]);
}

int main()
{
    struct Balloon arr[]={{10,16},{2,8},{1,6},{7,12}};
    int n=4;

    sort(arr,n);

    return 0;
}