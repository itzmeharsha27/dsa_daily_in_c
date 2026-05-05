#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Heap
{
    int arr[MAX];
    int size;
};

void swap(int *a, int *b);

int main()
{
    return 0;
}

void swap(int *a, int *b)
{
    int t=*a; *a=*b; *b=t;
}