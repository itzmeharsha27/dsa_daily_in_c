#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Min Heap
struct Heap
{
    int arr[MAX];
    int size;
};

void swap(int *a, int *b)
{
    int t=*a; *a=*b; *b=t;
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

void insert(struct Heap* h, int val)
{
    h->arr[h->size] = val;
    heapifyUp(h, h->size);
    h->size++;
}

int extractMin(struct Heap* h)
{
    int val = h->arr[0];
    h->arr[0] = h->arr[--h->size];
    heapifyDown(h, 0);
    return val;
}

// Kth Largest
int kthLargest(int arr[], int n, int k)
{
    struct Heap h;
    h.size = 0;

    for(int i=0;i<n;i++)
    {
        insert(&h, arr[i]);

        if(h.size > k)
            extractMin(&h);
    }

    return h.arr[0];
}

int main()
{
    int arr[] = {3,2,1,5,6,4};
    int k = 2;

    printf("Kth Largest: %d\n", kthLargest(arr, 6, k));

    return 0;
}