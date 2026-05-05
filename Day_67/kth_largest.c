#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Heap
{
    int arr[MAX];
    int size;
};

void swap(int *a, int *b);

void heapifyDown(struct Heap* h, int i)
{
    int l=2*i+1, r=2*i+2, smallest=i;

    if(l<h->size && h->arr[l]<h->arr[smallest])
        smallest=l;

    if(r<h->size && h->arr[r]<h->arr[smallest])
        smallest=r;

    if(smallest!=i)
    {
        swap(&h->arr[i], &h->arr[smallest]);
        heapifyDown(h, smallest);
    }
}