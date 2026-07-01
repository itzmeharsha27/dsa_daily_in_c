#include <stdio.h>

#define MAX 100

int tree[4 * MAX];
int arr[MAX] = {1, 3, 5, 7, 9, 11};

void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = arr[start];
        return;
    }

    int mid = (start + end) / 2;

    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start || l > end)
        return 0;

    if(l <= start && end <= r)
        return tree[node];

    int mid = (start + end) / 2;

    return query(2 * node, start, mid, l, r) +
           query(2 * node + 1, mid + 1, end, l, r);
}

int main()
{
    build(1, 0, 5);

    return 0;
}