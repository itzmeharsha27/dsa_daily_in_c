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

int main()
{
    return 0;
}

void heapifyUp(struct Heap* h, int i)
{
    while(i>0)
    {
        int p=(i-1)/2;
        if(h->arr[i] < h->arr[p])
        {
            swap(&h->arr[i], &h->arr[p]);
            i=p;
        }
        else break;
    }
}