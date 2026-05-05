#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Heap
{
    int arr[MAX];
    int size;
};

void heapifyUp(struct Heap* h, int i);
void insert(struct Heap* h, int val);

int main()
{
    return 0;
}

void insert(struct Heap* h, int val)
{
}