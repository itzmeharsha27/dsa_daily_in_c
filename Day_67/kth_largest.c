#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Heap
{
    int arr[MAX];
    int size;
};

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
    printf("%d\n", kthLargest(arr, 6, 2));
    return 0;
}