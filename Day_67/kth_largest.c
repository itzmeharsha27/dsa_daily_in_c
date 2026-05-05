#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Heap
{
    int arr[MAX];
    int size;
};

void swap(int *a, int *b);
void heapifyUp(struct Heap* h, int i);

void insert(struct Heap* h, int val)
{
    h->arr[h->size] = val;
    heapifyUp(h, h->size);
    h->size++;
}