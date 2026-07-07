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

    return 0;
}