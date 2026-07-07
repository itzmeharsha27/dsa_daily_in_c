#include <stdio.h>

struct Interval
{
    int start;
    int end;
};

void swap(struct Interval *a, struct Interval *b)
{
    struct Interval t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    return 0;
}