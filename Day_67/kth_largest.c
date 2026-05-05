#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Heap
{
    int arr[MAX];
    int size;
};

int extractMin(struct Heap* h);

int main()
{
    return 0;
}

int extractMin(struct Heap* h)
{
    int val = h->arr[0];
    h->arr[0] = h->arr[--h->size];
    heapifyDown(h, 0);
    return val;
}