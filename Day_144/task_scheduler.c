#include <stdio.h>

void swap(int a[2],int b[2])
{
    int t;

    t=a[0];
    a[0]=b[0];
    b[0]=t;

    t=a[1];
    a[1]=b[1];
    b[1]=t;
}

int main()
{
    int people[][2]={{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    int n=6;

    int result[10][2];

    return 0;
}