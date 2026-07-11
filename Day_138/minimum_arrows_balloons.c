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

int main()
{
    return 0;
}